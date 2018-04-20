//
//  BaseDto.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "HTObject.h"

@interface BaseDto : HTObject
//请求结果代码
@property (copy ,nonatomic)NSString *resultCode;
////请求结果信息 “请求成功” 或者 “请求失败”
@property (copy ,nonatomic)NSString *resultMessage;
//请求结果
@property (retain, nonatomic)NSDictionary *data;

@end
