//
//  StringUtil.h
//  Template
//
//  Created by 徐凯 on 16/1/25.
//  Copyright © 2016年 徐凯. All rights reserved.
//



#import <Foundation/Foundation.h>

@interface StringUtil : NSObject
+ (BOOL)validatePSW:(NSString *)string;

+ (BOOL)checkPassword:(NSString *)password;

+ (BOOL)checkTextInfo:(NSString *)text;

+ (BOOL)isNullOrEmpty:(NSString *)str;

+ (BOOL)isNoDetailLabelInput:(NSString *)detailLabelText;

+ (BOOL)validateChinese:(NSString *)string;

+(BOOL)validateInviteCode:(NSString *)inviteCode;

+(BOOL)validateValidateCode:(NSString *)validate;

+ (BOOL)validateEmail:(NSString *)email;

+ (BOOL)validateMobilePhone:(NSString *)mobilePhone;

+ (BOOL)validateIdentity:(NSString *)identityCard;

+ (NSString *)trimSpacesOfString:(NSString *)str;

+ (NSString* )starsReplacedOfString:(NSString *)str withinRange:(NSRange)range;

+(BOOL)validateMutilNickName:(NSString *)string;

+ (BOOL)validateNickName:(NSString *)string;

+ (BOOL)valiInviteCode:(NSString *)string;

+ (BOOL)canBeNickName:(NSString *)string;

+ (BOOL)valiLoginPSW:(NSString *)string;

+ (BOOL)valiTransPSW:(NSString *)string;
//验证输入昵称4~14个字符，2~7个汉字
+(BOOL)valiNickName:(NSString *)string;
//验证输入的密码为数字、大小写字母和标点符号
+(BOOL)validatePassword:(NSString *)password;

//用户密码6位以上数字和字母组合
+ (BOOL)checkPasswordNew:(NSString *)password;
//+ (NSString *)getUserAvatarURL:(NSString *)str;
+(BOOL)isChineseCharacterAndLettersAndNumbersAndUnderScore:(NSString *)string;
+ (NSString *)compareCurrentTimeTreasure:(NSDate *)compareDate;

// 转换dic成string
+ (NSString*)jsonStringOfObj:(NSDictionary*)dic;
// 把对象转换成JSON格式数据，如果转换失败，返回nil
+ (NSMutableData *)JSONDataWithObject:(id)object;

+ (void)callPhoneStr:(NSString*)phoneStr withVC:(UIViewController *)selfvc;
+ (NSString *)balanceFormatFromStr:(NSString*)string;
@end
