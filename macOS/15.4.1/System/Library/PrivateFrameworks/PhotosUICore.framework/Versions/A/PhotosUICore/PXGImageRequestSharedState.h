@class PXMediaProvider;
@protocol PXDisplayAssetFetchResult, PXGDisplayAssetRequestObserver, PXGDisplayAssetAdjustment;

@interface PXGImageRequestSharedState : NSObject

@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> displayAssetFetchResult;
@property (readonly, nonatomic) id<PXGDisplayAssetRequestObserver> observer;
@property (readonly, nonatomic) unsigned long long presentationStyles;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) double screenMaxHeadroom;
@property (readonly, nonatomic) id<PXGDisplayAssetAdjustment> adjustment;
@property (readonly, nonatomic) unsigned long long intent;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) BOOL useLowMemoryDecode;
@property (readonly, nonatomic) BOOL applyCleanApertureCrop;

- (void).cxx_destruct;
- (id)initWithDisplayAssetFetchResult:(id)a0 observer:(id)a1 presentationStyles:(unsigned long long)a2 targetSize:(struct CGSize { double x0; double x1; })a3 screenScale:(double)a4 screenMaxHeadroom:(double)a5 adjustment:(id)a6 intent:(unsigned long long)a7 useLowMemoryDecode:(BOOL)a8 applyCleanApertureCrop:(BOOL)a9 mediaProvider:(id)a10;

@end
