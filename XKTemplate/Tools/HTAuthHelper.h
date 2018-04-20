//
//  HTAuthHelper.h
//  Hongtang
//
//  Created by Derek.zhao on 17/2/23.
//  Copyright © 2017年 HongTang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HTAuthHelper : NSObject
//根据证件类型获取id
+ (NSInteger)getCardTypeIdWithName:(NSString *)cardName;

//根据证件id获取类型名称
+ (NSString *)getCardTypeNameWithId:(NSInteger)typeId;




@end
