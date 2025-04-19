@class _ATXAppIconState, NSSet, ATXHistogramBundleIdTable, NSDictionary, NSObject, ATXWebClipDataStore, _ATXAppInfoManager;
@protocol OS_dispatch_queue;

@interface _ATXAppInstallMonitor : NSObject {
    _ATXAppInfoManager *_appInfoManager;
    ATXWebClipDataStore *_webClipDataStore;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
    _ATXAppIconState *_appIconState;
    NSDictionary *_assetData;
    NSObject<OS_dispatch_queue> *_installQueue;
    id /* block */ _updateCompletionBlock;
}

@property (retain, nonatomic) NSSet *preInstalledNewSystemApps;

+ (id)appDirectoryAppCategoryMappings;
+ (id)appInfoDictWithBackDate:(BOOL)a0 assetData:(id)a1 newPreInstalledAppSet:(id)a2 isFromNotification:(BOOL)a3 newApps:(id)a4;
+ (id)newPreInstalledAppSet;
+ (id)removeIntersectionBetweenSet:(id)a0 set:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)train;
- (void)setUpdateCompletionBlock:(id /* block */)a0;
- (BOOL)restoreInProgress;
- (id)_appInfoDictWithBackDate:(BOOL)a0 isFromNotification:(BOOL)a1 newApps:(id)a2;
- (id)_fetchAllApps;
- (id)_fetchAllAppsFromDatastore;
- (id)_fetchAllAppsWithInstallDateFromDatastore;
- (void)_receivedInstallNotificationWithApps:(id)a0 placeholderInstallNotification:(BOOL)a1;
- (void)_receivedUninstallNotificationWithApps:(id)a0 placeholderUninstallNotification:(BOOL)a1;
- (void)handleInstallationOfApps:(id)a0 isFromNotification:(BOOL)a1 andBackdate:(BOOL)a2;
- (void)handleUninstallationOfApps:(id)a0;
- (id)initWithAppInfoManager:(id)a0;
- (id)initWithAppInfoManager:(id)a0 histogramBundleIdTable:(id)a1 appIconState:(id)a2 webClipDataStore:(id)a3 shouldSynchronousUpdate:(BOOL)a4;
- (id)initWithAppInfoManager:(id)a0 shouldSynchronousUpdate:(BOOL)a1;
- (void)noSyncUpdateWithWaitTime:(unsigned long long)a0 andBackdate:(BOOL)a1;
- (void)notifyInstallationOfAppsWithInstallDictionary:(id)a0;
- (void)notifyUninstallationOfAppsWithBundleIdsToRemoveSet:(id)a0;
- (void)receivedInstallNotification:(id)a0;
- (void)receivedStateChangeNotification:(id)a0;
- (void)receivedUninstallNotification:(id)a0;
- (void)synchronousUpdateAndBackdate:(BOOL)a0;
- (void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)a0 andBackdate:(BOOL)a1;
- (id)webClipsForRemovedApps:(id)a0;

@end
