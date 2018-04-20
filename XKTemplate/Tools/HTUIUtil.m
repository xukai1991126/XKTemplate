//
//  HTUIUtil.m
//  Hongtang
//
//  Created by Derek.zhao on 17/2/9.
//  Copyright © 2017年 徐凯. All rights reserved.
//

#import "HTUIUtil.h"

#define kToastDuration 2.0f
#define kCommonSidePadding 16.0f

@implementation HTUIUtil

+ (void)showAlertMessage:(NSString*)message {
    [[self class] showAlertMessage:message closeButttonTitle:@"关闭"];
}

+ (void)showAlertMessage:(NSString*)message closeButttonTitle:(NSString *)closeButttonTitle {
    if(!message || [NSString isNullOrEmpty:message]) {
        return;
    }
    
    UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:message message:nil delegate:self cancelButtonTitle:closeButttonTitle otherButtonTitles:nil];
    [alertView show];
}

+ (void)showToastMessage:(NSString*)message
{
    [[self class] showToastMessage:message duration:kToastDuration];
}

+ (void)showToastMessage:(NSString*)message duration:(CGFloat)duration {
    [self showToastMessage:message duration:duration completeBlock:nil];
}

+ (void)showToastMessage:(NSString*)message duration:(CGFloat)duration completeBlock:(void(^)())completeBlock {
    if(!message || [NSString isNullOrEmpty:message]) {
        return;
    }
    
    UIWindow *window = [[UIApplication sharedApplication] keyWindow];
    CGFloat insidePadding = 24.0f;
    UILabel *warningLabel = [[UILabel alloc]initWithFrame:CGRectMake(0, 0, window.width - (kCommonSidePadding + insidePadding) * 2, 0)];
    warningLabel.text = message;
    warningLabel.textColor = [UIColor whiteColor];
    warningLabel.font = kFont(15);
    warningLabel.textAlignment = NSTextAlignmentCenter;
    warningLabel.numberOfLines = 0;
    [warningLabel sizeToFit];
    
    UIView *toastView = [[UIView alloc]initWithFrame:CGRectMake(0, 0, warningLabel.width + insidePadding * 2, warningLabel.height + 24)];
    toastView.layer.cornerRadius = 3.f;
    [toastView setCenter:CGPointMake(window.width / 2, window.height / 2)];
    [warningLabel setCenter:CGPointMake(toastView.width / 2, toastView.height / 2)];
    [toastView addSubview:warningLabel];
    toastView.backgroundColor = kRGBA(0, 0, 0, 0.8);
    [window addSubview:toastView];
    
    [toastView setAlpha:0];
    [UIView animateWithDuration:0.3f animations:^{
        [toastView setAlpha:0.85];
    } completion:^(BOOL finished) {
        [UIView animateWithDuration:0.3f delay:(duration > 0 ? duration : kToastDuration) options:UIViewAnimationOptionCurveEaseInOut animations:^{
            [toastView setAlpha:0.0f];
        } completion:^(BOOL finished) {
            [toastView removeFromSuperview];
            if (completeBlock) {
                completeBlock();
            }
        }];
    }];
}

+ (void)showAlertWithTitle:(NSString *)title message:(NSString *)message inController:(UIViewController *)controller buttonTitles:(NSArray *)buttonTitles completeBlock:(CompleteBlock)block {
    [[self class] showAlertWithTitle:title message:message inController:controller buttonTitles:buttonTitles preferredIndex:-1 completeBlock:block];
}

+ (void)showAlertWithTitle:(NSString *)title message:(NSString *)message inController:(UIViewController *)controller buttonTitles:(NSArray *)buttonTitles preferredIndex:(int)preferredIndex completeBlock:(CompleteBlock)block {
    if ([[UIDevice currentDevice].systemVersion doubleValue] >= 8.0 && controller) {
        UIAlertController *alertController = [UIAlertController alertControllerWithTitle:title message:message preferredStyle:UIAlertControllerStyleAlert];
        UIAlertAction *preferredAction;
        for (int i = 0 ; i < buttonTitles.count ; i++ ) {
            UIAlertAction *action = [UIAlertAction actionWithTitle:buttonTitles[i] style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
                block(i);
            }];
            [alertController addAction:action];
            if (i == preferredIndex) {
                preferredAction = action;
            }
        }
        if (preferredAction && [alertController respondsToSelector:@selector(setPreferredAction:)]) {
            [alertController setPreferredAction:preferredAction];
        }
        
        [controller presentViewController:alertController animated:YES completion:nil];
    } else {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:title message:message delegate:nil cancelButtonTitle:nil otherButtonTitles:nil];
        for (NSString *buttonTitle in buttonTitles) {
            [alert addButtonWithTitle:buttonTitle];
        }
        
        [alert showAlertViewWithCompleteBlock:^(NSInteger buttonIndex) {
            if (block) {
                block(buttonIndex);
            }
        }];
    }
}

+ (UIColor *)colorChangeByPercent:(CGFloat)percent fromColor:(UIColor *)fromColor toColor:(UIColor *)toColor {
    percent = MIN(MAX(percent, 0), 1);
    CGFloat fromRedValue, fromGreenValue, fromBlueValue, fromAlphaValue;
    CGFloat toRedValue, toGreenValue, toBlueValue, toAlphaValue;
    
    [fromColor getRed:&fromRedValue green:&fromGreenValue blue:&fromBlueValue alpha:&fromAlphaValue];
    [toColor getRed:&toRedValue green:&toGreenValue blue:&toBlueValue alpha:&toAlphaValue];
    
    CGFloat newRed = fromRedValue + (toRedValue - fromRedValue) * percent;
    CGFloat newGreen = fromGreenValue + (toGreenValue - fromGreenValue) * percent;
    CGFloat newBlue = fromBlueValue + (toBlueValue - fromBlueValue) * percent;
    CGFloat newAlpha = fromAlphaValue + (toAlphaValue - fromAlphaValue) * percent;
    
    return [UIColor colorWithRed:newRed green:newGreen blue:newBlue alpha:newAlpha];
}


@end
