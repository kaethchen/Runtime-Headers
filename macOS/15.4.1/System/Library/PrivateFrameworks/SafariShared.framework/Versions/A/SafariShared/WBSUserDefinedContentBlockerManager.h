@class NSArray, WBSUserDefinedContentBlockerSQLiteStore, NSMutableSet, NSHashTable;

@interface WBSUserDefinedContentBlockerManager : NSObject {
    WBSUserDefinedContentBlockerSQLiteStore *_dataStore;
    NSMutableSet *_hostsWithLoadedPerSiteContentBlockers;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL didLoadGlobalContentBlockerActions;
@property (readonly, nonatomic) BOOL hasContentBlockerWithActions;
@property (readonly, nonatomic) NSArray *cachedGlobalContentBlockerActions;

- (void).cxx_destruct;
- (id)initWithDataStore:(id)a0;
- (void)deleteActionsForContentBlocker:(id)a0;
- (id)_identifierStringForContentBlocker:(id)a0;
- (id)_jsonStringForActionType:(id)a0 urlFilter:(id)a1 selectors:(id)a2;
- (void)_notifyDidUpdateAllRules;
- (void)_regenerateCachedGlobalContentBlockerActionsFromDatabase;
- (id)_rulesJsonForContentBlocker:(id)a0;
- (void)_setCachedGlobalContentBlockerActions:(id)a0;
- (void)addActions:(id)a0 forContentBlocker:(id)a1;
- (void)addUserDefinedContentBlockerObserver:(id)a0;
- (void)contentBlockerForHost:(id)a0 createIfNeeded:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteActions:(id)a0;
- (void)getAllContentBlockerActionsWithType:(id)a0 excludeHost:(id)a1 isGlobal:(BOOL)a2 completion:(id /* block */)a3;
- (void)getAllContentBlockerHostsWithCompletionHandler:(id /* block */)a0;
- (void)getGlobalContentBlockerWithCompletionHandler:(id /* block */)a0;
- (void)getNumberOfContentBlockersThatContainActionsWithCompletionHandler:(id /* block */)a0;
- (void)globalContentBlockerWithCompletionHandler:(id /* block */)a0;
- (void)loadContentBlockerIfNeededForHost:(id)a0 loaderBlock:(id /* block */)a1;
- (void)removeUserDefinedContentBlockerObserver:(id)a0;
- (void)resetDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)resetLoadingStateOfContentBlockerForHost:(id)a0;
- (void)updateContentBlockerActionExtraAttributes:(id)a0;

@end
