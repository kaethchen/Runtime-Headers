@interface LCFModelStoreUtils : NSObject

+ (BOOL)isSupportedPlatform;
+ (id)getBaseLocalPath;
+ (BOOL)isPlatformMacOS;
+ (BOOL)isEnabledOnMacOS;
+ (BOOL)isPlatformWatchOS;
+ (BOOL)isPlatformiOS;
+ (BOOL)isPlatformtvOS;
+ (void)SwitchToMobile;
+ (id)sha256For:(id)a0;
+ (id)sha256ForURL:(id)a0;

@end
