@protocol PXGImageRequestPerformer;

@interface PXGImageRequestQueue : NSObject {
    struct PXGImageRequest { unsigned int x0; int x1; void *x2; } *_requests;
    long long _capacity;
}

@property (nonatomic) long long count;
@property (weak, nonatomic) id<PXGImageRequestPerformer> imageRequestPerformer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_discardIndexes:(id)a0;
- (void)_removeAllRequests;
- (void)cancelTextureRequests:(id)a0;
- (void)enqueueRequestsWithSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 textureRequestIDs:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 displayAssetFetchResult:(id)a2 observer:(id)a3 presentationStyles:(unsigned long long)a4 targetSize:(struct CGSize { double x0; double x1; })a5 screenScale:(double)a6 screenMaxHeadroom:(double)a7 adjustment:(id)a8 intent:(unsigned long long)a9 useLowMemoryDecode:(BOOL)a10 applyCleanApertureCrop:(BOOL)a11 mediaProvider:(id)a12;
- (void)performRequestsWithAllowedIDs:(id)a0;

@end
