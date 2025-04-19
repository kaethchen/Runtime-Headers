@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMImageViewModel : PXObservable

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;
- (void)setAsset:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setMediaProvider:(id)a0;

@end
