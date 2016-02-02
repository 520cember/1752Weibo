//
//  AppDelegate.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SinaWeibo.h"
#import "DDMenuController.h"
//#import "MainViewController.h"
@class MainViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(strong, nonatomic)UIWindow *window;
@property(nonatomic,retain)SinaWeibo *sinaweibo;
@property(nonatomic,retain)MainViewController *mainViewController;
@property(nonatomic,retain)DDMenuController *ddMenuController;

@end
