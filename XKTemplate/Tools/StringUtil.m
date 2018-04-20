//
//  StringUtil.m
//  Template
//
//  Created by 徐凯 on 16/1/25.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "StringUtil.h"

@implementation StringUtil

+ (BOOL)isNullOrEmpty:(NSString *)str {
    return ([str isEqualToString:@""] || str == nil);
}

+ (BOOL)isNoDetailLabelInput:(NSString *)detailLabelText
{
    if([detailLabelText rangeOfString:@"请选择"].location !=NSNotFound)
        return YES;
    else
        return NO;
}

//邮箱
+ (BOOL)validateEmail:(NSString *)email {
    NSString *emailRegex = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    return [emailTest evaluateWithObject:[self trimSpacesOfString:email]];
}
//验证码验证
+(BOOL)validateValidateCode:(NSString *)validate
{
    NSString *passwordRegex = @"^\\d{6}$";
    NSPredicate *validateTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",passwordRegex];
    return [validateTest evaluateWithObject:[self trimSpacesOfString:validate]];
    
}

//邀请码验证
+(BOOL)validateInviteCode:(NSString *)inviteCode
{
    NSString *passwordRegex = @"^[a-zA-Z0-9]{6}$";
    NSPredicate *inviteTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",passwordRegex];
    return [inviteTest evaluateWithObject:[self trimSpacesOfString:inviteCode]];
}

//手机号码验证
+ (BOOL)validateMobilePhone:(NSString *)mobileNum {
    //手机号以1开头，11个 \d 数字字符
    NSString *phoneRegex = @"^1\\d{10}$";
    NSPredicate *phoneTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", phoneRegex];
    return [phoneTest evaluateWithObject:[self trimSpacesOfString:mobileNum]];
}
//验证输入的密码为数字、大小写字母和标点符号
+(BOOL)validatePassword:(NSString *)password
{
    NSString *passwordRegex = @"[^%&',;=?$\x22]|[a-zA-Z0-9]*";
    NSPredicate *identityCardPredicate = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", passwordRegex];
    return [identityCardPredicate evaluateWithObject:[self trimSpacesOfString:password]];
}
#pragma mark 正则匹配用户密码6-12位数字和字母组合
+ (BOOL)checkPassword:(NSString *)password
{
    NSString * passwordRegex = @"^(?![0-9]+$)(?![a-zA-Z]+$)[0-9A-Za-z]{6,12}$";
    NSPredicate * prediate = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", passwordRegex];
    return [prediate evaluateWithObject:password];
}


#pragma mark 正则匹配用户密码6位以上数字和字母组合
+ (BOOL)checkPasswordNew:(NSString *)password
{
    NSString * passwordRegex = @"^(?![0-9]+$)(?![a-zA-Z]+$)[0-9A-Za-z]{6,}$";
    NSPredicate * prediate = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", passwordRegex];
    return [prediate evaluateWithObject:password];
}
#pragma mark 正则匹配输入内容数字或字母组合
+ (BOOL)checkTextInfo:(NSString *)text{
    
    NSString *passwordRegex = @"^[a-zA-Z0-9]*";
    NSPredicate *inviteTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",passwordRegex];
    return [inviteTest evaluateWithObject:[self trimSpacesOfString:text]];
}

//身份证号
+ (BOOL)validateIdentity:(NSString *)identityCard {
    
    if (identityCard.length <= 0){
        return false;
    }
    
    NSString *regex2 = @"^(\\d{18}|\\d{17})(\\d|[xX])$";
    NSPredicate *identityCardPredicate = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex2];
    return [identityCardPredicate evaluateWithObject:[self trimSpacesOfString:identityCard]];
}


//验证是否全中文
+ (BOOL)validateChinese:(NSString *)string
{
    NSString *phoneRegex = @"^[\\u4E00-\\u9FA5]+$";
    NSPredicate *phoneTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", phoneRegex];
    return [phoneTest evaluateWithObject:[self trimSpacesOfString:string]];
}
//验证字符汉字混合昵称
+(BOOL)validateMutilNickName:(NSString *)string
{
    NSString *nickNameRegex = @"^([\u4e00-\u9fa5A-Za-z0-9,_-]{1,20})$";
    NSPredicate *nickNameTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", nickNameRegex];
    return [nickNameTest evaluateWithObject:[self trimSpacesOfString:string]];
}

//验证昵称
+(BOOL)validateNickName:(NSString *)string
{
    NSString *nickNameRegex = @"^([\u4e00-\u9fa5]{2,7})|([A-Za-z0-9,_-]{4,14})$";
    NSPredicate *nickNameTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", nickNameRegex];
    return [nickNameTest evaluateWithObject:[self trimSpacesOfString:string]];
}

//是否满足
+ (BOOL)canBeNickName:(NSString *)string {
    
    NSString *nickNameRegex = @"^([\u4e00-\u9fa5])|([A-Za-z0-9,_-])$";
    NSPredicate *nickNameTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", nickNameRegex];
    return [nickNameTest evaluateWithObject:[self trimSpacesOfString:string]];
}

+ (BOOL)validatePSW:(NSString *)string {
    
    if (string.length <= 0) return false;
    
    return ![[string stringByTrimmingCharactersInSet:[NSCharacterSet decimalDigitCharacterSet]] isEqualToString:string]
    && ![[string stringByTrimmingCharactersInSet:[NSCharacterSet letterCharacterSet]] isEqualToString:string];
}

//打上星号
+ (NSString* )starsReplacedOfString:(NSString *)str withinRange:(NSRange)range;
{
    if (str == nil || [str length]< range.location + range.length)
    {
        return str;
    }
    
    
    NSMutableString* mStr = [[NSMutableString alloc]initWithString:str];
    
    [mStr replaceCharactersInRange:range withString:[[NSString string] stringByPaddingToLength:range.length withString: @"*" startingAtIndex:0]];
    
    return mStr;
}


//去掉空格
+ (NSString *)trimSpacesOfString:(NSString *)str
{
    return [str stringByReplacingOccurrencesOfString:@" " withString:@""];
}

+ (BOOL)valiInviteCode:(NSString *)string {
    NSString *regex = @"^[a-zA-Z]\\d{4}$";
    NSPredicate *test = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex];
    return [test evaluateWithObject:[self trimSpacesOfString:string]];
}

//验证登录密码
+ (BOOL)valiLoginPSW:(NSString *)string {
    NSString *regex = @"^[0-9a-zA-Z]*$";
    NSPredicate *test = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex];
    return [test evaluateWithObject:[self trimSpacesOfString:string]];
}

//验证交易密码
+ (BOOL)valiTransPSW:(NSString *)string
{
    NSString *regex = @"^[A-Za-z0-9]{8,16}$";
    NSPredicate *test = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex];
    return [test evaluateWithObject:[self trimSpacesOfString:string]];
}

//验证输入昵称4~14个字符，2~7个汉字
+(BOOL)valiNickName:(NSString *)string
{
    NSString *regex = @"^([\u4e00-\u9fa5]{2,7})|([A-Za-z0-9 ]{4,14})$";
    NSPredicate *test = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", regex];
    return [test evaluateWithObject:[self trimSpacesOfString:string]];
}

+(BOOL)isChineseCharacterAndLettersAndNumbersAndUnderScore:(NSString *)string
{
    NSString *other = @"";
    NSUInteger len=string.length;
    for(int i=0;i<len;i++)
    {
        unichar a=[string characterAtIndex:i];
        if(!((isalpha(a))
             ||(isalnum(a))
             ||((a=='_'))
             ||((a >= 0x4e00 && a <= 0x9fa6))
             ||([other rangeOfString:string].location != NSNotFound)
             ))
            return NO;
    }
    return YES;
}



+ (NSString *)compareCurrentTimeTreasure:(NSDate *)compareDate{
    NSTimeInterval  timeInterval = [compareDate timeIntervalSinceNow];
    timeInterval = -timeInterval;
    long temp = 0;
    NSString *result;
    if (timeInterval < 60) {
        result = [NSString stringWithFormat:@"刚刚"];
    }
    else if((temp = timeInterval/60) <60){
        result = [NSString stringWithFormat:@"%ld分钟前",temp];
    }
    else if((temp = temp/60) <24){
        result = [NSString stringWithFormat:@"%ld小时前",temp];
    }
    else if((temp = temp/24) <7){
        result = [NSString stringWithFormat:@"%ld天前",temp];
    }
    else if((temp = temp/7) <4){
        result = [NSString stringWithFormat:@"%ld周前",temp];
    }
    else if((temp = temp/4) <12){
        result = [NSString stringWithFormat:@"%ld月前",temp];
    }
    
    else{
        temp = temp/12;
        result = [NSString stringWithFormat:@"%ld年前",temp];
    }
    return  result;
}


//ios 给textField每四位添加一个空格

//- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string {
//    if (textField == _cardTextField) {
//        // 四位加一个空格
//        if ([string isEqualToString:@""]) { // 删除字符
//            if ((textField.text.length - 2) % 5 == 0) {
//                textField.text = [textField.text substringToIndex:textField.text.length - 1];
//            }
//            return YES;
//        } else {
//            if (textField.text.length % 5 == 0) {
//                textField.text = [NSString stringWithFormat:@"%@ ", textField.text];
//            }
//        }
//        return YES;
//    }
//    return YES;
//}

/**
 *  转字符串 Formatted number string:￥123,456,789.00
 */
+ (NSString *)balanceFormatFromStr:(NSString*)string {
    
    NSNumber * nums = @([string doubleValue]);
    NSNumberFormatter *numFormatter = [[NSNumberFormatter alloc] init];
    [numFormatter setNumberStyle:NSNumberFormatterCurrencyStyle];
    NSString *balanceStr = [numFormatter stringFromNumber:nums];
    return balanceStr;
}

/**
 *  词典转字符串
 */

+ (NSString*)jsonStringOfObj:(NSDictionary*)dic{
    NSError *err = nil;
    
    NSData *stringData = [NSJSONSerialization dataWithJSONObject:dic
                                                         options:0
                                                           error:&err];
    
    NSString *str = [[NSString alloc] initWithData:stringData encoding:NSUTF8StringEncoding];
    
    return str;
}

#pragma mark - 获取JSON数据
// 把对象转换成JSON格式数据，如果转换失败，返回nil
+ (NSMutableData *)JSONDataWithObject:(id)object {
    NSMutableData *postBodyData = nil;
    if ([NSJSONSerialization isValidJSONObject:object]) {
        NSError *error = nil;
        NSData *postData = [NSJSONSerialization dataWithJSONObject:object
                                                           options:NSJSONWritingPrettyPrinted
                                                             error:&error];
        if (error) {
            NSLog(@"error: %@", error.description);
        } else {
            postBodyData = [[NSMutableData alloc] initWithData:postData];
        }
    }
    return postBodyData;
}



+ (void)callPhoneStr:(NSString*)phoneStr withVC:(UIViewController *)selfvc{
        NSString *str2 = [[UIDevice currentDevice] systemVersion];
        if ([str2 compare:@"10.2" options:NSNumericSearch] == NSOrderedDescending || [str2 compare:@"10.2" options:NSNumericSearch] == NSOrderedSame)
        {
            NSString* PhoneStr = [NSString stringWithFormat:@"telprompt://%@",phoneStr];
            [[UIApplication sharedApplication] openURL:[NSURL URLWithString:PhoneStr] options:@{} completionHandler:^(BOOL success) {
            }];
            
        }else {
            if(!phoneStr)return;
            NSMutableString* str1 = [[NSMutableString alloc]initWithString:phoneStr];// 存在堆区，可变字符串
//            if (phoneStr.length == 10) {
//                [str1 insertString:@"-"atIndex:3];// 把一个字符串插入另一个字符串中的某一个位置
//                [str1 insertString:@"-"atIndex:7];// 把一个字符串插入另一个字符串中的某一个位置
//            }else {
//                [str1 insertString:@"-"atIndex:3];// 把一个字符串插入另一个字符串中的某一个位置
//                [str1 insertString:@"-"atIndex:8];// 把一个字符串插入另一个字符串中的某一个位置
//            }
            NSString * str = [NSString stringWithFormat:@"是否拨打电话\n%@",str1];
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:str message: nil preferredStyle:UIAlertControllerStyleAlert];
            // 设置popover指向的item
            alert.popoverPresentationController.barButtonItem = selfvc.navigationItem.leftBarButtonItem;
            // 添加按钮
            [alert addAction:[UIAlertAction actionWithTitle:@"呼叫" style:UIAlertActionStyleDestructive handler:^(UIAlertAction *action) {
                NSLog(@"点击了呼叫按钮10.2下");
                NSString* PhoneStr = [NSString stringWithFormat:@"tel://%@",phoneStr];
                if ([PhoneStr hasPrefix:@"sms:"] || [PhoneStr hasPrefix:@"tel:"]) {
                    UIApplication * app = [UIApplication sharedApplication];
                    if ([app canOpenURL:[NSURL URLWithString:PhoneStr]]) {
                        [app openURL:[NSURL URLWithString:PhoneStr]];
                    }
                }
            }]];
            [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:^(UIAlertAction *action) {
                NSLog(@"点击了取消按钮");
            }]];
            [selfvc presentViewController:alert animated:YES completion:nil];
        }
}

@end
