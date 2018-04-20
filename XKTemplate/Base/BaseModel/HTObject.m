//
//  HTObject.m
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "HTObject.h"
#import <objc/runtime.h>

@implementation HTObject
MJExtensionLogAllProperties
//初始化
+ (instancetype)shareInstance
{
    id safeObject = [[[self class] alloc] init];
    
    return safeObject;
}

- (NSArray *)getAllProperties
{
    u_int count;
    objc_property_t *properties  =class_copyPropertyList([self class], &count);
    NSMutableArray *propertiesArray = [NSMutableArray arrayWithCapacity:count];
    for (int i = 0; i<count; i++)
    {
        const char* propertyName =property_getName(properties[i]);
        [propertiesArray addObject: [NSString stringWithUTF8String: propertyName]];
    }
    free(properties);
    return propertiesArray;
}

+ (NSDictionary*)getObjectData : (id)ojb {
    NSMutableDictionary *dic = [NSMutableDictionary dictionary];
    unsigned int propsCount;
    objc_property_t *props = class_copyPropertyList([ojb class], &propsCount);
    for(int i = 0;i < propsCount; i++)
    {
        objc_property_t prop = props[i];
        NSString *propName = [NSString stringWithUTF8String:property_getName(prop)];
        id value = [ojb valueForKey:propName];
        if(value == nil) {
            continue;
        } else {
            value = [self getObjectInternal:value];
        }
        [dic setObject:value forKey:propName];
    }
    return dic;
}



#pragma mark - Private Method
+(id)getObjectInternal:(id)obj {
    if([obj isKindOfClass:[NSString class]] ||
       [obj isKindOfClass:[NSNumber class]] ||
       [obj isKindOfClass:[NSNull class]]) {
        return obj;
    }
    if([obj isKindOfClass:[NSArray class]]) {
        NSArray *objarr = obj;
        NSMutableArray *arr = [NSMutableArray arrayWithCapacity:objarr.count];
        for(int i = 0;i < objarr.count; i++) {
            [arr setObject:[self getObjectInternal:[objarr objectAtIndex:i]] atIndexedSubscript:i];
        }
        return arr;
    }
    if([obj isKindOfClass:[NSDictionary class]]) {
        NSDictionary *objdic = obj;
        NSMutableDictionary *dic = [NSMutableDictionary dictionaryWithCapacity:[objdic count]];
        for(NSString *key in objdic.allKeys) {
            [dic setObject:[self getObjectInternal:[objdic objectForKey:key]] forKey:key];
        }
        return dic;
    }
    return [self getObjectData:obj];
}

- (void)setValuesForKeysWithDictionary:(NSDictionary<NSString *,id> *)keyedValues
{
    //如果keyedValues不是一个NSDictionary类型，则返回
    if (![keyedValues isKindOfClass:[NSDictionary class]]) {
        NSLog(@"#warning: %@ 数据格式错误", keyedValues);
        return;
    } else {
        
    }
    [super setValuesForKeysWithDictionary:keyedValues];
}

- (void)setValue:(id)value forKey:(NSString *)keyPath
{
    if ([value isKindOfClass:[NSNull class]] ||
        [value isEqual:@"<null>"] ||
        !value) {
        
    } else {
        @try {
            [super setValue:value forKey:keyPath];
        }
        @catch (NSException *exception) {
            NSLog(@"#warning:字段类型不对");
        }
        @finally {
            
        }
    }
}

@end
