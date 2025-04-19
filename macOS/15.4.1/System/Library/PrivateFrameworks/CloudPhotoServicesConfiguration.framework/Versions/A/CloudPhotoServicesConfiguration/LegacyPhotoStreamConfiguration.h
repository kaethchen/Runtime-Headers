@interface LegacyPhotoStreamConfiguration : NSObject

+ (id)configuration;
+ (void)setConfiguration:(id)a0;
+ (BOOL)hasUnimportedAssets;
+ (BOOL)applyStateChangeMap:(id)a0 forAppleID:(id)a1;
+ (void)enablePhotostreamAgentLoginItem;
+ (id)applicationBundleVersionForIdentifier:(id)a0;
+ (BOOL)applyStateChangeRequest:(id)a0 forAppleID:(id)a1;
+ (struct __CFString { } *)configurationAppId;
+ (BOOL)currentProcessIsLegacyPhotoApplication;
+ (void)disableLegacyPhotoApplicationCloudPhotoServices;
+ (void)disablePhotostreamAgentLoginItem;
+ (void)disablePhotostreamAgentLoginItemAtURL:(id)a0;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)a0 minimumVersion:(id)a1;
+ (BOOL)hasApplicationWithBundleIdentifier:(id)a0 versionLowerThanVersion:(id)a1;
+ (id)importStatusInformation;
+ (id)installedCompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (id)installedIncompatibleLegacyPhotoApplicationBundleIdentifiers;
+ (BOOL)isMyPhotoStreamEnabled;
+ (BOOL)isMyPhotoStreamEnabledInSettings:(id)a0;
+ (BOOL)isSharedPhotoStreamEnabled;
+ (BOOL)isSharedPhotoStreamEnabledInSettings:(id)a0;
+ (id)legacyStatusInformationWithStatusInformation:(id)a0;
+ (id)photoStreamAgentLoginItemURLForHostApplicationURL:(id)a0;
+ (id)photoStreamAgentURL;
+ (id)rawLegacyServiceConfiguration;
+ (BOOL)setLegacyPhotoStreamStateForAppleID:(id)a0 options:(id)a1;
+ (id)streamLibraryIdentifier;
+ (id)versionStringForBundleAtURL:(id)a0;

@end
