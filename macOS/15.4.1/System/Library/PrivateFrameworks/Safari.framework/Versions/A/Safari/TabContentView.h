@class ContinuousPageView, BrowserWKView, NSView, ReaderWKView, CALayer, ReaderContainerView;
@protocol TabContentViewDelegate;

@interface TabContentView : NSView {
    BOOL _isClosing;
    ReaderContainerView *_readerContainerView;
    ReaderWKView *_readerWKView;
    NSView *_responsiveDesignModeView;
    NSView *_startPageClipView;
    BOOL _shouldClipStartPageViewDuringSwipe;
    CALayer *_snapshotFadingLayer;
    ContinuousPageView *_continuousBrowserPageView;
    BOOL _canInvalidateSnapshotImage;
}

@property (readonly, nonatomic) NSView *contentView;
@property (readonly) BrowserWKView *browserWKView;
@property (weak, nonatomic) id<TabContentViewDelegate> delegate;
@property (readonly, nonatomic) NSView *backgroundView;
@property (readonly, nonatomic) NSView *startPageView;
@property (readonly, nonatomic) NSView *bookmarksView;
@property (readonly, nonatomic) NSView *tabOverviewView;
@property (readonly, nonatomic) NSView *snapshotView;
@property (nonatomic) double topContentInset;
@property (readonly, nonatomic) NSView *dockedInspectorView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityChildren;
- (void)didAddSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)magnifyWithEvent:(id)a0;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)scrollWheel:(id)a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)willRemoveSubview:(id)a0;
- (void)_adjustSubviewsForTopContentInset;
- (id)_browserWindowController;
- (void)_currentContentViewDidChange;
- (void)_installContentView:(id)a0;
- (void)_invalidateSnapshotViewImageIfNecessary;
- (BOOL)_isShowingStartPage;
- (void)_notifyOfBackgroundImageFrameChange;
- (void)_replaceCurrentBrowserWKViewWithBrowserWKView:(id)a0;
- (id)_snapshotFadingColor;
- (void)_uninstallContentView:(id)a0;
- (void)_wkViewDidSwipeSnapshotToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentContentView;
- (BOOL)handleScrollEvent:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 browserWKView:(id)a1;
- (void)installBookmarksView:(id)a0;
- (void)installContinuousBrowserPageView:(id)a0;
- (void)installReaderView:(id)a0;
- (void)installResponsiveDesignView:(id)a0;
- (void)installSnapshotViewWithImage:(id)a0 imageScale:(double)a1 showWhiteOverlay:(BOOL)a2;
- (void)installStartPageView:(id)a0;
- (void)installTabOverviewView:(id)a0;
- (BOOL)isInContinuousMode;
- (void)uninstallBookmarksView;
- (void)uninstallContinuousBrowserPageView;
- (void)uninstallReaderView:(id)a0;
- (void)uninstallResponsiveDesignView;
- (void)uninstallStartPageView;
- (void)uninstallTabOverviewView;
- (void)updateCustomSwipeViews;
- (void)willClose;

@end
