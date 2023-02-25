//
//  LauchPointInfo.m
//  ConnectSDK
//
//  Created by VietTu on 22/02/2023.
//

#import <Foundation/Foundation.h>
#import "LauchPointInfo.h"



@implementation LauchPointInfo

+ (LauchPointInfo *) lauchPointInfoForId:(NSString *)appId
{
    LauchPointInfo * lauchPointInfo = [LauchPointInfo new];
    lauchPointInfo.id = appId;

    return lauchPointInfo;
}

- (BOOL)isEqual:(LauchPointInfo *)lauchPointInfo
{
    return [self.id isEqualToString:lauchPointInfo.id];
}

@end
