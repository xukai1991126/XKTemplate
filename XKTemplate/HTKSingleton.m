//
//  HTSingleton.m
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "HTKSingleton.h"

#define kUserDefaultSession @"session"


@implementation HTKSingleton

+ (HTKSingleton *)Instance{
    static HTKSingleton *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[HTKSingleton alloc]init];
    });
    return instance;
}

#pragma mark - 用户

/**
 *  判断当前是否有登陆用户
 *
 *  @return 如果已登录则返回YES，未登录返回NO
 */
- (BOOL)hasLogin
{
    if (![StringUtil isNullOrEmpty:self.sessionKey]) {
        return YES;
    }
    if ([HTUserDefaultsUtils valueWithKey:kUserDefaultSession]) {
        return YES;
    }
    return NO;
}

- (BOOL) hasNameAuth{
    if (self.userInfoModel.nameAuth==1||self.userInfoModel.nameAuth==3) {
        return YES;
    }else
        return NO;
}

- (NSString *)sessionKey {
    if (![StringUtil isNullOrEmpty:_sessionKey]) {
        return _sessionKey;
    }
    
    if ([HTUserDefaultsUtils valueWithKey:kUserDefaultSession]) {
        _sessionKey = [HTUserDefaultsUtils valueWithKey:kUserDefaultSession];
    }
    return _sessionKey;
}


- (void)saveSession {
    if (![NSString isNullOrEmpty:self.sessionKey]) {
        [HTUserDefaultsUtils saveValue:self.sessionKey forKey:kUserDefaultSession];
    }
}

- (void)removeSession {
    self.sessionKey = nil;
    if ([HTUserDefaultsUtils valueWithKey:kUserDefaultSession]) {
        [HTUserDefaultsUtils removeValueWithKey:kUserDefaultSession];
    }
//    //在这里删除备份的手势密码
//    if([[NSUserDefaults standardUserDefaults]valueForKey:BackupCopyGesturePassword]){
//        [[NSUserDefaults standardUserDefaults]setObject:nil forKey:BackupCopyGesturePassword];
//        [[NSUserDefaults standardUserDefaults]synchronize];
//    }
}


@end
