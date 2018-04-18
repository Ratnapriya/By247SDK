//
//  TFSSDKError.h
//  by247-sdk-ios
//
//  Created by Gaurava Srivastava on 10/18/16.
//  Copyright © 2016 [24]7 Customer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * This object specifies the information about an SDK error.
 */
@interface TFSSDKError : NSError

typedef enum TFSSDKErrorCode {
    SDK_INITIALIZATION_FAILED = 1,  // This error indicates a failure in SDK intitialization.
    INTERACTION_NOT_STARTED = 2,    // This error indicates the SDK tries to close the chat window when its not already being displayed.
    GENERIC_ERROR = 3,              // This error indicates a generic failure in SDK.
    UPDATE_USER_PROFILE_FAILED = 4, // This error indicates a failure in trying to update the user's profile.
    SEND_MESSAGE_FAILED = 5,        // This error indicates a failure while sending user message to 247 messaging platform.
    LOGIN_FAILED = 6,               // This error indicates a failure to log user into the 247 messaging platform.
    SET_DEVICE_TOKEN_FAILED =7,     // This error indicates a failure in trying set the device's token on the 247 messaging platform.
    START_INTERACTION_FAILED = 8,   // This error indicates a failure in starting the chat interaction.
    SDK_NOT_INITIALIZED = 9,        // This error indicates a failure in using SDK apis when SDK is not initialized.
    INVALID_BRAND_USER_ID = 10,     // This error indicates that a nil or empty brandUserId was passed to the login api.
    INVALID_DEVICE_TOKEN = 11,      // This error indicates that a nil or empty device token was passed to the setDeviceToken api.
    INVALID_USER_ID = 12,           // This error indicates that a nil or empty userId was used.
    USER_NOT_PROVISIONED =13,       // This error indicates a failure in getting messages for an unprovisioned user.
    API_KEY_MISSING = 14,           // This error indicates that a nil or empty api key was passed to SDK initialize api.
    BRAND_MISSING = 15,             // This error indicates that a nil or empty`tfsBrand` was passed to SDK initialize api via the configuration.
    BASE_URL_MISSING = 16,          // This error indicates that a nil or empty `tfsBaseUrl` was passed to SDK initialize api via the configuration.
    LOG_API_KEY_MISSING = 17,       // This error indicates that a nil or empty `tfsLogApiKey` was passed to SDK initialize api via the configuration.
    MESSAGING_CONFIG_MISSING = 18,  // This error indicates a failure in providing required configuration for 247 messaging api.
    USER_REGISTRATION_FAILED = 19,  // This error indicates a failure in registering user with the 247 messaging platform.
    LOGGING_CONFIG_MISSING = 20,    // This error indicates a failure in providing required logging related configuration for 247 messaging api.
    CONFIG_URL_MISSING = 21,        // This error indicates that a nil or empty url was used to override default configuration.
    AUTHORIZATION_FAILED = 22,      // This error indicates that the client was not properly authorized to use the SDK.
    INVALID_CONTROLLER = 23,        // This error indicates that there is no valid controller to start interaction from a notification.
    LAUNCH_CHAT_FROM_NOTIF_ERROR = 24,  // This error indicates that the chat interaction was started by an unregistered user.
    USER_PROFILE_NIL  = 25,              // This error indicates that a nil or empty profile was passed to the setUserProfile api.
    BRAND_NOT_FOUND = 26,                // This error indicates that brand is not provsioned in messaging platform.
    CAN_NOT_FIND_SERVER = 27,           // This error indicates that messaging server can not be found or DNS lookup failed when connecting to it.
    SERVER_DOWN = 28,                   // This error indicates that messaging server can not be connected because server is down or can not accetp more requests at the moment.
    NO_NETWORK = 29,                    // This error indicates that not connected to Internet or connection lost during the request.
    OTHER_NETWORK_ERROR = 30,            // This error indicates that networking failed for some uncommon reason.
    DOWNLOAD_HISTORICAL_MESSAGE_ERROR = 31,     // This error indicates that downloading historial message failed for some reason.

} TFSSDKErrorCode;

@end
