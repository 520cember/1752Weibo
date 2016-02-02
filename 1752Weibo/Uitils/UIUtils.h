//
//  UIUtils.h
//  1752WXWeibo
//
//  Created by 董兴斌 on 16/2/2.
//  Copyright © 2016年 董兴斌. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIUtils : NSObject

//获取documents下的文件路径
+ (NSString *)getDocumentsPath:(NSString *)fileName;
// date 格式化为 string
+ (NSString*) stringFromFomate:(NSDate*)date formate:(NSString*)formate;
// string 格式化为 date
+ (NSDate *) dateFromFomate:(NSString *)datestring formate:(NSString*)formate;

//格式化这样的日期：Sat Jan 12 11:50:16 +0800 2013 形成新的日期： 08-01 12:30
+ (NSString *)fomateString:(NSString *)datestring;

//解析微博内容中的链接等
+ (NSString *)parseLink:(NSString *)text;

@end
