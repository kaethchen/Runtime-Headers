@class NSUserDefaults, _ATXInternalUninstallNotification, ATXInternalAppRegistrationNotification;
@protocol ATXIntentMetadataCacheInvalidationDelegate;

@interface ATXIntentMetadataCacheInvalidationMonitor : NSObject {
    id<ATXIntentMetadataCacheInvalidationDelegate> _delegate;
    ATXInternalAppRegistrationNotification *_appRegistrationListener;
    _ATXInternalUninstallNotification *_appUninstallListener;
    NSUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (void)_checkForOSUpdate;
- (id)_getCurrentBuild;
- (void)_listenForAppRegistrationAndUninstall;
- (void)_notifyDelegateApplicationsDidUninstall:(id)a0;
- (void)_notifyDelegateApplicationsDidUpdate:(id)a0;
- (void)_notifyDelegateSystemDidUpdate;
- (void)setDelegateAndStartMonitoring:(id)a0;
- (void)setDelegateAndStartMonitoring:(id)a0 userDefaults:(id)a1;

@end
