//
//  HTTPRequest.h
//  NetworkHelper
//
//  Created by AndyPang on 2017/4/10.
//  Copyright © 2017年 AndyPang. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 以下Block的参数你根据自己项目中的需求来指定, 这里仅仅是一个演示的例子
 */

/**
 请求成功的block
 
 @param info     返回信息
 @param response 响应体数据
 */
typedef void(^RequestSuccess)(id response);
/**
 请求失败的block
 
 @param extInfo 扩展信息
 */
typedef void(^RequestFailure)(NSError *error);


@interface HTTPRequest : NSObject

#pragma mark - 登陆退出
/** 登录*/
+ (NSURLSessionTask *)getLoginWithParameters:(id)parameters success:(RequestSuccess)success failure:(RequestFailure)failure;
/** 退出*/
+ (NSURLSessionTask *)getExitWithParameters:(id)parameters success:(RequestSuccess)success failure:(RequestFailure)failure;


@end
