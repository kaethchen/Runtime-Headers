@class PXStoryViewModel, PXStoryModel;

@interface PXStoryViewPointerVisibilityController : PXStoryController

@property (weak, nonatomic) PXStoryViewModel *viewModel;
@property (weak, nonatomic) PXStoryModel *mainModel;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_hideCursorIfOnPlayerAndNotMoving;
- (void)_invalidateMainModel;
- (void)_invalidateShouldHideAfterChromeHide;
- (void)_invalidateShouldHideAfterFirstSegment;
- (void)_invalidateShouldShowAfterViewModeChange;
- (void)_updateMainModel;
- (void)_updateShouldHideAfterChromeHide;
- (void)_updateShouldHideAfterFirstSegment;
- (void)_updateShouldShowAfterViewModeChange;
- (void)configureUpdater:(id)a0;

@end
