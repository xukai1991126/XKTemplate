//
//  BaseNavigationController.m
//  XKTemplate
//
//  Created by 徐凯 on 2018/4/19.
//  Copyright © 2018年 徐凯. All rights reserved.
//

#import "BaseNavigationController.h"

@interface BaseNavigationController ()

@end

@implementation BaseNavigationController


- (void)viewDidLoad{
    [super viewDidLoad];
    self.navigationBar.translucent = NO;
    self.delegate = self;
    self.navigationBar.tintColor = [UIColor blackColor];
    [UINavigationBar appearance].barTintColor=[UIColor colorWithHexString:@"FFFFFF"];
}

@end
