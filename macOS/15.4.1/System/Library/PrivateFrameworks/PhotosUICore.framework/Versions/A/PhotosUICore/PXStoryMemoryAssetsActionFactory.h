@class PXStoryViewModel;

@interface PXStoryMemoryAssetsActionFactory : NSObject <PXMemoryAssetsActionFactory>

@property (readonly, nonatomic) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)assetsPickerPresenter;
- (id)rearrangeMemoryAssetsActionWithAssetCollection:(id)a0 movedAssets:(id)a1 beforeAsset:(id)a2;

@end
