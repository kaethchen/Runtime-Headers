@class NSMutableDictionary, _ATXInternalUninstallNotification, _ATXInternalInstallNotification;

@interface _ATXRecentInstallCache : NSObject {
    double _ttl;
    _ATXInternalInstallNotification *_installNotificationMonitor;
    _ATXInternalUninstallNotification *_uninstallNotificationMonitor;
    NSMutableDictionary *_recentInstallations;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initTrackingAppsMoreRecentThan:(double)a0;
- (id)initTrackingAppsMoreRecentThan:(double)a0 installMonitor:(id)a1 uninstallMonitor:(id)a2;
- (id)_allRecentlyInstalledApplicationsAfterExpirationDate:(id)a0;
- (id)_getRecentInstallationsMap;
- (void)_notifiedOfInstalls:(id)a0;
- (void)_notifiedOfUninstalls:(id)a0;
- (id)allRecentlyInstalledApplications;

@end
