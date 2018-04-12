/*
 * 24/7 Customer, Inc. Confidential, Do Not Distribute. This is an
 * unpublished, proprietary work which is fully protected under
 * copyright law. This code may only be used pursuant to a valid
 * license from 24/7 Customer, Inc.
 */

#import <Foundation/Foundation.h>
#import "TFSEnums.h"
#import "TFSUserProfile.h"
/**
 *  This class represents the user identifiers and other info.
 *  User identifiers are used to (close to) uniquely identify a user, e.g.
 *  email, mobile number, etc.
 *  User info are used to describe a user in more details, but not for
 *  identification purpose, e.g. age, gender, language preference, etc.
 */
@interface TFSUser : NSObject

/**
 *  The user's user id (sdk identifier)
 */
@property (readonly, nonatomic, copy) NSString *userId;

/**
 *  The user's brand user id (user's identifier on the brand)
 */
@property (readonly, nonatomic, copy) NSString *brandUserId;
/**
 *  The deviceToken on the user's device
 */
@property (nonatomic, copy) NSString *deviceToken;

/**
 *  The user's profile
 */
@property (nonatomic, strong) TFSUserProfile *profile;


/**
 * This method sets the userId on user object
 * @param userId User identifier
 */
- (void)setUserId:(NSString *)userId;

/**
 * This method sets the client's user id on user object
 * @param brandUserId Client's user identifier
 */
- (void)setBrandUserId:(NSString *)brandUserId;

/**
 * This method creates a new TFSUser object from the provided information
 * @param brandUserId Client's user identifier
 * @returns A shared TFSUser object.
 */
- (instancetype)initWithBrandUserId:(NSString *)brandUserId;

/**
 * This method creates a new TFSUser object from the provided information
 * @param attributes A dictionary containing information to build a TFSUser object
 * @returns A shared TFSUser object.
 */
- (instancetype)initWithAttributes:(NSDictionary *)attributes;


/**
 * This method returns a dictionary representation of the TFSUser object
 * @returns NSDictionary representation of the TFSUser object
 */
- (NSDictionary *)toDictionary;

@end
