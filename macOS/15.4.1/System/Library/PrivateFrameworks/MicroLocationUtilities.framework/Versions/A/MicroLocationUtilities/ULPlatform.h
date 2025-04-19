@interface ULPlatform : NSObject

+ (BOOL)isInternalInstall;
+ (id)buildVersion;
+ (BOOL)isMac;
+ (BOOL)isIpad;
+ (BOOL)isIphone;
+ (BOOL)isMacBook;
+ (BOOL)isLimitedMiloUsagePlatform;
+ (BOOL)isRunningInXCTestEnvironment;
+ (id)platformInfo;
+ (id)_mobileGestaltAnswerForQuestion:(struct __CFString { } *)a0;
+ (BOOL)isIpod;

@end
