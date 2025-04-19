@class NSMapTable, NSMutableDictionary, NSMutableSet, NSHashTable;

@interface PXLoadingStatusManager : NSObject {
    NSHashTable *_observers;
}

@property (class, readonly) PXLoadingStatusManager *defaultManager;

@property (nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled;
@property (readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItemIdentifiers;
@property (readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItemIdentifier;
@property (readonly, nonatomic) NSMapTable *_loadingStatusByItemIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_itemIdentifierByLoadOperationTrackingID;
@property (readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)loadingStatusForItemIdentifier:(id)a0;
- (void)didCancelLoadOperationWithTrackingID:(id)a0;
- (void)didCompleteLoadOperationWithTrackingID:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)didUpdateLoadOperationWithTrackingID:(id)a0 withProgress:(double)a1;
- (id)willBeginLoadOperationWithItemIdentifier:(id)a0;
- (void)_didUpdateLoadOperationWithTrackingID:(id)a0 withProgress:(double)a1 indeterminate:(BOOL)a2;
- (void)_invalidateLoadingStatusForItemIdentifier:(id)a0;
- (void)_resetLoadingStatusForItemIdentifierIfAppropriate:(id)a0;
- (void)_setLoadingStatus:(id)a0 forItemIdentifier:(id)a1;
- (void)_setLoadingStatus:(id)a0 forLoadOperationTrackingID:(id)a1;
- (void)_updateLoadingStatusForItemIdentifier:(id)a0;
- (void)_updateLoadingStatusForItemIdentifierIfNeeded:(id)a0;
- (void)_updateLoadingStatusForItemIdentifiersIfNeeded;
- (void)_updateNowIfNeeded;
- (void)didUpdateLoadOperationWithIndeterminateProgressWithTrackingID:(id)a0;

@end
