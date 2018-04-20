//
//  BaseModel.h
//  黄轩博客 blog.libuqing.com
//
//  Created by 黄轩 on 16/12/26.
//  Copyright © 2016年 Yiss Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseModel : NSObject <NSCoding>

@property(assign,nonatomic )BOOL hasMoreListRecord;//是否拥有更多数据
@property (assign,nonatomic) BOOL emptyData;//是否请求的数据为空


@end
