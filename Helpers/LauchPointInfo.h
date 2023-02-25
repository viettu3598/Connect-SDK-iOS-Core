//
//  LauchPointInfo.h
//  Pods
//
//  Created by VietTu on 22/02/2023.
//


#import <Foundation/Foundation.h>

@interface LauchPointInfo : NSObject

/*!
 * ID of the app on the first screen device. Format is different depending on the platform. (ex. youtube.leanback.v4, 0000001134, netflix, etc).
 */
@property (nonatomic, strong) NSString *id;

/*! User-friendly name of the app (ex. YouTube, Browser, Netflix, etc). */
@property (nonatomic, strong) NSString *name;

@property (nonatomic, strong) NSString *icon;

/*! Raw data from the first screen device about the app. In most cases, this is an NSDictionary. */
@property (nonatomic, strong) id rawData;

/*!
 * Compares two AppInfo objects.
 *
 * @param lauchPointInfo AppInfo object to compare.
 *
 * @return YES if both AppInfo id values are equal
 */
- (BOOL)isEqual:(LauchPointInfo *)lauchPointInfo;

/*!
 * Static constructor method.
 *
 * @param appId ID of the app on the first screen device
 */
+ (LauchPointInfo *) lauchPointInfoForId:(NSString *)appId;

@end
