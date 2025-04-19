@class SEMSettings, NSURL, SEMIndexSiteCache, SEMDictionaryLog, NSObject;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface SEMIndexSiteManager : NSObject {
    NSURL *_managerDirectory;
    NSObject<CCSetEnumerator> *_setEnumerator;
    NSObject<OS_dispatch_queue> *_queue;
    SEMDictionaryLog *_managerInfo;
    SEMIndexSiteCache *_indexSiteCache;
    SEMSettings *_settings;
}

- (void).cxx_destruct;
- (BOOL)_performMaintenance:(id /* block */)a0;
- (BOOL)performMaintenance:(id /* block */)a0;
- (BOOL)clearAllState;
- (BOOL)handleSettingsChange;
- (void)handleSysdiagnoseStarted;
- (BOOL)handleUpdatedSets:(id)a0;
- (BOOL)_updateContainsSetsInUserVault:(id)a0;
- (id)initWithManagerDirectory:(id)a0 indexSiteCache:(id)a1 setEnumerator:(id)a2 settings:(id)a3;
- (id)_cachedWriterForIndexSiteType:(unsigned char)a0;
- (unsigned char)_checkForDeferredOperationAtIndexSite:(id)a0;
- (BOOL)_checkLastDateOfOperation:(unsigned char)a0 isOverdue:(BOOL *)a1 atSite:(id)a2;
- (BOOL)_didHandleUpdatedSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_didRefreshSettings:(id /* block */)a0 skipMaintenance:(BOOL *)a1;
- (id)_discoverAllSetsForIndexSiteType:(unsigned char)a0;
- (BOOL)_enumerateAllIndexSiteWritersUsingBlock:(id /* block */)a0;
- (BOOL)_loadManagerDirectoryAndAvailableIndexSites;
- (void)_loadOrCreateManagerInfo;
- (BOOL)_performAnyDeferredOperationsAtIndexSite:(id)a0 outOperationPerformed:(unsigned char *)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_performAnyDeferredOperationsAtIndexSiteType:(unsigned char)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_performOperation:(unsigned char)a0 atIndexSite:(id)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_performOperation:(unsigned char)a0 atIndexSite:(id)a1 withDate:(id)a2 shouldDefer:(id /* block */)a3;
- (BOOL)_performOperationAtAllIndexSites:(unsigned char)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_rebuildAllStateWithSetEnumerator:(id)a0;
- (void)_recordOperationTriggered:(unsigned char)a0 withDate:(id)a1;
- (BOOL)_resetManagerDirectory;
- (BOOL)_updateIndexSiteType:(unsigned char)a0 updatedSets:(id)a1 shouldDefer:(id /* block */)a2;
- (BOOL)handleIndexSiteAvailableWithType:(unsigned char)a0 shouldDefer:(id /* block */)a1;
- (BOOL)rebuildAllStateWithSetEnumerator:(id)a0;

@end
