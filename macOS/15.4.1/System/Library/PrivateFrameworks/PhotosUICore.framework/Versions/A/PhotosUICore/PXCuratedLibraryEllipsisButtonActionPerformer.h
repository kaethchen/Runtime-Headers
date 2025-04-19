@class PXGLayout, PXCuratedLibraryActionManager;
@protocol PXCuratedLibraryLayoutAssetCollectionReferenceProvider;

@interface PXCuratedLibraryEllipsisButtonActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer

@property (readonly, nonatomic) PXCuratedLibraryActionManager *actionManager;
@property (readonly, weak, nonatomic) id<PXCuratedLibraryLayoutAssetCollectionReferenceProvider> assetCollectionReferenceProvider;
@property (weak, nonatomic) PXGLayout *layout;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (void)_presentToUserOptionsFromActionPerformers:(id)a0;
- (id)assetCollectionReference;
- (id)buttonSpriteReference;
- (id)initWithActionType:(id)a0 viewModel:(id)a1 assetCollectionReference:(id)a2;
- (id)initWithViewModel:(id)a0 assetCollectionReference:(id)a1 actionManager:(id)a2;
- (id)initWithViewModel:(id)a0 assetCollectionReferenceProvider:(id)a1 actionManager:(id)a2;
- (BOOL)performerResetsAfterCompletion;
- (BOOL)presentsMenu;

@end
