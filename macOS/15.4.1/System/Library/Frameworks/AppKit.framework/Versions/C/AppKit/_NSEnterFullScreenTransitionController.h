@class NSString, NSArray, _NSFullScreenTransitionOverlayWindow, _NSFullScreenContentController, NSWindow;

@interface _NSEnterFullScreenTransitionController : _NSFullScreenTransitionController {
    NSWindow *_window;
    _NSFullScreenContentController *_contentController;
    NSArray *_customWindows;
    double _duration;
    BOOL _reducedMotion;
    BOOL _suppressImplicitFullScreenForOtherWindows;
    _NSFullScreenTransitionOverlayWindow *_overlayWindow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beforeSnapshotFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beforeShadowDelta;
    id _beforeContents;
    BOOL _interrupted;
    BOOL _configuredWindowForFS;
    BOOL _haveSpaceFromDock;
    BOOL _haveEnteredFS;
}

@property (nonatomic) unsigned long long toSpid;
@property (nonatomic) BOOL activeOverride;
@property (nonatomic) BOOL doInProcessAnimation;
@property (nonatomic) BOOL activate;
@property (nonatomic) BOOL enterForRestoration;
@property (nonatomic) BOOL nonAnimatingSlideAnimation;
@property (copy, nonatomic) NSString *desiredParentUUID;
@property (copy, nonatomic) NSString *placementAnchorSpaceUUID;
@property (nonatomic) long long placementDirection;

+ (id)enterTransitionForWindow:(id)a0;
+ (id)enterTransitionForWindowID:(unsigned int)a0;
+ (BOOL)tracksActiveSpaceChanges;

- (void)dealloc;
- (void)start;
- (void)interrupt;
- (id)initWithWindow:(id)a0;
- (id)fullScreenTitle;
- (void)_captureAfterSnapshot;
- (void)_captureBeforeSnapshot;
- (unsigned long long)_determineStartingSpaceID;
- (void)_doFailedToEnterFullScreen;
- (void)_doFinishedTransition;
- (void)_doSucceededToEnterFullScreen;
- (id)_gatherAfterTransitionWindowNumbers;
- (id)_getPossibleCustomWindowsForEnteringIntoFullScreen;
- (void)_moveWindowsToDestinationSpaceForNoAnimationCase;
- (void)_performEnterFullScreen;
- (void)_performFinalTransitionCleanup;
- (void)_setFloatingWindowTag:(BOOL)a0 forWindowNumbers:(id)a1;
- (void)_startFullScreenTransition;
- (void)_swapOriginalWindowWithOverlayWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateShadowDeltaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basedOnImage:(struct CGImage { } *)a2;
- (void)associateWindowWithSpace;
- (id)contentController;
- (id)customWindowNumbers;
- (void)doAfterEnterFullScreen;
- (void)doBeforeEnterFullScreen;
- (void)failedToEnterFullScreen;
- (id)gatherParticipatingWindowNumbers;
- (BOOL)interrupted;
- (id)maybeFilterParticipatingWindowNumbers:(id)a0 byScreen:(id)a1;
- (void)orderTransitionedWindowFront;
- (id)participatingWindowNumbers;
- (void)setupWindowForAfterFullScreenEnter;
- (BOOL)shouldContentWindowBeVisible;
- (BOOL)startCustomTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowAnimationTargetFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowFrame;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowOffset;
- (BOOL)usingAppKitTransition;
- (id)windowIDsForSnapshot;

@end
