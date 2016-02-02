//
//  FriendshipsViewController.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//
#import "BaseViewController.h"
#import "FriendShipsTableView.h"


//定义枚举
/*
typedef enum{
    Attention,  //关注列表
    Fans        //粉丝
}FriendshipsType;
*/
typedef NS_ENUM(NSInteger, FriendshipsType) {
    Attention=100,  //关注列表，如果不指定默认是0
    Fans        //粉丝，默认逐渐累加1
};


@interface FriendshipsViewController : BaseViewController<UITableViewEventDelegate>

@property(nonatomic,copy)NSString *userId;
@property(nonatomic,retain)NSMutableArray *data;

@property(nonatomic,retain)FriendShipsTableView *tableView;

//记录下一页的游标值（每次请求从新浪微博返回的一个值）
@property(nonatomic,copy)NSString *cursor;

@property(nonatomic,assign)FriendshipsType shipType;

@end
