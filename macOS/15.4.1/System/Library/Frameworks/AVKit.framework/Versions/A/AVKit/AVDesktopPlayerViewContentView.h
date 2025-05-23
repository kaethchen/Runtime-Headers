@class AVPlayerController, AVObservationController, NSTouchBar, AVControlsContainerViewController, AVDesktopPlaybackContentContainerView, NSLayoutConstraint, NSString, AVPlayerControlsViewController, NSTimer, NSView, NSTrackingArea, AVDesktopGestureController, AVStatusOverlayView;

@interface AVDesktopPlayerViewContentView : NSView <AVDesktopGestureControllerDelegate, NSTouchBarProvider> {
    AVObservationController *_observationController;
    id _videoBoundsObservationToken;
    id _windowDidBecomeKeyNotificationObservationToken;
    NSView *_contentOverlayView;
    AVStatusOverlayView *_statusOverlayView;
    unsigned long long _activeControlsLayoutStyle;
    NSLayoutConstraint *_controlsWidthConstraint;
    NSLayoutConstraint *_controlsCenterXConstraint;
    NSLayoutConstraint *_controlsLeadingConstraint;
    NSLayoutConstraint *_controlsTrailingConstraint;
    NSLayoutConstraint *_statusOverlayViewLeftAnchor;
    NSLayoutConstraint *_statusOverlayViewRightAnchor;
    NSLayoutConstraint *_statusOverlayViewTopAnchor;
    NSLayoutConstraint *_statusOverlayViewBottomAnchor;
    BOOL _showingPlaybackControls;
    BOOL _needsControlsVisibilityStateReevaluation;
    BOOL _isShowingPlaybackControlsForMouseMovingInsideView;
    BOOL _mouseIsOverControlsView;
    BOOL _hideControlsOnMouseUp;
    long long _showControlsCount;
    NSTrackingArea *_contentViewTrackingArea;
    NSTrackingArea *_controlsViewTrackingArea;
    NSTimer *_temporaryControlsTimer;
    NSTimer *_dimTouchBarTimer;
    NSTimer *_controlsTimer;
    AVDesktopGestureController *_gestureController;
    BOOL _wantsMouseHiddenOnControlsHide;
    BOOL _doNotMakeCurrentControlsViewControllerViewFirstResponder;
    BOOL _initializingPlaybackContentContainerView;
}

@property (readonly, nonatomic) AVControlsContainerViewController *controlsContainerViewController;
@property (readonly, nonatomic) BOOL managesPlaybackControlsState;
@property (retain, nonatomic) AVPlayerController *playerController;
@property (retain, nonatomic) AVPlayerControlsViewController *controlsViewController;
@property (nonatomic) unsigned long long controlsVisibilityPolicy;
@property (nonatomic) unsigned long long controlsLayoutStyle;
@property (readonly, nonatomic) AVDesktopPlaybackContentContainerView *playbackContentContainerView;
@property (readonly, nonatomic) BOOL showingPlaybackControls;
@property (readonly, nonatomic) NSView *contentOverlayView;
@property (readonly, nonatomic) AVStatusOverlayView *statusOverlayView;
@property (nonatomic) struct { double top; double right; double bottom; double left; } statusOverlayMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

+ (id)keyPathsForValuesAffectingTouchBar;
+ (id)keyPathsForValuesAffectingShowingPlaybackControls;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)swipeWithEvent:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_setupStatusOverlayViewIfNeeded;
- (void)_dimTouchBarIfNeeded;
- (void)_dimTouchBarIfNeededAfterDelay;
- (void)_fireControlsTimer:(id)a0;
- (void)_fireTemporaryControlsTimer:(id)a0;
- (BOOL)_hasInitializedControlsContainer;
- (void)_hideControlsIfPossible;
- (void)_hideMousePointerIfNeeded;
- (void)_initializePlaybackContentContainerViewIfNeeded;
- (void)_preserveFirstResponderStatusIfDescendantOf:(id)a0;
- (void)_restoreFirstResponderIfNeeded;
- (void)_setNeedsControlsVisibilityStateUpdate;
- (void)_setShouldManagePlaybackControlsState:(BOOL)a0;
- (void)_setUpContentOverlayViewIfNeeded;
- (void)_setUpControlsContainerViewControllerIfNeeded;
- (void)_setUpPlaybackContentContainerViewIfNeeded;
- (BOOL)_shouldDimTouchBar;
- (BOOL)_shouldShowPlaybackControls;
- (void)_showControlsIfNeeded;
- (void)_updateActiveControlsViewControllerIfNeeded;
- (void)_updateControlsLayoutStyleConstraints;
- (void)_updateControlsLayoutStyleConstraintsIfNeeded;
- (void)_updateControlsVisibilityStateIfNeeded;
- (void)_updateControlsWidthConstraint;
- (void)_updateControlsWidthConstraintIfNeeded;
- (void)_updateManagesPlaybackControlsState;
- (void)_updateStatusOverlayViewConstraintsIfNeeded;
- (void)gestureController:(id)a0 didResponderToEvent:(id)a1;
- (BOOL)gestureController:(id)a0 shouldIgnoreKeyEvent:(id)a1 withKey:(unsigned short)a2;
- (void)setSatusOverlayMargins:(struct { double x0; double x1; double x2; double x3; })a0;
- (void)showControlsTemporarily;

@end
