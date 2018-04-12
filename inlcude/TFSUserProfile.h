//
//  TFSUserProfile.h
//  by247-sdk-ios
//
//  Created by Ratnapriya Saripalli on 7/19/17.
//  Copyright © 2017 [24]7 Customer, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TFSEnums.h"

/**
 *  This class represents the user profile data e.g. first name, last name, birth date, gender, language preference, etc. All these attributes are optional but we recommend setting at least `name` attribute.
 */
@interface TFSUserProfile : NSObject

/**
 *  The user's first name
 */
@property (nonatomic, copy) NSString *firstName;

/**
 *  The user's last name
 */
@property (nonatomic, copy) NSString *lastName;

/**
 *  The user's full name
 */
@property (nonatomic, copy) NSString *name;

/**
 *  The user's home address
 */
@property (nonatomic, copy) NSString *homeLocation;

/**
 *  The user's birthdate in ISO-8601 format, ex."1940-10-23"
 */
@property (nonatomic, copy) NSString *birthDate;

/**
 *  The user's languages in ISO 3166-1 alpha-2 format, ex.["pt-BR","es-AR","es-ES","en-US"]
 */
@property (nonatomic, copy) NSArray *languages;

/**
 *  Additional meta data associated with user can put into keys in the moreInfo dictionary
 */
@property (nonatomic, copy) NSDictionary *moreInfo;


/**
 *  The user's email address
 */
@property (nonatomic, copy) NSString *email;

/**
 *  The user's mobile number
 */
@property (nonatomic, copy) NSString *mobileNumber;

/**
 *  The user's avatar url (info)
 */
@property (nonatomic, copy) NSString *avatarUrlString;

/**
 *  The user's gender (info)
 */
@property (nonatomic, assign) TFSUserGender gender;

/**
 * This method creates a new TFSUser object from the provided information
 * @param attributes A dictionary containing information to build a TFSUser object
 * @returns A shared TFSUser object.
 */
- (instancetype)initWithAttributes:(NSDictionary *)attributes;


/**
 * This method updates user's profile information from the provided NSDictionary
 * @param attributes A dictionary containing information to set a user object's profile
 */
- (void)updateUserProfileFrom:(NSDictionary *)attributes;


/**
 * This method returns a dictionary representation of the TFSUser object
 * @returns NSDictionary representation of the TFSUser object
 */
- (NSDictionary *)toDictionary;


@end
