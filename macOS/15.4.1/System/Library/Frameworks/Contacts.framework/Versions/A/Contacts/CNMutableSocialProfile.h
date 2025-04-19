@class NSString, NSArray;

@interface CNMutableSocialProfile : CNSocialProfile

@property (copy) NSString *urlString;
@property (copy) NSString *username;
@property (copy) NSString *userIdentifier;
@property (copy) NSString *service;
@property (copy) NSString *displayname;
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSString *teamIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)freeze;

@end
