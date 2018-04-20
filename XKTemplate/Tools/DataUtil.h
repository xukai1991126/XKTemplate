//
//  DataUtil.h
//  Hongtang
//
//  Created by 徐凯 on 2017/4/25.
//  Copyright © 2017年 HongTang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataUtil : NSObject

+ (NSMutableDictionary<NSString *,NSArray *> *_Nonnull)dictinaryTransformFromArray:(NSArray *_Nonnull)dataList;

+ (NSMutableArray *_Nonnull)imageArrayformFromArray:(NSArray *_Nonnull)dataList;

+ (NSMutableArray *_Nonnull)titleArrayformFromArray:(NSArray *_Nonnull)dataList;

+ (NSMutableArray *_Nonnull)imageArrayformFromDic:(NSMutableDictionary *_Nonnull)dic;

+ (NSMutableArray *_Nonnull)titleArrayformFromDic:(NSMutableDictionary *_Nonnull)dic;

+ (NSMutableArray *_Nonnull)totalIndexformFromArray:(NSArray *_Nonnull)dataList currentIndex:(NSInteger)index;

@end
