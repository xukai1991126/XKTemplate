//
//  HTUIUtil.h
//  Hongtang
//
//  Created by Derek.zhao on 17/2/9.
//  Copyright © 2017年 徐凯. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HTUIUtil : NSObject

+ (void)showAlertMessage:(NSString*)message;
+ (void)showAlertMessage:(NSString*)message closeButttonTitle:(NSString *)closeButttonTitle;
+ (void)showToastMessage:(NSString*)message;
+ (void)showToastMessage:(NSString*)message duration:(CGFloat)duration;
+ (void)showToastMessage:(NSString*)message duration:(CGFloat)duration completeBlock:(void(^)())completeBlock;

+ (UIColor *)colorChangeByPercent:(CGFloat)percent fromColor:(UIColor *)fromColor toColor:(UIColor *)toColor;

@end
