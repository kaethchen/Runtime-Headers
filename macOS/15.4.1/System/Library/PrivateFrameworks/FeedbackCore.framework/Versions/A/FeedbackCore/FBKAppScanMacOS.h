@interface FBKAppScanMacOS : NSObject

+ (id)_allAppURLs;
+ (id)allInstalledApps;
+ (id)denyListedApps;
+ (id)thirdPartyInstalledApps;
+ (id)thirdPartyInstalledAppsFromAppsList:(id)a0;

@end
