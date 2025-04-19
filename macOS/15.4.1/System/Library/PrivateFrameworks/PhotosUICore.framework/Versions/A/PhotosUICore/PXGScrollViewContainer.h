@class PXScrollViewSpeedometer, PXUpdater, PXGScrollViewContainerConfiguration, NSString, PXGScrollViewModel, PXScrollViewController;
@protocol PXGScrollViewContainerDelegate;

@interface PXGScrollViewContainer : NSView <PXChangeObserver, PXScrollViewControllerObserver, PXGReusableView> {
    struct { BOOL willBeginScrolling; BOOL didScroll; BOOL willEndScrollingWithVelocityTargetContentOffsetCurrentContentOffset; BOOL didEndScrolling; BOOL focusItemsInRect; } _delegateRespondsTo;
    BOOL _isUpdatingScrollViewController;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXScrollViewSpeedometer *speedometer;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) BOOL shouldFlipContentOffset;
@property (retain, nonatomic) PXGScrollViewModel *scrollViewModel;
@property (retain, nonatomic) id<PXGScrollViewContainerDelegate> delegate;
@property (copy, nonatomic) PXGScrollViewContainerConfiguration *userData;
@property (readonly, nonatomic) PXScrollViewController *scrollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly, nonatomic) BOOL canUnloadWhenInvisible;
@property (readonly, nonatomic) BOOL isFloating;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAlpha:(double)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)addHostedLayer:(id)a0;
- (void)addHostedView:(id)a0;
- (void)becomeReusable;
- (struct CGPoint { double x0; double x1; })convertHostedChildCenter:(struct CGPoint { double x0; double x1; })a0 fromGlobalLayer:(id)a1;
- (void)_invalidateScrollViewController;
- (void)_invalidateScrollViewDecelerationRate;
- (void)_invalidateScrollViewModel;
- (void)_updateScrollViewController;
- (void)_updateScrollViewDecelerationRate;
- (void)_updateScrollViewModel;
- (void)_willLayout;
- (void)scrollViewControllerDidEndScrolling:(id)a0;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void)scrollViewControllerWillBeginScrolling:(id)a0;
- (void)scrollViewControllerWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2 currentContentOffset:(struct CGPoint { double x0; double x1; })a3;

@end
