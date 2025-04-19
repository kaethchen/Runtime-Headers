@interface _WKAttributedStringWebViewCache : NSObject

+ (id)configuration;
+ (id)cache;
+ (void)resetPurgeDelay;
+ (void)cacheWebView:(id)a0;
+ (void)clearConfiguration;
+ (void)clearConfigurationAndRaiseExceptionIfNecessary:(id)a0;
+ (void)invalidateGlobalConfigurationIfNeeded:(id)a0;
+ (void)maybeConsumeBundlePaths:(id)a0;
+ (void)maybeUpdateShouldAllowNetworkLoads:(id)a0;
+ (void)maybeUpdateSourceApplicationBundleIdentifier:(id)a0;
+ (void)purgeAllWebViews;
+ (void)purgeSingleWebView;
+ (struct RetainPtr<WKWebView> { void *x0; })retrieveOrCreateWebView;
+ (void)validateEntry:(id)a0;

@end
