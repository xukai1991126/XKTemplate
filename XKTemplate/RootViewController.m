//
//  RootViewController.m
//  LingTouNiao_CRM
//
//  Created by 徐凯 on 16/4/20.
//  Copyright © 2016年 徐凯. All rights reserved.
//

#import "RootViewController.h"
#import "Singleton.h"

//Tab bar view controller

@interface RootViewController ()

@property (nonatomic, strong) UIWindow *window;

@end

@implementation RootViewController

SINGLETON_FOR_CLASS(RootViewController);

- (void)viewDidLoad {
    [super viewDidLoad];
}

-(void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];    
}

- (void)gotoMainPage{
}

-(void)pushViewController:(UIViewController*)viewController animated:(BOOL)animated{
    [_tabBarController.navigationController pushViewController:viewController animated:animated];
}

- (void)jumpToTabIndex:(HTHongtangTabType)index andPushToViewController:(NSString *)controller selectIndex:(NSInteger)selectIndex{
    _tabBarController.selectedIndex = index;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.25 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
//        BaseNavigationController *nav = (BaseNavigationController *)[_tabBarController.viewControllers objectAtIndex:index];
//        UIViewController *root = [nav.viewControllers objectAtIndex:0];
//        UIViewController *root = (UIViewController *)[_tabBarController.viewControllers objectAtIndex:index];
        Class cls = NSClassFromString(controller);
        UIViewController *viewController = [[cls alloc] init];
//        if([viewController isMemberOfClass:[LongRentViewController class]]){
//            LongRentViewController *longRentViewController = (LongRentViewController *)viewController;
//            longRentViewController.style = UITableViewStyleGrouped;
//            longRentViewController.segmentIndex = selectIndex;
//        }else if ([viewController isMemberOfClass:[ShortRentViewController class]]){
//            ShortRentViewController *shortRentViewController = (ShortRentViewController *)viewController;
//            shortRentViewController.style = UITableViewStyleGrouped;
//        }
        viewController.hidesBottomBarWhenPushed =YES;
        [self pushViewController:viewController animated:YES];
    });
}


-(UITabBarItem *) customTabBarItem:(NSString*)title Img:(NSString*)ImgName SelectedImg:(NSString*) selImgName
{
    UIImage *btnImage = [UIImage imageNamed:ImgName];
    UIImage *btnImageSelect = [UIImage imageNamed:selImgName];
    
    btnImage = [btnImage imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    btnImageSelect = [btnImageSelect imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    
    UITabBarItem* item =  [[UITabBarItem alloc] initWithTitle:title image:btnImage selectedImage:btnImageSelect];
//    item.imageInsets = UIEdgeInsetsMake(6.0, 0.0, -6.0, 0.0);
    return item;
}

@end
