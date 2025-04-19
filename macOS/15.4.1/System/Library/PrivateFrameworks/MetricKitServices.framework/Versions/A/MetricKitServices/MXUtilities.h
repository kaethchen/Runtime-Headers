@interface MXUtilities : NSObject

+ (id)modelIdentifier;
+ (id)osVersion;
+ (id)containerPath;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)platformArchitecture;
+ (id)regionFormat;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesAllowlist;

@end
