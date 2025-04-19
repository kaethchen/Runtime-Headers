@class _NSFullScreenContentController, NSWindowController, _NSFullScreenStorage, NSArray, NSScreen, _NSFullScreenTransitionOverlayWindow, NSMutableArray, NSWindow;

@interface _NSExitFullScreenTransitionController : _NSFullScreenTransitionController {
    NSWindow *_window;
    NSWindowController *_windowController;
    _NSFullScreenContentController *_contentController;
    NSArray *_customWindows;
    _NSFullScreenStorage *_fullScreenStorage;
    BOOL _calledOutDidExitFullScreen;
    BOOL _didReenterDoAfterExitFullScreen;
    BOOL _isPrincipalInSpace;
    BOOL _reducedMotion;
    unsigned long long _dockDestinationSpaceID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _transitionedWindowBeforeSnapshotFrame;
    NSMutableArray *_backgroundWindowIDs;
    _NSFullScreenTransitionOverlayWindow *_overlayWindow;
    unsigned long long _destinationSpaceID;
    BOOL _beforeSnapshotIncludesWindowIDs;
    id _beforeContents;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _beforeSnapshotFrame;
    NSScreen *_screen;
    BOOL _interrupted;
    BOOL _notifiedWillExitFS;
    BOOL _configuredForAfterFS;
    BOOL _didPrepareToPerformExit;
    BOOL _dockRepliedToExit;
    BOOL _didDoAfterExitFullScreen;
}

@property (nonatomic) BOOL doInProcessAnimation;
@property (nonatomic) double duration;
@property (nonatomic) BOOL dockInitiated;
@property (nonatomic) BOOL exitForClose;
@property (nonatomic) BOOL skipCleaningUpSpaceOnClose;
@property (nonatomic) BOOL exitForTabMove;
@property (nonatomic) BOOL lastTabShouldCleanUpSpace;

+ (id)exitTransitionForSpace:(id)a0;
+ (id)exitTransitionForWindow:(id)a0;
+ (BOOL)tracksActiveSpaceChanges;

- (void)dealloc;
- (void)start;
- (void)interrupt;
- (unsigned int)contentWindowID;
- (void)_captureAfterSnapshot;
- (void)_captureBeforeSnapshot;
- (void)_clearFullScreenBits;
- (unsigned long long)_desktopPictureSpaceID;
- (void)_doAfterExitFullScreen;
- (void)_doFailedToExitFullScreen;
- (void)_doSucceededToExitFullScreen;
- (id)_gatherAfterTransitionWindowNumbers;
- (id)_getPossibleCustomWindowsForExitingFullScreen;
- (void)_performExitFullScreen;
- (void)_startFullScreenTransition;
- (void)_swapOriginalWindowWithOverlayWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_updateShadowDeltaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 basedOnImage:(struct CGImage { } *)a2;
- (id)_windowIDsForBeforeSnapshot;
- (struct CGImage { } *)captureAfterSnapshot;
- (struct CGImage { } *)captureBeforeSnapshot;
- (void)configureBeforeStarting;
- (id)contentController;
- (unsigned long long)destinationSpaceID;
- (void)doBeforeExitFullScreen;
- (void)failedToExitFullScreen;
- (id)fullScreenStorage;
- (id)gatherParticipatingWindowNumbers;
- (id)initForExitingContentController:(id)a0;
- (BOOL)interrupted;
- (id)maybeFilterParticipatingWindowNumbers:(id)a0 byScreen:(id)a1;
- (void)orderTransitionedWindowFront;
- (id)participatingWindowNumbers;
- (void)prepareToExitFullScreenMode;
- (void)setupWindowForAfterFullScreenExit;
- (BOOL)shouldContentWindowBeVisible;
- (BOOL)startCustomTransition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionedWindowFrame;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowOffset;
- (struct CGSize { double x0; double x1; })transitionedWindowShadowRadius;
- (BOOL)usingAppKitTransition;
- (BOOL)wantsExtendedDynamicRange;
- (id)windowIDsForSnapshot;

@end
