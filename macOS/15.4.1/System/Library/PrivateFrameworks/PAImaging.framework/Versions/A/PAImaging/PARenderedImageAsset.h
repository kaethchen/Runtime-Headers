@class NUComposition;

@interface PARenderedImageAsset : PAImageAsset {
    long long _updateNumber;
    BOOL _isInteractive;
}

@property (retain) NUComposition *composition;

- (void).cxx_destruct;
- (long long)previewOrientation;
- (long long)_imageOrientation;
- (struct CGSize { double x0; double x1; })previewSize;
- (void)assetDidChange:(id)a0;
- (void)_compositionChanged:(id)a0;
- (void)_notifyClientsRenderNeeded:(id)a0 orientation:(struct { long long x0; long long x1; })a1 updateNumber:(long long)a2 isInteractive:(BOOL)a3;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })_originalImageSize;
- (void)addImageAssetClient:(id)a0;
- (void)compositionBeginInteractive:(id)a0;
- (void)compositionChanged:(id)a0 key:(id)a1;
- (void)compositionEndInteractive:(id)a0;
- (struct { long long x0; long long x1; })orientationForComposition:(id)a0;

@end
