//
//  NearbyViewController.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseViewController.h"
#import <CoreLocation/CoreLocation.h>

typedef void(^SelectDoneBlock)(NSDictionary *);
@interface NearbyViewController : BaseViewController<UITableViewDelegate,UITableViewDataSource,CLLocationManagerDelegate>

@property(nonatomic,retain)UITableView *tableView;
@property(nonatomic,retain)NSArray *data;

@property(nonatomic,copy)SelectDoneBlock selectBlock;

@end
