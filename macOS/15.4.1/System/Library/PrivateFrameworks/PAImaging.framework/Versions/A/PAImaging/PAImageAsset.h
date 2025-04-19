@class PAImageAssetType, NSString, NSArray, PHAsset, PAImageType, NSObject;
@protocol OS_dispatch_queue;

@interface PAImageAsset : NSObject <PAItemRenderDescriptionObserver> {
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    struct { struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; long long orientation; } _geometry;
    long long _geometryStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) PHAsset *asset;
@property (retain) NSArray *assetClients;
@property (readonly, nonatomic) PAImageAssetType *assetType;
@property (readonly, nonatomic) PAImageType *imageType;
@property (copy) id /* block */ compositionReplacedFilter;

+ (id)imageAssetWithType:(id)a0 asset:(id)a1;

- (void).cxx_destruct;
- (void)assetDidChange:(id)a0;
- (void)_addImageAssetClient:(id)a0;
- (void)_foreachAssetClient:(id /* block */)a0;
- (struct { struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x0; long long x1; })_handleAdjustmentOrientation:(long long)a0 status:(long long)a1;
- (void)_loadAdjustmentDataIfReady;
- (id)_mostImportantAssetClient;
- (void)_notifyGeometryChanged:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 updateNumber:(long long)a2;
- (BOOL)_removeImageAssetClient:(id)a0;
- (void)_validateImageGeometry:(BOOL)a0;
- (void)_validatedImageGeometry:(id /* block */)a0;
- (void)addImageAssetClient:(id)a0;
- (void)compositionBeginInteractive:(id)a0;
- (void)compositionChanged:(id)a0 key:(id)a1;
- (void)compositionEndInteractive:(id)a0;
- (void)compositionReplaced:(id)a0;
- (void)forEachAssetClient:(id /* block */)a0;
- (struct { struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x0; long long x1; })handleAdjustmentOrientation:(long long)a0;
- (id)initWithType:(id)a0 asset:(id)a1;
- (void)loadAdjustmentOrientation:(id /* block */)a0;
- (BOOL)removeImageAssetClient:(id)a0;
- (struct { long long x0; long long x1; })sourceOrientationForAsset:(id)a0 adjustmentOrientation:(long long)a1 rasterToDisplayOrientation:(long long)a2;

@end
