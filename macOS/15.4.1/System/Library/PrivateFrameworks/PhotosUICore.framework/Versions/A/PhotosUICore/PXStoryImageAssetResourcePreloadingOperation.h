@class NSObject;
@protocol OS_dispatch_group;

@interface PXStoryImageAssetResourcePreloadingOperation : PXStoryDisplayAssetResourcePreloadingOperation

@property (retain) NSObject<OS_dispatch_group> *loadingGroup;
@property long long imageRequestID;
@property double fractionComplete;
@property (readonly, nonatomic) BOOL isInline;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;

+ (id)_resultHandlingQueue;

- (void).cxx_destruct;
- (void)cancel;
- (id)diagnosticDescription;
- (id)initWithDisplayAssetResource:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 mediaProvider:(id)a2 isInline:(BOOL)a3;
- (void)_handleImageLoadingResultWithImage:(struct CGImage { } *)a0 info:(id)a1;
- (id)initWithDisplayAssetResource:(id)a0 mediaProvider:(id)a1;
- (void)px_start;

@end
