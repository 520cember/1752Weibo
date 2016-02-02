//
//  UserGridView.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserModel.h"

@interface UserGridView : UIView

@property(nonatomic,retain)UserModel *userModel;
@property(nonatomic,retain)UIImageView *backgroundImageView;
@property(nonatomic,retain)UILabel *nickLabel;
@property(nonatomic,retain)UILabel *fansLabel;
@property(nonatomic,retain)UIButton *imageButton;

@end
