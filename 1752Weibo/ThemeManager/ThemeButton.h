//
//  ThemeButton.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ThemeButton : UIButton

@property(nonatomic,copy)NSString *imageName;
@property(nonatomic,copy)NSString *highlightImageName;

@property(nonatomic,copy)NSString *backgroundImageName;
@property(nonatomic,copy)NSString *backgroundHighlightImageName;

//横向离原点的拉伸位置
@property(nonatomic,assign)int leftCapWidth;
//y左边离原点的拉伸位置
@property(nonatomic,assign)int topCapHeight;


- (id)initWithImage:(NSString *)imageName highlighted:(NSString *)highlightImageName;
- (id)initWithBackgroundImage:(NSString *)backgroundImageName highlighted:(NSString *)backgroundHighlightImageName;

@end
