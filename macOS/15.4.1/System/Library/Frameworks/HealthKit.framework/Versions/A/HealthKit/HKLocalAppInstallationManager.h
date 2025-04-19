@interface HKLocalAppInstallationManager : HKWatchAppInstallationManager

- (id)initWithBundleIdentifier:(id)a0;
- (void)startObserving;
- (void)stopObserving;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
