@interface BMDeviceMetadataUtils : NSObject

+ (long long)platform;
+ (id)osBuildVersion;
+ (BOOL)currentlyInGameMode;
+ (id)osBuildSupplementalVersion;

@end
