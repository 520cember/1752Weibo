//
//  UIView+Additions.m
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "UIView+Additions.h"

@implementation UIView (Additions)


- (UIViewController *)viewController
{
    //下一个响应者
    UIResponder *next=self.nextResponder;
    //循环查找viewController
    do {
        if ([next isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)next;
        }
        next=next.nextResponder;
    } while (next!=nil);
    
    return nil;
}

@end
