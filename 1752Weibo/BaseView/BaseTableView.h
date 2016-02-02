//
//  BaseTableView.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"


@class BaseTableView;
@protocol UITableViewEventDelegate <NSObject>

@optional
//下拉
- (void)pullDown:(BaseTableView *)tableView;
//上拉
- (void)pullUp:(BaseTableView *)tableView;
//选中
- (void)tableView:(BaseTableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
@end


@interface BaseTableView : UITableView<EGORefreshTableHeaderDelegate,UITableViewDataSource,UITableViewDelegate>

@property(nonatomic,retain)EGORefreshTableHeaderView *refreshHeaderView;
@property(nonatomic,assign)BOOL reloading;

//是否需要下拉效果
@property(nonatomic,assign)BOOL refreshHeader;

//为talbeview提供数据
@property(nonatomic,retain)NSArray *data;

//代理
@property(nonatomic,assign)id<UITableViewEventDelegate> eventDelegate;

@property(nonatomic,retain)UIButton *moreButton;

//是否还有更多
@property(nonatomic,assign)BOOL isMore;

//下拉弹回去
- (void)doneLoadingTableViewData;

//自动上拉刷新
- (void)autoRefreshData;

@end
