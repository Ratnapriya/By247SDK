//
//  TFSSDKDelegate.h
//  by247-sdk-ios
//
//  Created by Gaurava Srivastava on 9/20/16.
//  Copyright © 2016 [24]7 Customer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFSSDKError.h"

/**
 * This delegate defines the different methods the client application needs to implement in order to handle differents events like message received, chat view minimized etc.
 */
@protocol TFSSDKDelegate <NSObject>

@optional

/** onMessageReceived Notifies application when new messages(agent or VA) are received in the Chat. This is an optional notification and can be used to inform the user that the agent has sent messages.
 * @param data message Data object. Data received.
 */
-(void)onMessageReceived:(NSArray*)data;

/** onMessageDownloadStarted Notifies application that a download message process has begun. This is an optional notification.
 */
-(void)onMessageDownloadStarted;

/** onMessageDownloadComplete Notifies application that a download message process has completed. This is an optional notification.
 * @param error If an error is generated while downloading a message, this will contain the error information 
 */
-(void)onMessageDownloadComplete:(NSError *)error;

/** onChatViewDismissed Notifies application when the chat view has been hidden from the end user. This is an optional notification and can be used to display a custom minimized button that the user can click to go back into chat.
 */
-(void)onChatViewDismissed;

/** onChatViewPresented Notifies application when the chat view has been displayed back to the end user. This is an optional notification and should be handled if the application developer needs to perform any application specific functions when chat screen gets presented
 */
-(void)onChatViewPresented;

/** onNavigationRequest Notifies application when a custom URL specified in configuration object is received in the  chat and has been clicked by the end user. This is an optional notification.
 * @param url Url on which navigation is requested.
 */
-(void)onNavigationRequest:(NSString *)url;

/** onCustomCardAction Notifies the application that a custom card was invoked. The control is transfered to the delegate which is the client app in this case.
 * @param cardName Name of custom card invoked.
 * @param cardData Data of custom card.
 */
-(void)onCustomCardActionTriggered:(NSString *)cardName cardData:(NSDictionary *)cardData onSuccess:(nonnull void (^)(NSDictionary* _Nullable))onSuccess onError:(nonnull void (^)(NSDictionary* _Nullable))onError;

/** onSDKError Notifies application when any error occurs on SDK side.
 * @param error TFSSDKError object which holds error information
 */
-(void)onSDKError:(nonnull TFSSDKError *)error;

@end
