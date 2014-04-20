//
//  MINetworkManager.h
//  MyInstagram
//
//  Created by Sergey Garazha on 27/03/14.
//  Copyright (c) 2014 self. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RKObjectManager;

typedef void (^feedReturnBlockType)(BOOL success, NSArray *resultArray);

@interface MINetworkManager : NSObject

@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) RKObjectManager *manager;

+ (MINetworkManager *)sharedInstance;
+ (BOOL)performInstagramAuthorization;
- (NSArray *)getFeedAndExecute:(feedReturnBlockType)block;

@end
