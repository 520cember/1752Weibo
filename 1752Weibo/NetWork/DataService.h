//
//  DataService.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ASIFormDataRequest.h"

typedef void(^RequestFinishBlock)(id result);

@interface DataService : NSObject


+ (ASIHTTPRequest *)requestWithURL:(NSString *)urlstring
                            params:(NSMutableDictionary *)params
                        httpMethod:(NSString *)httpMethod
                     completeBlock:(RequestFinishBlock)block;

@end
