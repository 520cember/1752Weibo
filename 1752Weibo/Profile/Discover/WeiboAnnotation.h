//
//  WeiboAnnotation.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import "WeiboModel.h"

@interface WeiboAnnotation : NSObject<MKAnnotation>

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
//@property (nonatomic, readonly, copy) NSString *title;
//@property (nonatomic, readonly, copy) NSString *subtitle;

@property(nonatomic,retain)WeiboModel *weiboModel;

- (id)initWithWeibo:(WeiboModel *)weibo;

@end
