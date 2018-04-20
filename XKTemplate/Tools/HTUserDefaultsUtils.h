//
//  HTUserDefaultsUtils.h
//  Hongtang
//
//  Created by Derek.zhao on 17/2/24.
//  Copyright © 2017年 HongTang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HTUserDefaultsUtils : NSObject

+(void)saveValue:(id) value forKey:(NSString *)key;
+(id)valueWithKey:(NSString *)key;
+(BOOL)boolValueWithKey:(NSString *)key;
+(void)saveBoolValue:(BOOL)value withKey:(NSString *)key;
+(void)removeValueWithKey:(NSString *)key;
@end
