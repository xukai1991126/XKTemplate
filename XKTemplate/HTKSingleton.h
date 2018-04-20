//
//  HTSingleton.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface HTKSingleton : NSObject

+ (HTKSingleton *)Instance;

/**
 *  当前登录的用户
 */
@property(nonatomic, strong) NSString* sessionKey;
/**
 *  用户基本信息
 */
@property(nonatomic, strong) UserInfoModel* userInfoModel;

@property(nonatomic,strong) NSString* serviceNumber;
/**
 *  用户是否已经登录
 */
- (BOOL)hasLogin;

//是否已经实名认证
- (BOOL) hasNameAuth;

- (void)saveSession;

- (void)removeSession;

@end
