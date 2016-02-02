//
//  DetailViewController.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseViewController.h"
#import "WeiboModel.h"
#import "WeiboView.h"
#import "CommentTableView.h"
#import "InterfaceImageView.h"

@interface DetailViewController : BaseViewController<UITableViewEventDelegate>

@property(nonatomic,retain)InterfaceImageView *userImageView;

@property(nonatomic,retain)WeiboModel *weiboModel;
@property(nonatomic,retain)WeiboView *weiboView;

@property(nonatomic,retain)CommentTableView *tableView;

@property(nonatomic,retain)NSString *lastCommentId;
@property(nonatomic,retain)NSMutableArray *comments;

@property(nonatomic,retain)NSMutableArray *requests;

@end
