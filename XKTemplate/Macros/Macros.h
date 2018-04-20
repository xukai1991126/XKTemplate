//
//  Macros.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/20.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#ifndef Macros_h
#define Macros_h

#if  IOS_VERSION_8_OR_LATER
// 当前Xcode支持iOS8及以上
#define kScreenFullWidth ([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)]?[UIScreen mainScreen].nativeBounds.size.width/[UIScreen mainScreen].nativeScale:[UIScreen mainScreen].bounds.size.width)
#define kScreenFullHeight ([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)]?[UIScreen mainScreen].nativeBounds.size.height/[UIScreen mainScreen].nativeScale:[UIScreen mainScreen].bounds.size.height)
#define kScreenFullSize ([[UIScreen mainScreen] respondsToSelector:@selector(nativeBounds)]?CGSizeMake([UIScreen mainScreen].nativeBounds.size.width/[UIScreen mainScreen].nativeScale,[UIScreen mainScreen].nativeBounds.size.height/[UIScreen mainScreen].nativeScale):[UIScreen mainScreen].bounds.size)

#else

#define kScreenFullWidth [UIScreen mainScreen].bounds.size.width
#define kScreenFullHeight [UIScreen mainScreen].bounds.size.height
#define kScreenFullSize [UIScreen mainScreen].bounds.size

#endif

#define kSizeRatio kScreenFullWidth/375

//通用Header高度
#define KHeightForHeader     10
//通用row高度
#define kHeightForRow        52
//通用高度
#define kHeightForGeneral    58

#define IOS_VERSION_8_OR_LATER [[UIDevice currentDevice].systemVersion doubleValue] >= 8.0
#define IOS_VERSION_10 (NSFoundationVersionNumber > NSFoundationVersionNumber_iOS_9_x_Max)?(YES):(NO)  

#define THEME_COLOR       [UIColor colorWithHexString:@"#EE3E49"]
#define BACKGROUND_COLOR  [UIColor colorWithHexString:@"#F9F9F9"]
#define TEXT_COLOR        [UIColor colorWithHexString:@"#333333"]//rgb 51 51 51
#define DETAILTEXT_COLOR  [UIColor colorWithHexString:@"#666666"]//rgb 102 102 102
#define PLACEHOLDER_COLOR [UIColor colorWithHexString:@"#999999"]//rgb 153 153 153
#define DEVIDE_LINE_COLOR [UIColor colorWithHexString:@"#E2E2E2"]

#ifndef kRGB
#define kRGB(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]
#endif

#ifndef kRGBA
#define kRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#endif

#pragma mark - weakSelf
#define kWeakSelf __weak typeof (self) weakSelf = self;
#define kStrongSelf __strong __typeof(&*weakSelf)strongSelf = weakSelf;
#define kWeakObj(obj)  __weak typeof(obj) weakObj = obj;

#define kFont(size) [UIFont systemFontOfSize:size]
#define kFontBold(size) [UIFont boldSystemFontOfSize:size]

//设置view 圆角和边框
#define ViewBorderRadius(View, Radius, Width, Color)[View.layer setCornerRadius:(Radius)];[View.layer setMasksToBounds:YES];[View.layer setBorderWidth:(Width)];[View.layer setBorderColor:[Color CGColor]];

#endif /* Macros_h */
