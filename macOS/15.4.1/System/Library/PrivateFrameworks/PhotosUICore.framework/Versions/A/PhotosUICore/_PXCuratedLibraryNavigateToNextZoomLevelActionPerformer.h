@class PXGLayout, PXGSpriteReference;

@interface _PXCuratedLibraryNavigateToNextZoomLevelActionPerformer : PXCuratedLibraryActionPerformer

@property (readonly, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) PXGSpriteReference *hitSpriteReference;

- (void).cxx_destruct;
- (void)performUserInteractionTask;
- (id)initWithActionType:(id)a0 viewModel:(id)a1;
- (id)initWithActionType:(id)a0 viewModel:(id)a1 layout:(id)a2 hitSpriteReference:(id)a3;

@end
