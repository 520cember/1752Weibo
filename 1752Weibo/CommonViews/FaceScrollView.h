//
//  FaceScrollView.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FaceView.h"

@interface FaceScrollView : UIView<UIScrollViewDelegate>

@property(nonatomic,retain)UIScrollView *scrollView;
@property(nonatomic,retain)FaceView *faceView;
@property(nonatomic,retain)UIPageControl *pageControl;

- (id)initWithSelectBlock:(SelectBlock)block;

@end
