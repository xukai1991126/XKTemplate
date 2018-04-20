//
//  TableViewDevider.h
//  JJJR
//
//  Created by DamocsYang on 5/25/15.
//  Copyright (c) 2015 fengzeyan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TableViewDevider : NSObject

+(UIView *)viewForSectionWithHeight:(CGFloat)height isTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine Title:(NSString *)title Image:(NSString *)image;

+(UIView *)viewForSectionWithHeight:(CGFloat)height isTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine Title:(NSString *)title;

+(UIView *)viewForSectionWithHeight:(CGFloat)height isTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine;

+(UIView *)viewForSectionIsTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine;

+(UIView *)viewForSectionIsTopLine:(BOOL)topLine isBottomLine:(BOOL)bottomLine height:(CGFloat)height;

+(UIView *)viewForSectionWithTopLineIsBottomLine:(BOOL)bottomLine;

+(UIView *)viewForSectionWithNoTopLineIsBottomLine:(BOOL)bottomLine;

+(UIView *)viewForSectionWithBottomLineIsTopLine:(BOOL)topLine;

+(UIView *)viewForSectionWithNoBottomLineIsTopLine:(BOOL)topLine;

+(UIView*)viewForSingleLine;

@end
