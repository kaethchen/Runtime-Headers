@class NSDictionary;

@interface _LSExceptions : NSObject {
    NSDictionary *_additions;
    NSDictionary *_overrides;
    NSDictionary *_mergeDocumentTypes;
    NSDictionary *_capabilityOverrides;
}

@property (class, readonly) BOOL allowInternallyBlockedApps;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)invalidateSharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)version:(struct LSVersionNumber { unsigned char x0[32]; })a0 matchesOverrideVersion:(id)a1;
- (id)_init;
- (void)applyToInfoDictionary:(id)a0;
- (BOOL)claim:(id)a0 intersectsClaim:(id)a1;
- (id)exceptionsDictionary:(id)a0 forIdentifier:(id)a1;
- (unsigned int)launchOverrideFlagsWithBundleIdentifier:(id)a0 bundleVersion:(struct LSVersionNumber { unsigned char x0[32]; })a1 overrideDictionary:(id *)a2;
- (unsigned int)overrideFlagsForCapability:(const struct PrefsCapabilityInfo { long long x0; id x1; id x2; BOOL x3; BOOL x4; struct __CFString *x5; struct __CFString *x6; struct __CFString *x7; char *x8; } *)a0 withBundleIdentifier:(id)a1 bundleVersion:(struct LSVersionNumber { unsigned char x0[32]; })a2;
- (unsigned int)overrideFlagsForCapability:(const struct PrefsCapabilityInfo { long long x0; id x1; id x2; BOOL x3; BOOL x4; struct __CFString *x5; struct __CFString *x6; struct __CFString *x7; char *x8; } *)a0 withBundleIdentifier:(id)a1 bundleVersion:(struct LSVersionNumber { unsigned char x0[32]; })a2 overrideDictionary:(id *)a3;
- (BOOL)platformMatchesExceptionsDictionary:(id)a0;
- (void)replaceMasterDictionary:(id *)a0 settingNewValues:(id)a1;
- (id)validateJavaRequirementInAdditions:(id)a0 forInfoDictionary:(id)a1;

@end
