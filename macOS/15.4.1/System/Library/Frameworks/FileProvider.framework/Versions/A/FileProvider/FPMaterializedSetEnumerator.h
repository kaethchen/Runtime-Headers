@class NSString, NSFileProviderManager;

@interface FPMaterializedSetEnumerator : NSObject <NSFileProviderEnumerator> {
    NSFileProviderManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithManager:(id)a0;
- (void)currentSyncAnchorWithCompletionHandler:(id /* block */)a0;
- (void)enumerateChangesForObserver:(id)a0 fromSyncAnchor:(id)a1;
- (void)enumerateItemsForObserver:(id)a0 startingAtPage:(id)a1;

@end
