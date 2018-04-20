//
//  ServerEnvironmentConstants.h
//  Hongtang
//
//  Created by 徐凯 on 2016/12/20.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#ifndef ServerEnvironmentConstants_h
#define ServerEnvironmentConstants_h

//add the following as we pass the definitions from Makefile
#if !defined BUILD_FOR_DEVELOP && !defined BUILD_FOR_TEST && !defined BUILD_FOR_RELEASE
//使用开发服务器
//#define BUILD_FOR_DEVELOP

//使用测试室服务器
//#define BUILD_FOR_TEST

//使用生产服务器,
#define BUILD_FOR_RELEASE

#endif

#ifdef BUILD_FOR_DEVELOP
#define API_BASE_URL_Internal    @"http://192.168.18.211:8080"//开发环境地址
//#define API_BASE_URL_Internal    @"http://hongtang.s1.natapp.cc"//开发环境外网地址
//#define API_BASE_URL_Internal    @"http://sunquanfeng.eicp.net"//孙全峰

#endif

#ifdef BUILD_FOR_TEST

//#define API_BASE_URL_Internal    @"http://192.168.18.215:6280/boss-app-api/"//测试环境地址
#define API_BASE_URL_Internal    @"http://1y6j649911.51mypc.cn"//孙全峰

#endif

#ifdef BUILD_FOR_RELEASE

#define API_BASE_URL_Internal    @"https://www.hongtanghome.com/app/v1"//正式环境

#endif


#if (defined(DEBUG) || defined(ADHOC ))

#define ISPostAddress [[NSUserDefaults standardUserDefaults] dictionaryForKey:kDefaults_NetAddress][kDefaults_POST_ADDR]
#define  API_BASE_URL            (ISPostAddress ?ISPostAddress: API_BASE_URL_Internal)
#define  API_H5_URL      @"http://m.hongtanghome.com"

#else

#define API_BASE_URL API_BASE_URL_Internal
#define  API_H5_URL      @"http://m.hongtanghome.com"
#endif


#endif /* ServerEnvironmentConstants_h */
