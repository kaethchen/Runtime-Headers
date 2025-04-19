@class AVDetachedFullscreenWindow, NSString, NSView, AVDetachedFullscreenTransitionContext, AVDetachedFullscreenWindowController, AVObservationController, AVDetachedFullscreenContentContainerView;
@protocol AVDetachedFullscreenControllerDelegate;

@interface AVDetachedFullscreenController : NSObject <NSWindowDelegatePrivate> {
    AVObservationController *_observationController;
    AVDetachedFullscreenWindowController *_fullscreenWindowController;
    AVDetachedFullscreenWindow *_fullscreenWindow;
    AVDetachedFullscreenContentContainerView *_contentContainerView;
    long long _preservedSourceWindowLevel;
}

@property (nonatomic, getter=isInFullscreen) BOOL inFullscreen;
@property (retain, nonatomic) AVDetachedFullscreenTransitionContext *transitionContext;
@property (readonly, weak, nonatomic) id<AVDetachedFullscreenControllerDelegate> delegate;
@property (retain, nonatomic) NSView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)customWindowsToEnterFullScreenForWindow:(id)a0;
- (id)customWindowsToExitFullScreenForWindow:(id)a0;
- (id)destinationWindowToExitFullScreenForWindow:(id)a0;
- (void)window:(id)a0 startCustomAnimationToEnterFullScreenWithDuration:(double)a1;
- (void)window:(id)a0 startCustomAnimationToExitFullScreenWithDuration:(double)a1;
- (void)windowDidEnterFullScreen:(id)a0;
- (void)windowDidExitFullScreen:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillEnterFullScreen:(id)a0;
- (void)windowWillExitFullScreen:(id)a0;
- (void)enterFullscreen:(id)a0;
- (BOOL)_canEnterFullscreen;
- (void)exitFullscreen:(id)a0;
- (void)_stopFullscreen;
- (void)stopFullscreen:(id)a0;
- (void)_animateFullscreenWindowTransitionWithDuration:(double)a0;
- (void)_attemptExitFullscreen;
- (BOOL)_canExitFullscreen;
- (BOOL)_canUseTransitionType:(unsigned long long)a0 forTransitionWithContext:(id)a1;
- (void)_completeExitTransitionIfPossible;
- (void)_ensureTransitionContextWithDefaultType:(unsigned long long)a0;
- (BOOL)_hasTransitionContext;
- (void)_hideFullscreenWindow;
- (id)_requestTransitionInfoForTransitionType:(unsigned long long)a0;
- (void)_setUpWindowControllerIfNeeded;
- (void)_showFullscreenWindow;
- (void)_startCloseFullscreenTransitionWithContext:(id)a0;
- (void)_startEnterFullscreenTransitionWithContext:(id)a0;
- (void)_startExitFullscreenTransitionWithContext:(id)a0;
- (void)_updateWindowLevelsIfNeeded;
- (id)_windowsNeedingCustomAnimation;

@end
