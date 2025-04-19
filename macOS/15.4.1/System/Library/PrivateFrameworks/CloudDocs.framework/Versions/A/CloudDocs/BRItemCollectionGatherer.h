@class NSMetadataQuery, NSString, NSData, NSPredicate, NSMutableDictionary, NSMutableSet, NSObject, BRWatchingConfiguration, br_pacer;
@protocol OS_dispatch_queue, BRItemCollectionGathererDelegate, NSObject;

@interface BRItemCollectionGatherer : NSObject <FPItemCollectionItemIDBasedDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemIDToItemCollectionMap;
    id<BRItemCollectionGathererDelegate> _delegate;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    BRWatchingConfiguration *_config;
    NSMutableSet *_watchedAppLibraryFPItemIDs;
    NSMutableSet *_waitingToBeGatheredCollections;
    NSMutableSet *_collectionsSet;
    NSMutableDictionary *_itemOwnersMap;
    BOOL _finishedInitialGathering;
    NSMutableSet *_boostedAppLibraries;
    NSMutableDictionary *_failureCountByItemID;
    NSData *_perAppAccountIdentifier;
    id<NSObject> _accountTokenDidChangeNotificationObserver;
    unsigned long long _appLibrariesLookupAttempts;
    BOOL _finishedLookingUpAppLibraries;
    br_pacer *_notificationPacer;
    NSMutableDictionary *_addedItems;
    NSMutableSet *_deletedItems;
    NSObject<OS_dispatch_queue> *_invalidateQueue;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)collection:(id)a0 didEncounterError:(id)a1;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (void)collectionDidFinishGathering:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)dataForCollectionShouldBeReloaded:(id)a0 deleteItemsWithIDs:(id)a1;
- (void)_removeCollectionFromGatherSet:(id)a0;
- (void)_boostAppLibraryOfItemIfNeeded:(id)a0;
- (unsigned long long)_itemID:(id)a0 wasDeletedByCollection:(id)a1;
- (void)_accountDidChangeNotificationBlock;
- (void)_addDeletedItems:(id)a0;
- (void)_addItemCollectionOnItem:(id)a0;
- (void)_addUpdatedItems:(id)a0;
- (BOOL)_buildCollectionOnItemIfPossible:(id)a0;
- (BOOL)_canWatchItem:(id)a0;
- (id)_getAppLibraryURLFromConfig:(id)a0;
- (id)_getDeletedItems;
- (id)_getUpdatedItems;
- (void)_invalidateAndNotifyDelegate:(BOOL)a0;
- (BOOL)_isItemOwnedByAnyCollection:(id)a0;
- (void)_itemCollectionGathererSendUpdates;
- (unsigned long long)_itemID:(id)a0 becameOwnedByCollection:(id)a1;
- (void)_queueSignalDelegateIfNeededOnFinishGathering;
- (BOOL)_shouldFilterEvaluatedItem:(id)a0 collectionRootItem:(id)a1;
- (BOOL)_signalDelegateIfNeededOnFinishGathering;
- (void)_startObservingAccountTokenDidChangeNotification;
- (void)_startWatchingAppLibraries:(id)a0;
- (void)_startWatchingNewSubItem:(id)a0;
- (void)_startWatchingRootItemWithConfig:(id)a0;
- (void)_startWatchingURLs:(id)a0;
- (void)_stopObeservingCollections;
- (void)_stopObservingAccountTokenDidChangeNotification;
- (void)_stopWatchingItemIDRecusively:(id)a0 itemIDsInItem:(id)a1;
- (void)_unboostApplibrariesIfNeeded;
- (id)initWithDelegate:(id)a0 query:(id)a1;
- (void)pauseWatchingWithCompletionBlock:(id /* block */)a0;
- (void)resumeWatching;
- (void)startWatchingRootItemWithScopes:(id)a0;
- (id)test_getInvalidateQueue;
- (id)test_getQueue;

@end
