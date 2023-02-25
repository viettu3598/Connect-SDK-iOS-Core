//
//  KeyControl.h
//  Connect SDK
//
//  Created by Jeremy White on 1/3/14.
//  Copyright (c) 2014 LG Electronics.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "Capability.h"

#define kKeyControlAny @"KeyControl.Any"

#define kKeyControlUp @"KeyControl.Up"
#define kKeyControlDown @"KeyControl.Down"
#define kKeyControlLeft @"KeyControl.Left"
#define kKeyControlRight @"KeyControl.Right"
#define kKeyControlOK @"KeyControl.OK"
#define kKeyControlBack @"KeyControl.Back"
#define kKeyControlHome @"KeyControl.Home"
#define kKeyControlEnter @"KeyControl.Enter"
#define kKeyControlMenu @"KeyControl.Menu"
#define kKeyControlInfo @"KeyControl.Info"
#define kKeyControlExit @"KeyControl.Exit"
#define kKeyControlSetting @"KeyControl.Setting"
#define kKeyControlCC @"KeyControl.CC"
#define kKeyControlNumber0 @"KeyControl.Number0"
#define kKeyControlNumber1 @"KeyControl.Number1"
#define kKeyControlNumber2 @"KeyControl.Number2"
#define kKeyControlNumber3 @"KeyControl.Number3"
#define kKeyControlNumber4 @"KeyControl.Number4"
#define kKeyControlNumber5 @"KeyControl.Number5"
#define kKeyControlNumber6 @"KeyControl.Number6"
#define kKeyControlNumber7 @"KeyControl.Number7"
#define kKeyControlNumber8 @"KeyControl.Number8"
#define kKeyControlNumber9 @"KeyControl.Number9"

#define kKeyControlSendKeyCode @"KeyControl.Send.KeyCode"

#define kKeyControlCapabilities @[\
    kKeyControlUp,\
    kKeyControlDown,\
    kKeyControlLeft,\
    kKeyControlRight,\
    kKeyControlOK,\
    kKeyControlBack,\
    kKeyControlHome,\
    kKeyControlEnter,\
    kKeyControlMenu,\
    kKeyControlInfo,\
    kKeyControlExit,\
    kKeyControlSetting,\
    kKeyControlCC,\
    kKeyControlNumber0,\
    kKeyControlNumber1,\
    kKeyControlNumber2,\
    kKeyControlNumber3,\
    kKeyControlNumber4,\
    kKeyControlNumber5,\
    kKeyControlNumber6,\
    kKeyControlNumber7,\
    kKeyControlNumber8,\
    kKeyControlNumber9,\
    kKeyControlSendKeyCode\
]

@protocol KeyControl <NSObject>

- (id<KeyControl>) keyControl;
- (CapabilityPriorityLevel) keyControlPriority;

- (void) upWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) downWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) leftWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) rightWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) okWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) backWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) homeWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) enterWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) menuWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) infoWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) exitWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) settingWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) ccWithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number0WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number1WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number2WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number3WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number4WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number5WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number6WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number7WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number8WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;
- (void) number9WithSuccess:(SuccessBlock)success failure:(FailureBlock)failure;

- (void) sendKeyCode:(NSUInteger)keyCode success:(SuccessBlock)success failure:(FailureBlock)failure;

@end
