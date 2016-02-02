//
//  InterfaceImageView.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//
#import <UIKit/UIKit.h>

typedef void(^ImageBlock)(void);

@interface InterfaceImageView : UIImageView

@property(nonatomic,copy)ImageBlock touchBlock;

@end
