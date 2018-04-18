//
//  TFSInteractionSDK.h
//  by247-sdk-ios
//
//  Created by Kavita Gaitonde on 12/4/16.
//  Copyright © 2016 [24]7 Customer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIViewController.h>
#import "TFSUser.h"
#import "TFSSDKError.h"
#import "TFSSDKTriggerConfig.h"

/**
 * TFSInteractionSDK is the interface object for invoking the SDK's functionality. This object provides functionality to intiliaze the SDK, configure the built in UI and render the chat UI.
 */
@interface TFSInteractionSDK : NSObject


/**
 * This method creates a singleton instance of the TFSInteractionSDK
 * @returns TFSInteractionSDK shared object. It will return nil if SDK has not been initialized.
 */
+(TFSInteractionSDK * _Nullable)sharedInstance;

/**
 * This method initializes all of the required core SDK resources. It stores the `brandUserId` if provided, for lazy registration of user later on. The `key` is used for future server side communication for ex. for registering user or getting and sending messages to server.
 * @param brandUserId If this value is specified, it MUST be a unique identifier for current user on client application/platform. Ideally this an email address or phone number or some UUID value passed in by the client application that uniquely identifies the user on client platform. If this same user logs in via another device, the same brandUserId should be passed in. If the value is null, then the user is treated as an anonymous user.
 * @param key An api key shared with client for using SDK. The SDK requires this key to make server side api requests on the 24/7 platform.
 * @param delegate Client app delegate which will be used for callbacks from SDK.
 * @param onSuccess A block of code to be executed when SDK initialization succeeds.
 * @param onError A block of code to be executed when SDK initialization fails with some error.
 */
+(void)initialize:(NSString * _Nullable)brandUserId key:(NSString * _Nonnull)key delegate:(id _Nullable)delegate onSuccess:(nullable void (^)())onSuccess onError:(nonnull void (^)(NSError * _Nonnull))onError;

/**
 * This method initializes all of the required core SDK resources. It stores the `brandUserId` if provided, for lazy registration of user later on. The `key` is used for future server side communication for ex. for registering user or getting and sending messages to server.
 * @param brandUserId If this value is specified, it MUST be a unique identifier for current user on client application/platform. Ideally this an email address or phone number or some UUID value passed in by the client application that uniquely identifies the user on client platform. If this same user logs in via another device, the same brandUserId should be passed in. If the value is null, then the user is treated as an anonymous user.
 * @param key An api key shared with client for using SDK. The SDK requires this key to make server side api requests on the 24/7 platform.
 * @param delegate Client app delegate which will be used for callbacks from SDK.
 * @param configuration This is an optional parameter. The SDK reads default ui configuration from a pre-configured endpoint for a brand specified under 'tfsConfigUrl' inside the By247SDKResources/tfsresources.plist file. If client app needs to change or override certain properties, like 'primaryColor' or 'messageBgColor', it can do so by specifying these configuration keys with different values in the `configuration` dictionary. 
 * @param onSuccess A block of code to be executed when SDK initialization succeeds.
 * @param onError A block of code to be executed when SDK initialization fails with some error.
 */
+(void)initialize:(NSString *_Nullable)brandUserId key:(NSString * _Nonnull)key delegate:(id _Nullable)delegate config:(NSDictionary * _Nullable)configuration onSuccess:(nullable void (^)())onSuccess onError:(nonnull void (^)(NSError * _Nonnull))onError;

/**
 * This method sets the delegate.
 * @param delegate Client app delegate
 */
- (void)setDelegate:(id _Nullable)delegate;

/**
 * This method updates the deviceToken for the current user in the SDK which in turn stores it on server side and local cache too.
 * @param deviceToken New deviceToken for device.
 * @param onSuccess A block of code to be executed when setting device token succeeds.
 * @param onError A block of code to be executed when setting device token fails with some error.
 */
- (void)setDeviceToken:(NSString* _Nonnull)deviceToken onSuccess:(nullable void (^)())onSuccess onError:(nonnull void (^)(NSError * _Nonnull))onError;

/**
 * This method deletes the deviceToken for the current user.
 * @param onSuccess A block of code to be executed when deleting device token succeeds.
 * @param onError A block of code to be executed when deleting device token fails with some error.
 */
- (void)deleteDeviceToken:(nullable void (^)())onSuccess onError:(nonnull void (^)(NSError * _Nonnull))onError;


/**
 * Registers a new user with the SDK. Use this api if the brandUserId specified in the initialize(..) api has since changed due to a different user login.
 * @param brandUserId This value MUST be a unique identifier for current user on host application/platform.
 */
-(TFSSDKError *_Nullable) login : (NSString * _Nonnull) brandUserId;


/**
 * Logs out an existing user with the SDK
 */
-(void) logout;


/**
 * This method returns BOOL to indicate if SDK has been initialized.
 * @returns Returns YES if SDK has been initialized else returns NO
 */
- (BOOL)isInitialized;


/**
 * This method updates all the user profile info associated with the user object provided. SDK sends this information to the 24/7 platform so this information can be communicated to agents during chat conversations with the user.
 * @param profile TFSUserProfile object describes different user attributes that can be saved per user. All the attributes are optional but we recommend setting at least the user's name.
 * @param onSuccess A block of code to be executed when setting profile succeeds.
 * @param onError A block of code to be executed when setting profile fails with some error.
 */
- (void)setUserProfile:(TFSUserProfile * _Nonnull)profile onSuccess:(nullable void (^)())onSuccess onError:(nonnull void (^)(NSError * _Nonnull))onError;

/**
 * This method starts the chat interaction from a client application's view controller. If user is not already registered, especially when its the first time this api called, the `brandUserId` gets registered lazily in this api. Upon successful user registration, the chat view is displayed. If there is an error, then chat view is not displayed, and appropriate error is passed in the `onError` callback.
 * @param controller The controller from where the SDK chat interaction api is invoked.
 * @param viewId The identifier of the view from where the chat is launched, which is used for logging event.
 * @param onError A block of code to be executed when start interaction fails with some error.
 */
- (void)startInteractionFromController:(UIViewController * _Nonnull)controller withViewId:(NSString * _Nonnull)viewId onError:(nonnull void (^)(NSError * _Nonnull))onError;

/**
 * This method starts the chat interaction from a client application's view controller. If user is not already registered, especially when its the first time this api called, the `brandUserId` gets registered lazily in this api. Upon successful user registration, the chat view is displayed. If there is an error, then chat view is not displayed, and appropriate error is passed in the `onError` callback.
 * @param controller The controller from where the SDK chat interaction api is invoked
 * @param viewId The identifier of the view from where the chat is launched, which is used for logging event.
 * @param config Client app specified overriding configuration dictionary.
 * @param configuration If client app needs to change or override certain properties, it can do so by specifying the configuration keys with different values in the configuration dictionary. This is an optional parameter.
 * @param triggerConfig Client app specified configuration object for triggering specific interaction. This is an optional parameter.
 * @param onError A block of code to be executed when start interaction fails with some error.
 */
- (void)startInteractionFromController:(UIViewController * _Nonnull)controller withViewId:(NSString * _Nonnull)viewId andConfig:(NSDictionary * _Nullable)config andTriggerConfig:(TFSSDKTriggerConfig * _Nullable)triggerConfig onError:(nonnull void (^)(NSError * _Nonnull))onError;

/**
 * This method indicates to the calling application if the chat view is currently being presented.
 * @returns Returns YES of the chat view controller is active, else returns NO
 */
- (BOOL)isChatViewPresented;

/**
 * This method is invoked to minimize/hide the chat interaction view controller
 */
- (void)hideChatView;

/**
 * This method sends log for events to be stored on 24/7 platform.
 * @param event event type to log
 * @param viewId id for the view where the event happens.
 */
- (void)logEvent:(TFSLoggingEvent)event atView:(NSString * _Nonnull)viewId;

/**
 * This method returns the version of the SDK.
 * @returns SDK version string
 */
+ (NSString * _Nullable)getSDKVersion;

/**
 * This method sets a locale for the SDK to display static strings.
 * @param localeStr The locale string to set
 * @returns Returns YES if successful, else failed
 */
- (BOOL)setLocale: (NSString* _Nonnull)localeStr;


/**
 * This method sets an optional accessibility custom sound for the new incoming chat message.
 * @param soundFileName The sound file name
 * @param soundFileType The sound file type
 */
- (void)setCustomSound: (NSString* _Nonnull)soundFileName soundFileType:(NSString* _Nonnull)soundFileType;

/**
 * This method sends any context specific data (eg: journey, current location, page info etc) for that user interaction. The existing context is overwritten when set with a new value.
 * @param context A dictionary with any keys and values related to the context.
 */
- (void)sendContext : (NSDictionary * _Nullable) context;


@end
