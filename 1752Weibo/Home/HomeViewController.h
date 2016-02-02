//
//  HomeViewController.h
//  1752WXWeibo

//  个人首页控制器

//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseViewController.h"
#import "WeiboTableView.h"
#import "ThemeImageView.h"

@interface HomeViewController : BaseViewController<SinaWeiboRequestDelegate,UITableViewEventDelegate>

@property(nonatomic,retain)WeiboTableView *tableView;

//第一条微博id
@property(nonatomic,copy)NSString *topWeiboId;
//最后一条微博id
@property(nonatomic,copy)NSString *lastWeiboId;

@property(nonatomic,retain)NSMutableArray *weibos;

//显示微博数量的横条
@property(nonatomic,retain)ThemeImageView *barView;

//自动刷新微博
- (void)autorefreshWeibo;
//初始加载微博
- (void)loadWeiboData;
@end
