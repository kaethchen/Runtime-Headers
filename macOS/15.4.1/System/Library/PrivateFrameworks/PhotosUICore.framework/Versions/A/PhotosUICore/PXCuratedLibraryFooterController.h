@class UXView, NSString, NSTimer, PXCuratedLibraryStyleGuide, PXUpdater, PXCuratedLibraryViewModel, PXGView, PXPhotosGlobalFooterView, PXCuratedLibraryFooterViewModel, PXAssetsDataSourceCountsController, PXCuratedLibraryLayout;
@protocol PXCuratedLibraryFooterControllerDelegate;

@interface PXCuratedLibraryFooterController : PXObservable <PXMutableCuratedLibraryFooterController, PXChangeObserver, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCuratedLibraryFooterViewModelPresentationDelegate> {
    double _lastUserScrollTime;
    BOOL _footerDidAutoScroll;
    NSTimer *_footerAutoScrollMinimumIdleTimer;
    PXCuratedLibraryFooterViewModel *_footerViewModel;
    long long _presentedZoomLevel;
    PXPhotosGlobalFooterView *_reusableFooterView;
    BOOL _isUpdatingFooter;
    BOOL _needsFooterFrameChangeAnimation;
}

@property (readonly, nonatomic) PXGView *gridView;
@property (readonly, nonatomic) PXCuratedLibraryLayout *layout;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide;
@property (readonly, nonatomic) PXAssetsDataSourceCountsController *itemCountsController;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) BOOL isGridViewVisible;
@property (readonly, nonatomic) BOOL isPullingFooter;
@property (nonatomic) BOOL wantsFooter;
@property (nonatomic) BOOL isFooterVisible;
@property (nonatomic) BOOL hasAppearedOnce;
@property (nonatomic) BOOL footerNeedsReveal;
@property (retain, nonatomic) PXCuratedLibraryFooterViewModel *footerViewModelIfLoaded;
@property (retain, nonatomic) PXPhotosGlobalFooterView *footerView;
@property (retain, nonatomic) UXView *footerMaskView;
@property (nonatomic, getter=isFooterFullyMasked) BOOL footerFullyMasked;
@property (weak, nonatomic) id<PXCuratedLibraryFooterControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL wantsFooterMask;
@property (readonly, nonatomic) double footerMaskVerticalOffset;
@property (readonly, nonatomic) BOOL hasAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_modeForZoomLevel:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (id)footerViewModel;
- (void)performChanges:(id /* block */)a0;
- (void)_setNeedsUpdate;
- (void)_updateFooter;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)didPerformChanges;
- (void)_conditionallyRevealPhotosFooterView;
- (void)_conditionallyRevealPhotosFooterViewWithLastUserScrollTime:(double)a0;
- (void)_footerHasImportantInformationDidChange;
- (void)_invalidateFooter;
- (void)_invalidateFooterAlpha;
- (void)_invalidateFooterAndMaskVisibility;
- (void)_invalidateFooterMaskViewFrame;
- (void)_invalidateFooterMode;
- (void)_invalidateIsFooterVisible;
- (void)_invalidateWantsFooter;
- (void)_resetFooterViewModel;
- (BOOL)_shouldRevealPhotosFooterView;
- (BOOL)_shouldShowFooterForGridViewState;
- (BOOL)_shouldShowFooterForPresentedZoomLevel;
- (void)_updateFooterAlpha;
- (void)_updateFooterAndMaskVisibility;
- (void)_updateFooterMaskViewFrame;
- (void)_updateFooterMode;
- (void)_updateIsFooterVisible;
- (void)_updateWantsFooter;
- (void)_viewDidStartScrolling;
- (double)footerVisibleAmountIncludingSafeAreaInsets:(BOOL)a0;
- (id)initWithGridView:(id)a0 layout:(id)a1 viewModel:(id)a2 itemsCountsController:(id)a3;
- (void)photosGlobalFooterView:(id)a0 presentViewController:(id)a1;
- (void)photosGlobalFooterViewDidChangeHeight:(id)a0;
- (id)presentingViewControllerForFooterViewModel:(id)a0;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)setFooterMaskVerticalOffset:(double)a0;
- (void)setWantsFooterMask:(BOOL)a0;

@end
