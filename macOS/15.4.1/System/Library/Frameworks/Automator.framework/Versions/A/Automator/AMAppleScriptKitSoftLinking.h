@interface AMAppleScriptKitSoftLinking : NSObject

+ (BOOL)isLinked;
+ (void *)framework;
+ (Class)ASKDebuggerSupport;
+ (Class)ASKScript;
+ (Class)ASKNibObjectInfoManager;
+ (Class)ASKScriptCache;
+ (void)softLink;

@end
