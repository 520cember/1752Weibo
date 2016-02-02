//
//  ThemeManager.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kThemeDidChangeNotification @"kThemeDidChangeNotification"

@interface ThemeManager : NSObject

//主题名称
@property(nonatomic,retain)NSString *themeName;
@property(nonatomic,retain)NSDictionary *themesPlist;
@property(nonatomic,retain)NSDictionary *fontColorPlist;

+ (ThemeManager *)shareInstance;

//返回当前主题下的图片
- (UIImage *)getThemeImage:(NSString *)imageName;
- (UIColor *)getColorWithName:(NSString *)name;
@end
