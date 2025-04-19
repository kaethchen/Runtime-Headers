@class PHAssetResourceRequestOptions, PHAssetResourceManager, NSString, PHAsset, _PXNSPhotoKitImageProviderOperation;

@interface PXNSPhotoKitImageProvider : PXNSImageProvider <PXChangeObserver>

@property (nonatomic, setter=_setResourceRequestID:) int _resourceRequestID;
@property (nonatomic, setter=_setLastRequestedTargetSize:) struct CGSize { double width; double height; } _lastRequestedTargetSize;
@property (nonatomic, setter=_setShouldPrepareImage:) BOOL _shouldPrepareImage;
@property (retain, nonatomic, setter=_setCurrentOperation:) _PXNSPhotoKitImageProviderOperation *_currentOperation;
@property (readonly, nonatomic) PHAssetResourceManager *assetResourceManager;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) long long contentMode;
@property (readonly, copy, nonatomic) PHAssetResourceRequestOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)cancelPreparation;
- (void)_cancelCurrentRequest;
- (void)_requestNewImageIfNeeded;
- (void)_targetSizeDidChange;
- (id)initWithAssetResourceManager:(id)a0 asset:(id)a1 contentMode:(long long)a2 options:(id)a3;
- (void)prepareToProvideImage;

@end
