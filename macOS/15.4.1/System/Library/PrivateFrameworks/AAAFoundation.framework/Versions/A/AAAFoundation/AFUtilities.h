@interface AFUtilities : NSObject

+ (id)bundleIdentifier;
+ (id)bundleVersion;
+ (void)openApplicationWithBundleID:(id)a0;
+ (BOOL)isInternalBuild;
+ (void)openAppleIDPref;
+ (BOOL)openAppleIDPrefWithLaunchParameters:(id)a0;
+ (id)currentApplicationIdentifier;
+ (id)currentApplicationVersion;
+ (void)openNetworkPref;
+ (void)openSharingPref;
+ (void)launchPhotosApplication;
+ (void)launchSoftwareUpdate;
+ (void)openInternetAccountPref;
+ (void)openParentalControlPref;
+ (void)openSecurityPref;
+ (int)openSystemSettingsWithID:(id)a0 launchParameters:(id)a1;
+ (void)openUsersAndGroupsPref;
+ (BOOL)screenLockIsEnabled;
+ (id)urlForBundleIdentifier:(id)a0;
+ (int)_openApplicationWithBundleID:(id)a0;
+ (int)_openApplicationWithURL:(struct __CFURL { } *)a0;
+ (int)_openItemWithURL:(id)a0;
+ (int)_openItemWithURL:(id)a0 launchParameters:(id)a1;
+ (int)_openSystemSettingsWithID:(id)a0;
+ (void)openEnergySaverPref;

@end
