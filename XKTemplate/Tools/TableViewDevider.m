//
//  TableViewDevider.m
//  JJJR
//
//  Created by DamocsYang on 5/25/15.
//  Copyright (c) 2015 fengzeyan. All rights reserved.
//

#import "TableViewDevider.h"

@implementation TableViewDevider


+(UIView *)viewForSectionWithHeight:(CGFloat)height isTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine Title:(NSString *)title Image:(NSString *)image{
    
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, kScreenFullWidth,height)];
    view.backgroundColor = BACKGROUND_COLOR;
    
    if (topLine){
        UIView *topLineView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, kScreenFullWidth, 1.0/[UIScreen mainScreen].scale)];
        topLineView.backgroundColor = DEVIDE_LINE_COLOR;
        [view addSubview:topLineView];
    }
    
    if(bottomLine){
        UIView *bottomLineView = [[UIView alloc] initWithFrame:CGRectMake(0, view.frame.size.height - 1.0/[UIScreen mainScreen].scale, kScreenFullWidth, 1.0/[UIScreen mainScreen].scale)];
        bottomLineView.backgroundColor = DEVIDE_LINE_COLOR;
        [view addSubview:bottomLineView];
    }
    
    if (title) {
        UILabel* titleLabel = [[UILabel alloc]initWithFrame:CGRectMake(15, (height-20)/2, kScreenFullWidth - 40,20)];
        titleLabel.text = title;
        titleLabel.textColor = TEXT_COLOR;
        titleLabel.font = [UIFont systemFontOfSize:16.0f];
        [view addSubview:titleLabel];
    }
    
    if (image) {
        UIImageView *imageView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:image]];
        imageView.frame = CGRectMake(12, (height- 16)/2, 16, 16);
        [view addSubview:imageView];
    }
    return view;
}

+(UIView *)viewForSectionWithHeight:(CGFloat)height isTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine Title:(NSString *)title{
    
   return [self viewForSectionWithHeight:height isTopLine:topLine isBottomLine:bottomLine Title:title Image:nil];
}

+(UIView *)viewForSectionWithHeight:(CGFloat)height isTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine{
    
   return [self viewForSectionWithHeight:height isTopLine:topLine isBottomLine:bottomLine Title:nil];
}

+(UIView *)viewForSectionIsTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine{
   
   return [self viewForSectionWithHeight:KHeightForHeader isTopLine:topLine isBottomLine:bottomLine];

}

+(UIView *)viewForSectionIsTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine height:(CGFloat)height{
    
    return [self viewForSectionWithHeight:height isTopLine:topLine isBottomLine:bottomLine];
    
}


+(UIView *)viewForSectionWithTopLineIsBottomLine:(BOOL)bottomLine{
    
    return [self viewForSectionIsTopLine:YES isBottomLine:bottomLine];
    
}
+(UIView *)viewForSectionWithNoTopLineIsBottomLine:(BOOL)bottomLine{
    
    return [self viewForSectionIsTopLine:NO isBottomLine:bottomLine];
    
}

+(UIView *)viewForSectionWithBottomLineIsTopLine:(BOOL)topLine{
    
    return [self viewForSectionIsTopLine:topLine isBottomLine:YES];
}

+(UIView *)viewForSectionWithNoBottomLineIsTopLine:(BOOL)topLine{

   return [self viewForSectionIsTopLine:topLine isBottomLine:NO];
}


+(UIView*)viewForSingleLine{
    
   return  [self viewForSectionWithHeight:1.0/[UIScreen mainScreen].scale isTopLine:YES isBottomLine:YES];
}

@end
