//
//  BaseNavigationController.m
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseNavigationController.h"
#import "ThemeManager.h"

@interface BaseNavigationController ()

@end

@implementation BaseNavigationController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(themeNotification) name:kThemeDidChangeNotification object:nil];
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self loadThemeImage];
    
    
    //监听滑动手势
    UISwipeGestureRecognizer *swipGesture=[[[UISwipeGestureRecognizer alloc] initWithTarget:self action:@selector(swipAction:)] autorelease];
    //一个手势类智只监听一个方向
    swipGesture.direction=UISwipeGestureRecognizerDirectionRight;
    [self.view addGestureRecognizer:swipGesture];
}


- (void)swipAction:(UISwipeGestureRecognizer *)gesture
{
    if (self.viewControllers.count>1){
        if (gesture.direction==UISwipeGestureRecognizerDirectionRight){
            //返回上一级
            [self popViewControllerAnimated:YES];
        }
    }
}


- (void)themeNotification
{
    [self loadThemeImage];
}

- (void)loadThemeImage
{
    float version=WXHLOSVersion();
    if(version>=5.0){
        UIImage *backgroundImage=[[ThemeManager shareInstance] getThemeImage:@"navigationbar_background.png"];
        [self.navigationBar setBackgroundImage:backgroundImage forBarMetrics:UIBarMetricsDefault];
    }else{
        //调用setNeedsDisplay方法会让渲染引擎异步调用drawRect方法。
        //不能直接调drawRect方法，它是系统异步调用的。
        [self.navigationBar setNeedsDisplay];
    }
}


- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self name:kThemeDidChangeNotification object:nil];
    [super dealloc];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
@end
