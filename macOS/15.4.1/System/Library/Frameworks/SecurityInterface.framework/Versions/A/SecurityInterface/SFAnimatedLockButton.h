@class NSTimer, NSTrackingArea, NSMutableArray, NSSound;

@interface SFAnimatedLockButton : NSButton {
    NSMutableArray *_animationArray;
    int _animationIndex;
    NSTimer *_timer;
    BOOL _locked;
    BOOL _mouseEntered;
    NSTrackingArea *_trackingArea;
    NSSound *_sfUnlockSound;
    NSSound *_sfLockSound;
}

- (void)dealloc;
- (id)_imageNamed:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)_animate:(BOOL)a0;
- (void)unlock:(BOOL)a0;
- (void)_animatorTimerProc:(id)a0;
- (void)_drawRollOver:(BOOL)a0;
- (void)_loadAnimation;
- (void)_setPressedStateImage;
- (void)_setupImages;
- (void)lock:(BOOL)a0;
- (void)startRollOverTracking;
- (void)startRollOverTracking:(float)a0;
- (void)startRollOverTracking:(float)a0 forRTL:(BOOL)a1;
- (void)stopRollOverTracking;
- (void)stopRollOverTracking:(BOOL)a0;

@end
