@class NSString, NSMutableDictionary, _WKVisitedLinkStore;
@protocol WBSHistoryConnectionProxy, HistoryDelegate;

@interface History : WBSHistory <WBSHistoryLoaderDelegate> {
    NSMutableDictionary *_lastImportedVisitDatesByBrowserBundleIdentifier;
    id<WBSHistoryConnectionProxy> _connectionProxy;
}

@property (class, readonly) double ageLimitInterval;

@property (readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;
@property (weak, nonatomic) id<HistoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (id)sharedHistory;
+ (void)setIsStringForUserTypedDomainExpansionInHistoryFunction;
+ (void)setShouldCheckIntegrityOnOpen:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_setVisitedLinkTrackingEnabled:(BOOL)a0;
- (void)_removeAllVisitedLinks;
- (id)itemForURL:(id)a0;
- (id)itemForURLString:(id)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void)_addVisitedLinksForItemsIfNeeded:(id)a0;
- (id)_createHistoryStore;
- (Class)_historyItemClass;
- (void)_loadHistoryWithCompletionHandler:(id /* block */)a0;
- (id)_removeItemForURLString:(id)a0;
- (void)clearHistory;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)enumerateItemsAsynchronouslyUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)historyLoaderDidFinishLoading:(id)a0;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)a0;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (BOOL)historyStoreShouldScheduleMaintenance:(id)a0;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 origin:(long long)a6 attributes:(unsigned long long)a7;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 statusCode:(long long)a6 origin:(long long)a7 attributes:(unsigned long long)a8;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(id /* block */)a0;
- (id)dateOfLatestImportedVisitForBundleIdentifier:(id)a0;
- (id)initWithDatabaseID:(id)a0 serviceConnectionProxy:(id)a1;
- (id)insertImportedVisitWithURLString:(id)a0 title:(id)a1 onDate:(id)a2 sourceBrowser:(id)a3;
- (void)populateVisitedLinkStore:(id)a0;
- (BOOL)shouldOmitURLString:(id)a0;
- (void)updateHistoryAgeLimitFromPreferences;

@end
