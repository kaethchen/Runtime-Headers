@interface _SFSandboxUtilities : NSObject

+ (id)normalizedUserTempDirectoryPath;
+ (BOOL)enableSandboxStyleFileQuarantine;
+ (id)normalizedHomeDirectory;
+ (id)normalizedUserCacheDirectoryPath;

@end
