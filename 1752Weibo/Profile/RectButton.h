//
//  RectButton.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RectButton : UIButton

@property(nonatomic,retain)UILabel *rectTitleLabel;
@property(nonatomic,retain)UILabel *subtitleLabel;

@property(nonatomic,copy)NSString *title;
@property(nonatomic,copy)NSString *subtitle;

@end
