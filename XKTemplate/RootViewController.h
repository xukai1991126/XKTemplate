//
//  RootViewController.h
//  LingTouNiao_CRM
//
//  Created by 徐凯 on 16/4/20.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RootViewController : BaseViewController<UITabBarControllerDelegate>


+ (instancetype)sharedInstance;
-(void)pushViewController:(UIViewController*)viewController animated:(BOOL)animated;


@property (nonatomic , strong)UITabBarController *tabBarController;//当前的tabbar

- (void)gotoMainPage;

- (void)jumpToTabIndex:(HTHongtangTabType)index andPushToViewController:(NSString *)controller selectIndex:(NSInteger)selectIndex;


@end
