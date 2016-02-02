//
//  MainViewController.h

//  1752WXWeibo
//  TabBar主控制器

//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SinaWeibo.h"
#import "HomeViewController.h"


@interface MainViewController : UITabBarController<SinaWeiboDelegate,UINavigationControllerDelegate>

@property(nonatomic,retain)UIView *tabBarView;
@property(nonatomic,retain)UIImageView *sliderView;

//小图标，可显示未读信息数量
@property(nonatomic,retain)UIImageView *badgeView;

//可通过该属性操作HomeViewController中的事件
@property(nonatomic,retain)HomeViewController *home;

//是否显示badge
- (void)showBadge:(BOOL)show;

//是否显示tabbar
- (void)showTabbar:(BOOL)show;

@end
