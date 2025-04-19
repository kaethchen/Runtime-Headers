@class NSMutableDictionary;

@interface PAThumbnailImageAsset : PAImageAsset {
    NSMutableDictionary *_previewImagesByDevice;
}

- (id)init;
- (void).cxx_destruct;
- (long long)imageOrientation;
- (struct CGSize { double x0; double x1; })originalImageSize;
- (long long)_imageOrientation;
- (void)assetDidChange:(id)a0;
- (void)_notifyGeometryChanged:(struct CGSize { double x0; double x1; })a0 orientation:(long long)a1 updateNumber:(long long)a2;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })_originalImageSize;
- (void)_prepareImageForAssetClient:(id)a0;
- (id)_previewImageForDevice:(id)a0;
- (void)_setPreviewImage:(id)a0 forDevice:(id)a1;
- (void)assetClientIsReady:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageExtentWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 orientation:(long long)a2;
- (void)loadAndDeliverImageForAssetClient:(id)a0;
- (void)loadPreviewImageOfSize:(struct CGSize { double x0; double x1; })a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (id)newTexturePreviewImage:(id)a0 geometry:(struct { struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x0; long long x1; })a1 forDevice:(id)a2;
- (void)prepareImageForAssetClient:(id)a0;

@end
