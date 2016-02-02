//
//  UserInfoView.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserModel.h"
#import "RectButton.h"

@interface UserInfoView : UIView

@property(nonatomic,retain)UserModel *userModel;


//头像
@property(nonatomic,retain)UIImageView *userImage;
//昵称
@property(nonatomic,retain)UILabel *nickLabel;
//地址
@property(nonatomic,retain)UILabel *addressLabel;
//简介
@property(nonatomic,retain)UILabel *infoLabel;
//关注按钮
@property(nonatomic,retain)RectButton *attButton;
//粉丝按钮
@property(nonatomic,retain)RectButton *fansButton;
//资料按钮
@property(nonatomic,retain)RectButton *profileButton;
//更多按钮
@property(nonatomic,retain)RectButton *moreButton;
//微博总数量
@property(nonatomic,retain)UILabel *contentLabel;


@end
