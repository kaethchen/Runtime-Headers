@interface BRRuntimeBehavior : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isRunningInDaemonBundle;
+ (BOOL)isRunningOnIOS;
+ (BOOL)isRunningOnMacOS;
+ (BOOL)isSeedBuild;

@end
