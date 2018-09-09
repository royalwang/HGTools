//
//  MJPrintTools.h
//  ddd222
//
//  Created by ZhuHong on 2018/9/9.
//  Copyright © 2018年 CoderHG. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *MJPrintColorDefault;

extern NSString *MJPrintColorRed;
extern NSString *MJPrintColorGreen;
extern NSString *MJPrintColorBlue;
extern NSString *MJPrintColorWhite;
extern NSString *MJPrintColorBlack;
extern NSString *MJPrintColorYellow;
extern NSString *MJPrintColorCyan;
extern NSString *MJPrintColorMagenta;

extern NSString *MJPrintColorWarning;
extern NSString *MJPrintColorError;
extern NSString *MJPrintColorStrong;


@interface MJPrintTools : NSObject

+ (void)print:(NSString *)format, ...;
+ (void)printError:(NSString *)format, ...;
+ (void)printWarning:(NSString *)format, ...;
+ (void)printStrong:(NSString *)format, ...;
+ (void)printColor:(NSString *)color format:(NSString *)format, ...;

@end
