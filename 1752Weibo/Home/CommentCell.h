//
//  CommentCell.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RTLabel.h"
#import "CommentModel.h"

@interface CommentCell : UITableViewCell<RTLabelDelegate>

@property(nonatomic,retain)UIImageView *userImage;
@property(nonatomic,retain)UILabel *nickLabel;
@property(nonatomic,retain)UILabel *timeLabel;
@property(nonatomic,retain)RTLabel *contentLabel;

@property(nonatomic,retain)CommentModel *commentModel;

//计算评论单元格高度
+ (float)getCommentHeight:(CommentModel *)commentModel;

@end
