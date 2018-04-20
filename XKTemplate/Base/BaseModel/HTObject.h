//
//  HTObject.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/21.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HTObject : NSObject
//初始化
+ (instancetype)shareInstance;

+ (NSDictionary*)getObjectData:(id)ojb;

@end
