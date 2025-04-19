@class NSPointerArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CustomViewSnapshotCache : NSObject {
    NSObject<OS_dispatch_queue> *_snapshotRequestProcessingQueue;
    NSMutableDictionary *_snapshotProviderIdentifiersToThumbnailTypes;
    NSMutableDictionary *_thumbnailTypesToSnapshotProviderArrays;
    NSMutableDictionary *_thumbnailTypesToPendingRequestBlocks;
    NSMutableDictionary *_thumbnailTypesToCachedSnapshots;
    unsigned long long _disableSnapshottingCount;
    NSPointerArray *_updatesObservers;
}

- (id)init;
- (void).cxx_destruct;
- (void)_cleanUpScheduledRequestsForKey:(id)a0;
- (BOOL)_providerCanUseFastSnapshotPath:(id)a0;
- (void)_removeSnapshotProviderFromScheduledRequest:(id)a0;
- (void)_scheduleSnapshotRequestWithProvider:(id)a0 thumbnailViewType:(long long)a1 ifHasShownInWindowOnly:(BOOL)a2;
- (id)_takeSnapshotWithProvider:(id)a0 requireFastPath:(BOOL)a1 ifHasShownInWindowOnly:(BOOL)a2;
- (void)_updateSnapshotImage:(id)a0 forType:(long long)a1;
- (void)addSnapshotUpdatesObserver:(id)a0;
- (id)cachedSnapshotWithProvider:(id)a0;
- (void)cancelSnapshotRequestForProvider:(id)a0;
- (void)disableSnapshotting;
- (void)enableSnapshotting;
- (void)removeSnapshotUpdatesObserver:(id)a0;
- (void)takeSnapshotWithProvider:(id)a0 ifHasShownInWindowOnly:(BOOL)a1;

@end
