@class NSString, PXUpdater, PXStoryChromeButton, PXStoryChromeButtonConfiguration, PXStoryViewModel, CAShapeLayer, PXStoryPlayButtonConfiguration;

@interface PXStoryPlayButton : UXView <PXChangeObserver, PXGReusableView>

@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeOutsets;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXStoryChromeButtonConfiguration *buttonConfiguration;
@property (readonly, nonatomic) PXStoryChromeButton *button;
@property (retain, nonatomic) PXStoryPlayButtonConfiguration *configuration;
@property (retain, nonatomic) PXStoryViewModel *viewModel;
@property (readonly, nonatomic) CAShapeLayer *progressIndicator;
@property (readonly, nonatomic) NSString *axPlayLabel;
@property (readonly, nonatomic) NSString *axPauseLabel;
@property (readonly, nonatomic) NSString *axReplayLabel;
@property (copy, nonatomic) PXStoryPlayButtonConfiguration *userData;
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
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setNeedsUpdate;
- (void)_updateButton;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)becomeReusable;
- (void)_invalidateButton;
- (void)_invalidateProgressIndicator;
- (void)_updateProgressIndicator;

@end
