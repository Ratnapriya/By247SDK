//
//  TFSSDKTriggerConfig.h
//  by247-sdk-ios
//
//  Created by Ratnapriya Saripalli on 10/10/17.
//  Copyright © 2017 [24]7 Customer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 * Encapsulates the configuration data that could be provided to trigger a specific interaction.
 */

@interface TFSSDKTriggerConfig : NSObject

@property (readwrite, nonatomic, strong) NSString * _Nonnull queue;

-(instancetype _Nonnull ) init:(NSString * _Nonnull )queue;

@end
