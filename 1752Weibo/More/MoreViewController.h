//
//  MoreViewController.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseViewController.h"

@interface MoreViewController : BaseViewController<UITableViewDataSource,UITableViewDelegate>

@property(nonatomic,retain)UITableView *tableView;
@property(nonatomic,retain)NSArray *moreData;

@end
