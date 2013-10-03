//
//  VWWUtility.h
//  EventBrite
//
//  Created by Zakk Hoyt (VaporWareWolf)
//  Copyright (c) 2013. Zakk Hoyt
//

#import <Foundation/Foundation.h>

@interface VWWUtility : NSObject

+ (id)sharedUtility;

@end

@interface VWWUtility (dates)
- (NSString *)stringFromDate:(NSDate *)date usingFormat:(NSString *)format;
- (NSDate *)internetFormattedDateFromString:(NSString *)dateString;
+(NSDate *)convertFromUTCToLocal:(NSDate*)utcDate;
+(NSDate *)convertFromLocalToUTC:(NSDate*)localDate;
@end

@interface VWWUtility (alerts)
+ (void)errorAlert:(NSString *)message title:(NSString *)title;
@end

@interface VWWUtility (strings)
+ (BOOL)isValidEmail:(NSString *)email;
@end