@interface IRPlatformInfo : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isSupportedPlatform;
+ (BOOL)isTVOS;
+ (BOOL)isIOS;
+ (BOOL)isRunningInUnitTesting;

@end
