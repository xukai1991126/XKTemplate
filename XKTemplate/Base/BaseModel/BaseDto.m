//
//  BaseDto.m
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "BaseDto.h"

@implementation BaseDto

MJExtensionLogAllProperties

- (void)setValue:(id)value forUndefinedKey:(NSString *)key
{
    [super setValue:value forUndefinedKey:key];
}
@end
