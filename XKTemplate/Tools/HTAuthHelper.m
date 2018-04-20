//
//  HTAuthHelper.m
//  Hongtang
//
//  Created by Derek.zhao on 17/2/23.
//  Copyright © 2017年 HongTang. All rights reserved.
//

#import "HTAuthHelper.h"

@implementation HTAuthHelper

//根据证件类型获取id
+ (NSInteger)getCardTypeIdWithName:(NSString *)cardName {
    NSInteger cardId = 0;
    if ([cardName containsString:@"身份证"]) {
        cardId = 10;
    }else if ([cardName containsString:@"港澳通行证"]) {
        cardId = 20;
    }else if ([cardName containsString:@"护照"]) {
        cardId = 30;
    }else if ([cardName containsString:@"台胞证"]) {
        cardId = 40;
    }
    return cardId;
}

//根据证件id获取类型名称
+ (NSString *)getCardTypeNameWithId:(NSInteger)typeId {
    NSString *typeName;
    if (typeId == 10) {//身份证
        typeName = @"身份证";
    }else if (typeId == 20) {//港澳通行证
        typeName = @"港澳通行证";
    }else if (typeId == 30) {//护照
        typeName = @"护照";
    }else if (typeId == 40) {//台胞证
        typeName = @"台胞证";
    }
    return typeName;
}


@end
