//
//  ThemeLabel.m
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "ThemeLabel.h"
#import "ThemeManager.h"


@implementation ThemeLabel


- (id)init
{
    self=[super init];
    if (self) {
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(themeNotification:) name:kThemeDidChangeNotification object:nil];
    }
    return self;
}

- (id)initWithColorName:(NSString*)colorName
{
    self=[self init];
    if (self) {
        self.colorName=colorName;
    }
    return self;
}

- (void)setColorName:(NSString *)colorName{
    if (_colorName!=colorName) {
        [_colorName release];
        _colorName=[colorName copy];
    }
    [self setColor];
}

- (void)themeNotification:(NSNotification *)notify
{
    [self setColor];
}

- (void)setColor
{
    UIColor *textColor=[[ThemeManager shareInstance] getColorWithName:self.colorName];
    self.textColor=textColor;
}
- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    [super dealloc];
}


@end
