//
//  NearWeiboMapViewController.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import "BaseViewController.h"
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface NearWeiboMapViewController : BaseViewController<CLLocationManagerDelegate,MKMapViewDelegate>

@property(nonatomic,retain)NSArray *data;
@property(nonatomic,retain)MKMapView *mapView;

@end
