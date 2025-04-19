@class NSSet, NSString;

@interface _EXDefaults : NSObject

@property (readonly) BOOL implementsNSExtension;
@property (readonly) BOOL queryPredicatesEvaluatedOutOfProcess;
@property (readonly) BOOL useLSDExtensionKitServiceForDiscovery;
@property (readonly) BOOL preferInProcessDiscovery;
@property (readonly) BOOL inProcessLaunch;
@property (readonly) BOOL useItemProviderXPCConnection;
@property (readonly) BOOL appleInternal;
@property (readonly) BOOL allowsAppleInternalComponents;
@property (readonly) BOOL supportExtensionKitConfigPath;
@property (readonly) BOOL hostRequiresEntitlements;
@property (readonly) BOOL enforceLegacyExtensionPointAllowList;
@property (readonly) BOOL allowSimulatedJetsam;
@property (readonly) BOOL allowPrototypeAPI;
@property (readonly) BOOL allowPrototypeSPI;
@property (readonly) BOOL assertOnDisallowedPrototypeAPIUse;
@property (readonly) BOOL assertOnDisallowedPrototypeSPIUse;
@property (readonly) BOOL startUIHostingSessionImmediately;
@property (readonly) BOOL enforceXPCCacheCodeSigning;
@property (readonly) NSSet *errorTypes;
@property (readonly) NSSet *plistTypes;
@property (readonly) NSSet *plistAndValueTypes;
@property (readonly) NSSet *extensionItemTypes;
@property (readonly) NSSet *itemProviderTypes;
@property (readonly) NSSet *imageTypes;
@property (readonly) NSSet *alwaysEnabledExtensionBundleIdentifiers;
@property (readonly) NSString *defaultSandboxProfileName;
@property (readonly) BOOL forceSandbox;
@property (readonly) NSSet *allowedUnsandboxedExtensionPoints;
@property (readonly) BOOL platformShouldExhibitEmbeddedBehavior;
@property (readonly) BOOL disableLaunchdCheckinTimeout;
@property (readonly) BOOL queryAllowsDuplicates;

+ (id)sharedInstance;

- (id)_init;
- (id)imageTypes;
- (BOOL)inProcessLaunch;
- (BOOL)allowPrototypeAPI;
- (BOOL)allowPrototypeSPI;
- (BOOL)allowSimulatedJetsam;
- (id)allowedUnsandboxedExtensionPoints;
- (BOOL)allowsAppleInternalComponents;
- (id)alwaysEnabledExtensionBundleIdentifiers;
- (BOOL)assertOnDisallowedPrototypeAPIUse;
- (BOOL)assertOnDisallowedPrototypeSPIUse;
- (id)defaultSandboxProfileName;
- (BOOL)disableLaunchdCheckinTimeout;
- (BOOL)enforceLegacyExtensionPointAllowList;
- (BOOL)enforceXPCCacheCodeSigning;
- (id)errorTypes;
- (id)extensionItemTypes;
- (BOOL)forceSandbox;
- (BOOL)hostRequiresEntitlements;
- (BOOL)implementsNSExtension;
- (id)itemProviderTypes;
- (BOOL)platformShouldExhibitEmbeddedBehavior;
- (id)plistAndValueTypes;
- (id)plistTypes;
- (BOOL)queryAllowsDuplicates;
- (BOOL)startUIHostingSessionImmediately;
- (BOOL)supportExtensionKitConfigPath;

@end
