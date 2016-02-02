//
//  CustomCatagory.m
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "CustomCatagory.h"
#import "ThemeManager.h"

//5.0以下系统自定义UINavigationBar背景
@implementation UINavigationBar(setbackgroud)

- (void)drawRect:(CGRect)rect {
    UIImage *backgroundImage=[[ThemeManager shareInstance] getThemeImage:@"navigationbar_background.png"];
    //UIImage *image = [UIImage imageNamed:@"navigationbar_background"];
    [backgroundImage drawInRect:rect];
}

@end
