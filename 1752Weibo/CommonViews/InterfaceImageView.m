//
//  InterfaceImageView.m
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "InterfaceImageView.h"

@implementation InterfaceImageView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.userInteractionEnabled=YES;
        UITapGestureRecognizer *tapGesture=[[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapAction:)] autorelease];
        [self addGestureRecognizer:tapGesture];
        
    }
    return self;
}


- (void)tapAction:(UITapGestureRecognizer *)tapGesture
{
    if (self.touchBlock) {
        self.touchBlock();
    }
}

- (void)dealloc
{
    self.touchBlock=nil;
    [super dealloc];
}

@end
