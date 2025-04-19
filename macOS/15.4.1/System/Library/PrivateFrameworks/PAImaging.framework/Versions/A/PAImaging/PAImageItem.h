@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PAImageItem : PAItem <PAItemRenderDescriptionObserver> {
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSMutableDictionary *_assets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)assets;
- (void)assetDidChange:(id)a0;
- (id)_assetForAssetType:(id)a0 canCreate:(BOOL)a1;
- (void)_beginChange;
- (void)_endChange;
- (void)_forwardChangeToAllAdjustmentObservers:(id /* block */)a0;
- (void)compositionBeginInteractive:(id)a0;
- (void)compositionChanged:(id)a0 key:(id)a1;
- (void)compositionEndInteractive:(id)a0;
- (void)compositionReplaced:(id)a0;
- (BOOL)registerImageAssetClient:(id)a0 assetType:(id)a1 cacheOnly:(BOOL)a2;
- (void)unregisterImageAssetClient:(id)a0 assetType:(id)a1;

@end
