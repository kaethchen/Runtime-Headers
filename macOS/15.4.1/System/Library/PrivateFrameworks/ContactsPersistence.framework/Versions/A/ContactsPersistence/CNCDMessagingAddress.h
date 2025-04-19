@class NSString, NSArray, ABCDService;

@interface CNCDMessagingAddress : ABCDOwnedObject

@property (copy) NSString *bundleIdentifiersString;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSArray *bundleIdentifiers;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (retain, nonatomic) ABCDService *service;
@property (retain, nonatomic) NSString *associatedServiceName;

+ (id)keyPathsForValuesAffectingBundleIdentifiers;

@end
