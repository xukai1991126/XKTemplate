//
//  Utilities.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/20.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#ifndef Utilities_h
#define Utilities_h

#define DEVICE_TYPE  1
#define PHONENUMBER_LIMIT 11
#define NICKNAME_LIMIT 20
#define VERIFYCODE_LIMIT 6
#define PASSWORD_LITTLELIMIT 8
#define PASSWORD_LIMIT 16
#define IDENTITY_LIMIT 18
#define DOCUMENTS_LIMIT 20
#define LIST_COUNT 10
#define LASTLOGINPHONENUMBER @"LastLoginPhoneNumber"
#define LASTLOGINPHONECODE @"LastLoginPhoneCode"
#define NUMBERS_ONLY @"1234567890"
#define NUMBERSDOT_ONLY @"1234567890."
#define ALPHA_ONLY @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ALPHANUM_ONLY @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
#define NICKNAME_ONLY @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789,-_"
#define IDCARDONLY @"xX0123456789"
#define CanVerifyGestureTime @"CanVerifyGestureTime"
#define RemainderNum @"RemainderNum"
//返回安全的字符串
#define kSafeString(str) str.length > 0 ? str : @""

//状态栏高度
#define STATUS_BAR_HEIGHT 20
//NavBar高度
#define NAVIGATION_BAR_HEIGHT 44
//状态栏 ＋ 导航栏 高度
#define STATUS_AND_NAVIGATION_HEIGHT ((STATUS_BAR_HEIGHT) + (NAVIGATION_BAR_HEIGHT))

//屏幕 rect
#define SCREEN_RECT ([UIScreen mainScreen].bounds)

#define CONTENT_HEIGHT (kScreenHeight - NAVIGATION_BAR_HEIGHT - STATUS_BAR_HEIGHT)

//屏幕分辨率
#define SCREEN_RESOLUTION (kScreenWidth * kScreenHeight * ([UIScreen mainScreen].scale))

#define kScreenWidth ([UIScreen mainScreen].bounds.size.width)
#define kScreenHeight ([[UIScreen mainScreen] bounds].size.height)

#define UIColorFromHexA(hexValue, a)     [UIColor colorWithRed:(((hexValue & 0xFF0000) >> 16))/255.0f green:(((hexValue & 0xFF00) >> 8))/255.0f blue:((hexValue & 0xFF))/255.0f alpha:a]
#define UIColorFromHex(hexValue)        UIColorFromHexA(hexValue, 1.0f)

#endif /* Utilities_h */
