@class _ATXInternalInstallNotification, NSArray, _ATXInternalUninstallNotification, NSDictionary, ATXHomeScreenConfigCache, NSObject, NSMutableIndexSet, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface _ATXAppIconState : NSObject {
    _ATXInternalInstallNotification *_installNotification;
    _ATXInternalUninstallNotification *_uninstallNotification;
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _homeScreenConfigCacheChangeDarwinNotificationObserver;
    int _homeScreenTodayPageConfigCacheChangeDarwinNotificationObserver;
    int _dockAppListChangeDarwinNotificationObserver;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    NSDictionary *_iconLocationByBundleId;
    unsigned long long _numHomeScreenPages;
    unsigned long long _numHomeScreenFolders;
    NSArray *_orderedVisiblePageIndices;
    NSMutableIndexSet *_pageIndicesWithAppPredictionPanels;
    NSMutableIndexSet *_pageIndicesWithSuggestionWidgets;
    _PASSimpleCoalescingTimer *_coalescedReloadOperation;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)numberOfPages;
- (void)_reload;
- (unsigned long long)numberOfFolders;
- (id)allAppsKnownToSpringBoard;
- (id)allDockedApps;
- (id)allFolderApps;
- (id)allInstalledAppsKnownToSpringBoard;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (long long)folderPageNumberForBundleId:(id)a0;
- (unsigned long long)getFirstVisiblePageIndex;
- (id)initWithHomeScreenConfigCache:(id)a0;
- (id)nonFolderAppSetOnPages;
- (unsigned long long)numberOfApps;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (id)springboardPageNumbersWithSuggestionsWidgets;

@end
