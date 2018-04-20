//
//  UserDefaultAndNotification.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/20.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#ifndef UserDefaultAndNotification_h
#define UserDefaultAndNotification_h

/* 存储在 defaults中 的 网络接口地址 */
#define kDefaults_NetAddress @"kDefaults_NetAddress"
#define kDefaults_POST_ADDR @"kDefaults_POST_ADDR"
#define KPaySuccess @"paySuccess"
#define KWXPay @"WXPay"
#define KAuthResult @"authResult"
#define KLongRentReresh @"longRentReresh"
#define KRechargeSuccess @"rechargeSuccess"



//////////////////Notification/////////////////////
#define kLoginNotification @"loginNotification"
#define kLoginTimeoutNotification @"loginTimeout"
#define kLogoutNotification @"logout"
#define kRefreshPersonalInfoNotification @"refreshPersonalInfo"
#define kQualificationPopNotification @"qualificationPopNotification"
#define KNetworkReachabilityStatusNotReachable @"networkReachabilityStatusNotReachable"

#define kClearSelectedDataNotification  @"ClearSelectedDataNotification"

#define kUpdateSelectedAddressDataNotification  @"UpdateSelectedAddressDataNotification"
#define kUpdateSelectedInvoiceDataNotification  @"UpdateSelectedInvoiceDataNotification"

#define kDeleteSelectedAddressDataNotification  @"DeleteSelectedAddressDataNotification"
#define kDeleteSelectedInvoiceDataNotification  @"DeleteSelectedInvoiceDataNotification"

#define KIsShowOrderInfo @"isShowOrderInfo"



#endif /* UserDefaultAndNotification_h */

#define kUserDefaultCity @"currentCity"
#define kUserDefaultSearchHistory @"searchHistory"
