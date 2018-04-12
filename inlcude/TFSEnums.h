/*
 * 24/7 Customer, Inc. Confidential, Do Not Distribute. This is an
 * unpublished, proprietary work which is fully protected under
 * copyright law. This code may only be used pursuant to a valid
 * license from 24/7 Customer, Inc.
 */

#import <Foundation/Foundation.h>

/**
 *  The user's gender.
 */
typedef NS_ENUM(NSInteger, TFSUserGender) {
    /**
     *  Unknown.
     */
    TFSUserGenderUnknown,
    /**
     *  Male.
     */
    TFSUserGenderMale,
    /**
     *  Female.
     */
    TFSUserGenderFemale
};

/**
 *  The TFS logging action.
 */
typedef NS_ENUM(NSInteger, TFSLoggingEvent) {
    /**
     *  button clicked
     */
    TFSButtonClicked,
    /**
     *  button shown
     */
    TFSButtonShown,
    /**
     *  button shown
     */
    TFSMessageSending    
};

/**
 *  A helper class to translate the known enums to the string equivalent.
 */
@interface TFSEnums : NSObject

/**
 *  Convert TFSUserGender to string.
 *
 *  @param userGender Enum value from TFSUserGender
 *
 *  @return The string equivalent of userGender.
 */
+ (NSString *)TFSUserGenderToString:(TFSUserGender)userGender;

/**
 *  Convert string to TFSUserGender.
 *
 *  @param userGender String gender
 *
 *  @return Enum value from TFSUserGender.
 */

+ (TFSUserGender)genderToTFSUserGender:(NSString *)userGender;

/**
 * Convert TFSLoggingEvent to string
 * @param event Enum value from TFSLoggingEvent
 * @return The equivalent of the action.
 */

+ (NSString *)TFSLoggingEventToString:(TFSLoggingEvent) event;

@end
