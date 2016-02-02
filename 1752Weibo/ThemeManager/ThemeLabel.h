//
//  ThemeLabel.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ThemeLabel : UILabel

@property(nonatomic,copy)NSString *colorName;

- (id)initWithColorName:(NSString*)colorName;

@end
