@class NSString, NSArray, NSData, NSURL, NSDictionary;

@interface ABCDSocialProfile : ABCDOwnedObject

@property (copy) NSString *bundleIdentifiersString;
@property (copy) NSString *username;
@property (copy) NSString *displayname;
@property (copy) NSString *userIdentifier;
@property (copy) NSString *urlString;
@property (copy) NSString *serviceName;
@property (copy) NSArray *bundleIdentifiers;
@property (copy) NSString *teamIdentifier;
@property (copy) NSData *customValuesData;
@property (retain, nonatomic) NSURL *url;
@property (copy) NSDictionary *customValues;
@property (copy) NSString *displayValue;

+ (id)builtInSocialProfileServices;
+ (BOOL)isStandardServiceName:(id)a0;
+ (id)keyPathsForValuesAffectingBundleIdentifiers;
+ (id)keyPathsForValuesAffectingCustomValues;
+ (id)keyPathsForValuesAffectingDisplayValue;
+ (id)keyPathsForValuesAffectingUrl;
+ (id)privateKeysForPublicKeys;

- (id)dictionaryRepresentation;
- (void)willSave;
- (void)_makeSureItsLabeled;
- (void)_normalizeValues;
- (void)_sanitizeServiceName;
- (void)_sanitizeUsername;
- (void)_synthesizeURL;
- (BOOL)_synthesizeURLFromUserIdentifier;
- (BOOL)_synthesizeURLFromUserName;
- (BOOL)abHasAddressBookRelatedContent;
- (void)applyDictionaryRepresentation:(id)a0;
- (void)clearURL;

@end
