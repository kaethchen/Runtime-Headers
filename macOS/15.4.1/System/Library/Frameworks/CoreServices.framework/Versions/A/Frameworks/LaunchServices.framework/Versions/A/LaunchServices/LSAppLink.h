@class LSApplicationRecord, NSDictionary, NSURL, LSApplicationProxy;

@interface LSAppLink : NSObject <NSSecureCoding>

@property (class, readonly) BOOL currentProcessHasReadAccess;
@property (class, readonly) BOOL currentProcessHasWriteAccess;
@property (class, readonly, nonatomic, getter=areEnabledByDefault) BOOL enabledByDefault;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *browserSettings;
@property long long openStrategy;
@property (copy) NSURL *URL;
@property (retain) LSApplicationRecord *targetApplicationRecord;
@property (readonly) LSApplicationProxy *targetApplicationProxy;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (BOOL)URLComponentsAreValidForAppLinks:(id)a0 error:(id *)a1;
+ (BOOL)_URLIsValidForAppLinks:(id)a0 error:(id *)a1;
+ (id)_appLinkWithURL:(id)a0 applicationRecord:(id)a1 plugInClass:(Class)a2;
+ (id)_appLinksWithState:(id)a0 context:(struct LSContext { id x0; } *)a1 limit:(unsigned long long)a2 URLComponents:(id)a3 error:(id *)a4;
+ (id)_appLinksWithState:(id)a0 context:(struct LSContext { id x0; } *)a1 limit:(unsigned long long)a2 error:(id *)a3;
+ (id)_dispatchQueue;
+ (void)_openAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (void)_openWithAppLink:(id)a0 state:(id)a1 completionHandler:(id /* block */)a2;
+ (void)afterAppLinksBecomeAvailableForURL:(id)a0 limit:(unsigned long long)a1 performBlock:(id /* block */)a2;
+ (id)appLinksWithURL:(id)a0 limit:(unsigned long long)a1 error:(id *)a2;
+ (id)appLinksWithURL:(id)a0 limit:(unsigned long long)a1 includeLinksForCurrentApplication:(BOOL)a2 error:(id *)a3;
+ (BOOL)auditTokenHasReadAccess:(struct { unsigned int x0[8]; })a0;
+ (BOOL)auditTokenHasWriteAccess:(struct { unsigned int x0[8]; })a0;
+ (void)getAppLinkWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)getAppLinksWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)openWithURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)openWithURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)removeAllSettingsReturningError:(id *)a0;
+ (BOOL)setSettingsSwitchState:(long long)a0 forApplicationIdentifier:(id)a1 error:(id *)a2;
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)a0;

- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isAlwaysEnabled;
- (id)_appleEventWithState:(id)a0 preserveReferrerURL:(BOOL)a1 error:(id *)a2;
- (id)_userActivityWithState:(id)a0 error:(id *)a1;
- (void)openInWebBrowser:(BOOL)a0 setAppropriateOpenStrategyAndWebBrowserState:(id)a1 completionHandler:(id /* block */)a2;
- (void)openInWebBrowser:(BOOL)a0 setOpenStrategy:(long long)a1 webBrowserState:(id)a2 completionHandler:(id /* block */)a3;
- (void)openInWebBrowser:(BOOL)a0 setOpenStrategy:(long long)a1 webBrowserState:(id)a2 configuration:(id)a3 completionHandler:(id /* block */)a4;
- (long long)openStrategy;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void)openWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeSettingsReturningError:(id *)a0;
- (BOOL)setBrowserSettings:(id)a0 error:(id *)a1;
- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;
- (void)setOpenStrategy:(long long)a0;

@end
