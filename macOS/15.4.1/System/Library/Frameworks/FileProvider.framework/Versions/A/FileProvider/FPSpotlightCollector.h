@class NSDate, NSMutableDictionary, NSMapTable, NSMutableSet, FPSpotlightQueryDescriptor, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, FPSpotlightCollectorDelegate;

@interface FPSpotlightCollector : NSObject {
    NSMutableDictionary *_itemsByBundleAndCSID;
    NSMutableDictionary *_itemsByProviderAndCollaborationIdentifier;
    BOOL _suspended;
    unsigned long long _numberOfRecoveryAttempts;
    NSDate *_lastStartOfRecovery;
    NSMapTable *_queryToMountPoint;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) NSMutableArray *queries;
@property (nonatomic, getter=isGathering) BOOL gathering;
@property (nonatomic) unsigned long long itemsOrigin;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (weak, nonatomic) id<FPSpotlightCollectorDelegate> delegate;
@property (readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor;

+ (id)_recursiveDescription;
+ (id)processingQueue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)suspend;
- (void)_removeObserver:(id)a0;
- (id)initWithDescriptor:(id)a0;
- (id)allItems;
- (void)_start;
- (void)_stop;
- (void)_addObserver:(id)a0;
- (void)_clear;
- (id)allObservers;
- (BOOL)_shouldRemoveItemsFromObserver:(id)a0;
- (BOOL)_areItemsTransientFromBundleIdentifier:(id)a0;
- (id)_createQueriesForMountPoints:(id)a0;
- (id)_createQueryForMountPoint:(id)a0;
- (unsigned long long)_itemsOriginForItems:(id)a0;
- (id)_mountPointForExistingSearchQuery:(id)a0;
- (id)_mountPointsForDescriptor;
- (void)_regather;
- (BOOL)_shouldFilterUpdatesForObserver:(id)a0;
- (id)allItemsForObserver:(id)a0;
- (id)filterItems:(id)a0 forObserver:(id)a1 excludedItemIDs:(id *)a2;
- (BOOL)isQueryCancelled:(id)a0;
- (void)query:(id)a0 didFinishWithError:(id)a1;
- (void)query:(id)a0 didRemoveItemsWithCSIdentifiers:(id)a1 inBundle:(id)a2;
- (void)query:(id)a0 didUpdateItems:(id)a1;
- (void)queryDidFinishGathering:(id)a0;
- (void)setNeedsItemsOriginUpdate;

@end
