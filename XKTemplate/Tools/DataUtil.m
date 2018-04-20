//
//  DataUtil.m
//  Hongtang
//
//  Created by 徐凯 on 2017/4/25.
//  Copyright © 2017年 HongTang. All rights reserved.
//

#import "DataUtil.h"

@implementation DataUtil

+(NSMutableDictionary<NSString *,NSArray *> *_Nonnull)dictinaryTransformFromArray:(NSArray *_Nonnull)dataList{
    
    NSMutableDictionary *dic = [[NSMutableDictionary alloc]initWithCapacity:dataList.count];
    [dataList enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [dic setValue:((PicListModel *)obj).picUrls forKey:((PicListModel *)obj).msg];
    }];
    return dic;
}

+(NSMutableArray *_Nonnull)imageArrayformFromArray:(NSArray *_Nonnull)dataList{

    NSMutableArray *picUrlList=[[NSMutableArray array]init];
    [dataList enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [picUrlList addObjectsFromArray: ((PicListModel *)obj).picUrls];
    }];
    return picUrlList;
}

+(NSMutableArray *_Nonnull)titleArrayformFromArray:(NSArray *_Nonnull)dataList{
    
    NSMutableArray *titleList=[NSMutableArray arrayWithCapacity:[dataList count]];
    [dataList enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [titleList addObject:((PicListModel *)obj).msg];
    }];
    return titleList;
}

+(NSMutableArray *_Nonnull)imageArrayformFromDic:(NSMutableDictionary *_Nonnull)dic{
    
    NSMutableArray *imageList=[[NSMutableArray alloc]init];
    [dic enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) {
        NSArray *dataArray = (NSArray *)obj;
        [imageList addObjectsFromArray:dataArray];
    }];

    return imageList;
}

+(NSMutableArray *_Nonnull)titleArrayformFromDic:(NSMutableDictionary *_Nonnull)dic{
    
    NSMutableArray *titleList=[[NSMutableArray alloc]init];
    [dic enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) {
        NSString *titleString = (NSString *)key;
        [titleList addObject:titleString];
    }];
    
    return titleList;
}

+(NSMutableArray *_Nonnull)totalIndexformFromArray:(NSArray *_Nonnull)dataList currentIndex:(NSInteger)index{
    
    NSMutableArray *picUrlList=[[NSMutableArray array]init];
    [dataList enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        if ( idx >= index) {
            *stop = YES;
        }
        [picUrlList addObjectsFromArray: ((PicListModel *)obj).picUrls];
    }];
    return picUrlList;
}


@end
