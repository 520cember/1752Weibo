//
//  CONSTS.h
//  WXWeibo
//
//  Created by 张 启迪 on 13-8-15.
//  Copyright (c) 2013年 张 启迪. All rights reserved.
//

#ifndef WXWeibo_CONSTS_h
#define WXWeibo_CONSTS_h

#endif

//weibo oauth2.0
#define kAppKey             @"2938681303"
#define kAppSecret          @"fcda08bfe745d28ecc6ad4404c3ba455"
#define kAppRedirectURI     @"https://api.weibo.com/oauth2/default.html"

//颜色
#define Color(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0  blue:b/255.0  alpha:a]


//font color keys
#define kNavigationBarTitleLabel @"kNavigationBarTitleLabel"
#define kThemeListLabel @"kThemeListLabel"


//----用于存储的keys----
//主题存储在NSUserDefaults中的key
#define kThemeName @"kThemeName"
//图片浏览模式存储在NSUserDefaults中的key
#define kModeName @"kModeName"
//小图浏览模式
#define SmallBrowMode 1
//大图浏览模式
#define LargeBrowMode 2


//----通知----
#define kReloadWeiboTableNotification @"kReloadWeiboTableNotification"
