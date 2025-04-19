@class LSBundleRecord;

@interface _LSCoreTypesRecordProxy : NSProxy <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LSBundleRecord *_realRecord;

+ (id)description;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;

- (BOOL)conformsToProtocol:(id)a0;
- (id)debugDescription;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)URL;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)SDKVersion;
- (id)_loadRealRecord;
- (id)accentColorName;
- (id)managedPersonas;
- (id)UIBackgroundModes;
- (id)WKBackgroundModes;
- (id)_personasWithAttributes;
- (id)applicationIdentifier;
- (id)associatedPersonas;
- (id)awakeAfterUsingCoder:(id)a0;
- (id)bundleIdentifier;
- (Class)classForKeyedArchiver;
- (id)dataContainerURL;
- (void)detach;
- (char)developerType;
- (id)entitlements;
- (id)executableURL;
- (id)intentDefinitionURLs;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (BOOL)isFreeProfileValidated;
- (BOOL)isProfileValidated;
- (BOOL)isUPPValidated;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)a0;
- (id)localizedShortName;
- (id)localizedShortNameWithPreferredLocalizations:(id)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)a0 preferredLocalizations:(id)a1;
- (id)machOUUIDs;
- (unsigned int)platform;
- (id)replacementObjectForCoder:(id)a0;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)serviceRecords;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)supportedIntentMediaCategories;
- (id)supportedIntents;
- (BOOL)supportsNowPlaying;
- (id)teamIdentifier;
- (BOOL)wasBuiltWithThreadSanitizer;

@end
