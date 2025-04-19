@class NSTimer, NSString, IKSSToolTip, IKWindowTransitionAnimation, NSMutableArray, IKSSBackgroundWindow, NSBundle, IKSlideshowHandler, IKSSButton;

@interface IKSSPanel : NSPanel <NSWindowDelegate, NSAnimationDelegate> {
    IKSlideshowHandler *_slideshowHandler;
    IKSSBackgroundWindow *_backgroundWindow;
    NSBundle *_bundle;
    int _currentXOffset;
    IKSSToolTip *_slideshowToolTip;
    NSMutableArray *_nextKeyViews;
    NSTimer *_fadeTimer;
    IKWindowTransitionAnimation *_animation;
    BOOL _mouseInside;
    BOOL _canBecomeVisible;
    BOOL _voiceOverIsOn;
}

@property IKSSButton *toolTipButton;
@property (readonly) IKSSButton *backButton;
@property (readonly) IKSSButton *playButton;
@property (readonly) IKSSButton *nextButton;
@property (readonly) IKSSButton *indexButton;
@property (readonly) IKSSButton *fullScreenButton;
@property (readonly) IKSSButton *addToiPhotoButton;
@property (readonly) IKSSButton *cancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)fadeOut;
- (void)swipeWithEvent:(id)a0;
- (void)windowWillMove:(id)a0;
- (id)accessibilityAttributeValue:(id)a0;
- (void)animationDidEnd:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)showPanel;
- (void)windowDidMove:(id)a0;
- (void)setup;
- (void)setupButtons;
- (void)configureRemoveFromiPhotoButton;
- (void)slideshowPause:(id)a0;
- (void)updateToolTipForButtonIfNeeded:(id)a0;
- (int)addBackgroundImage:(int)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)centerPanel;
- (void)closeDown;
- (void)configureActualSizeButton;
- (void)configureAddToiPhotoButton;
- (void)configureBackButton;
- (void)configureCancelButton;
- (void)configureFullScreenButton;
- (void)configureIndexButton;
- (void)configureNextButton;
- (void)configurePauseButton;
- (void)configurePlayButton;
- (id)createButton:(BOOL)a0 rightSideDivider:(int)a1;
- (void)disposeTooltipForButton:(id)a0;
- (void)fadeTimerElapsed:(id)a0;
- (void)hidePanel;
- (void)hideTooltip;
- (id)initWithBackgroundWindow:(id)a0;
- (void)mouseMovedInBackgroundWindow:(id)a0;
- (void)resetFadeTimer;
- (void)setupTooltipForButton:(id)a0;
- (void)showTooltipForButton:(id)a0;
- (void)slideshowCancel:(id)a0;
- (void)slideshowNext:(id)a0;
- (void)slideshowPlay:(id)a0;
- (void)slideshowPrev:(id)a0;
- (void)slideshowSwitchToActualSize:(id)a0;
- (void)slideshowSwitchToFullScreen:(id)a0;
- (void)slideshowSwitchToIndexMode:(id)a0;
- (void)slideshowToggleExportToiPhoto:(id)a0;
- (void)updateWindowForProgress:(float)a0;

@end
