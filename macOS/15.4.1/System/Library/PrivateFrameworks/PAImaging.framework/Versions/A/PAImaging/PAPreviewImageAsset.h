@class NUComposition;

@interface PAPreviewImageAsset : PAImageAsset {
    NUComposition *_composition;
    long long _updateNumber;
    struct { long long renderOrientation; long long displayOrientation; } _orientation;
}

- (void).cxx_destruct;
- (long long)previewOrientation;
- (long long)_imageOrientation;
- (struct CGSize { double x0; double x1; })previewSize;
- (void)assetDidChange:(id)a0;
- (void)_addImageAssetClient:(id)a0;
- (void)_loadComposition;
- (void)_notifyClientsRenderNeeded:(id)a0 orientation:(struct { long long x0; long long x1; })a1 updateNumber:(long long)a2 isInteractive:(BOOL)a3;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })_originalImageSize;
- (void)_resolveSource:(id)a0 completion:(id /* block */)a1;
- (id)compositionForFullSizeOutput:(id)a0 uti:(id)a1 size:(struct CGSize { double x0; double x1; })a2 orientation:(long long)a3;

@end
