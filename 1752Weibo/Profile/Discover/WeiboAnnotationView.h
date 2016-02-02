//
//  WeiboAnnotationView.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <MapKit/MapKit.h>

@interface WeiboAnnotationView : MKAnnotationView

@property(nonatomic,retain)UIImageView *userImage;
@property(nonatomic,retain)UIImageView *weiboImage;
@property(nonatomic,retain)UILabel *textLabel;


@end
