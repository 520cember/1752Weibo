//
//  FaceView.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SelectBlock)(NSString *faceName);

@interface FaceView : UIView

//表情数组
@property(nonatomic,retain)NSMutableArray *items;
//放大镜
@property(nonatomic,retain)UIImageView *magnifierView;
//选中的表情
@property(nonatomic,copy)NSString *selectFaceName;

//数组的数量
@property(nonatomic,assign)NSInteger pageNumber;

@property(nonatomic,copy)SelectBlock selectBlock;

@end
