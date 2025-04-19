@class NSString, NSArray, NSURL, NSDictionary;

@interface OSSystemExtensionInfo : NSObject <NSSecureCoding, OSSystemExtensionPolicyItem> {
    BOOL _enabled;
    NSDictionary *_localizedInfo;
    NSDictionary *_unlocalizedInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSString *developerName;
@property (retain) NSArray *categoryIdentifiers;
@property (retain) NSString *owningCategoryIdentifier;
@property (retain) NSString *teamID;
@property BOOL teamIDPlatformBinary;
@property BOOL teamIDNone;
@property (copy) NSString *bundleVersion;
@property (retain) NSString *shortVersionString;
@property (retain) NSURL *containingAppURL;
@property (retain) NSURL *stagedBundleURL;
@property (retain) NSString *stagedCdhash;
@property (retain) NSArray *stagedCdhashes;
@property BOOL active;
@property BOOL rebootRequired;
@property BOOL modified;
@property (retain) NSString *stateString;
@property (retain) NSDictionary *additionalLaunchdPlistEntries;
@property BOOL removable;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *bundleShortVersion;
@property (readonly) NSString *extensionDisplayName;
@property (readonly) NSString *applicationName;
@property (readonly) NSString *usageDescription;
@property BOOL enabled;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)getLocalizedStringForKey:(id)a0;

@end
