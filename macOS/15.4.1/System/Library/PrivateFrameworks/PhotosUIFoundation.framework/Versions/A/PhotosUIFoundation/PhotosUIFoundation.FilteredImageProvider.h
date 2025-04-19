@interface PhotosUIFoundation.FilteredImageProvider : NSObject <PXUIImageProvider> {
    void /* unknown type, empty encoding */ unfilteredImageProvider;
    void /* unknown type, empty encoding */ filterPromise;
    void /* unknown type, empty encoding */ lockedState;
}

- (id)init;
- (void).cxx_destruct;
- (void)cancelImageRequest:(long long)a0;
- (long long)requestImageForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;

@end
