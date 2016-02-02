//
//  UserViewController.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseViewController.h"
#import "WeiboTableView.h"
#import "UserInfoView.h"

@interface UserViewController : BaseViewController<UITableViewEventDelegate>

@property(nonatomic,retain)NSString *userName;
@property(nonatomic,copy)NSString *userId;
//是否是显示当前用户的资料
@property(nonatomic,assign)BOOL showLoginUser;

@property(nonatomic,retain)WeiboTableView *tableView;

@property(nonatomic,retain)UserInfoView *userInfo;

@property(nonatomic,retain)NSMutableArray *requests;

@end
