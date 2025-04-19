@interface SUIUtilities : NSObject

+ (unsigned long long)deviceAuthenticationStateForView:(id)a0;
+ (BOOL)isAppIntentsSupportEnabled;
+ (void)prewarmVisionForImageDerivedColors;
+ (void)releaseVisionCachedResources;
+ (unsigned long long)stateForSearchUIAuthenticationState:(unsigned long long)a0;
+ (id)visionResourcesQueue;

@end
