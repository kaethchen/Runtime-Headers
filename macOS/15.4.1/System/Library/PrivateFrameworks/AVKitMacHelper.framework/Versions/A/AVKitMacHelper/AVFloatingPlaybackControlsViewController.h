@class NSView, AVAuxiliaryControlsView, NSLayoutAnchor, NSStackView, AVVolumeControlSlider, NSLayoutConstraint, NSButton, AVObservationController;

@interface AVFloatingPlaybackControlsViewController : AVPlayerControlsViewController {
    NSView *_initialFirstResponder;
    AVObservationController *_observationController;
    NSLayoutConstraint *_auxiliaryControlsContainerViewWidthConstraint;
    NSView *_controlsCenterLineView;
    NSView *_controlsBaselineView;
    NSView *_playButtonBaselineView;
}

@property (nonatomic) BOOL canUpdateControlsState;
@property (nonatomic) double animationDuration;
@property (readonly, nonatomic) NSLayoutAnchor *upperControlsBaseAnchor;
@property (readonly, nonatomic) NSLayoutAnchor *upperControlsCenterYAnchor;
@property (readonly, nonatomic) NSView *upperControlsContainerView;
@property (readonly, nonatomic) NSView *volumeControlContainerView;
@property (readonly, nonatomic) NSView *playbackControlsContainerView;
@property (readonly, nonatomic) AVAuxiliaryControlsView *auxiliaryControlsView;
@property (readonly, nonatomic) NSView *backwardScanRateTextContainerView;
@property (readonly, nonatomic) NSView *forwardScanRateTextContainerView;
@property (readonly, nonatomic) NSButton *goToEndOfSeekableRangesButton;
@property (readonly, nonatomic) AVVolumeControlSlider *volumeControl;
@property (readonly, nonatomic) NSStackView *timelineControl;

+ (id)keyPathsForValuesAffectingIntrinsicControlsContentViewSize;

- (void)dealloc;
- (void).cxx_destruct;
- (double)minimumWidth;
- (id)initialFirstResponder;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (long long)layoutStyle;
- (id)backgroundBackdropViewMaskImage;
- (void)_setUpPlaybackControlsContainer;
- (void)_animateViewsIfNeeded:(id)a0 toHiddenState:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_setUpAuxiliaryControls;
- (void)_setUpAuxiliaryControlsView;
- (void)_setUpDebugLineViewsIfNeeded;
- (void)_setUpObservations;
- (void)_setUpPlaybackControls;
- (void)_setUpSlowMotionSlider;
- (void)_setUpTimelineControl;
- (void)_setUpUpperControlsContainerView;
- (void)_setUpVolumeControl;
- (void)_updateAuxiliaryControlsViewStateIfNeeded;
- (void)_updateControlsState;
- (void)_updatePlaybackControlsVisibilityIfNeeded;
- (void)_updateShowsControlsBaselineView:(BOOL)a0;
- (void)_updateShowsControlsCenterLineView:(BOOL)a0;
- (void)_updateShowsPlayButtonBaselineView:(BOOL)a0;
- (void)_updateShowsViewBackgrounds:(BOOL)a0;
- (void)_updateSkipBackwardButtonVisibilityStateIfNeeded;
- (void)_updateSkipForwardButtonVisibilityStateIfNeeded;
- (void)_updateVolumeControlsVisibilityIfNeeded;
- (void)auxiliaryControlsViewIntrinsicContentSizeDidChange:(id)a0;
- (void)controlsConfigurationDidChange;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (id)controlsStyleIdentifier;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (BOOL)movableControlsContentView;
- (void)setupNextKeyView;
- (void)updateViewDebuggingState;

@end
