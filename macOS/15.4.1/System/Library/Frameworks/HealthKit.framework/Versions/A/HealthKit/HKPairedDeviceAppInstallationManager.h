@interface HKPairedDeviceAppInstallationManager : HKWatchAppInstallationManager {
    id _pairedDeviceRegistry;
}

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)startObserving;
- (void)stopObserving;
- (void)_watchAppInstallStateDidChange:(id)a0;
- (id)handleErrorWithAppConduitFetch:(id)a0 errorOut:(id *)a1;
- (id)initWithBundleIdentifier:(id)a0 forPairedDeviceRegistry:(id)a1;
- (id)isWatchAppInstalledWithError:(id *)a0;

@end
