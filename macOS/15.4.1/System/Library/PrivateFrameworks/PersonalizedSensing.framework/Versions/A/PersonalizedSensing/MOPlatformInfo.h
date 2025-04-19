@interface MOPlatformInfo : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isSeedBuild;
+ (id)getBuildVersion;
+ (id)getProductType;
+ (id)getProductVersion;
+ (BOOL)isIpad;
+ (id)extractHardwareAndSoftwareMetadata;
+ (unsigned long long)generativeModelsAvailabilityStatus;
+ (id)getHWModel;
+ (void)persistBuildVersion;
+ (BOOL)wasBuildVersionUpdated;

@end
