@class NSImageView, NSTimer, NSTrackingArea, NSVisualEffectView, SSFrameBufferView, NSWindow;

@interface SSPanningScrollView : NSScrollView {
    NSTrackingArea *mTrackingArea;
    long long mPanningMode;
    NSTimer *mPanningTimer;
    BOOL _leftPanActive;
    BOOL _rightPanActive;
    BOOL _topPanActive;
    BOOL _bottomPanActive;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leftRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rightRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } topRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bottomRect;
}

@property (retain) NSVisualEffectView *fxView;
@property (retain) NSImageView *myImageView;
@property (retain) SSFrameBufferView *frameBufferView;
@property (retain) NSWindow *blankBackgroundWindow;
@property long long panningMode;
@property BOOL disablePanningEvents;
@property BOOL showDisconnectedBlurring;
@property struct CGPoint { double x; double y; } lastPoint;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)updateTrackingAreas;
- (BOOL)scrollbarActive;
- (void)panView;
- (void)setTopTracking:(BOOL)a0;
- (void)commonInitialization;
- (void)createBlankBackgroundWindow;
- (void)disposeBlankBackgroundWindow;
- (void)edgePanForMouseEvent:(id)a0;
- (void)occlusionStateChanged:(BOOL)a0;
- (void)panForEvent:(id)a0;
- (BOOL)pointInContentForWindowMouseCoordinates:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAdjustedForMagnification:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreScrollPoint;
- (void)scrollForMouseEvent:(id)a0 animate:(BOOL)a1;
- (void)scrollToCursor:(struct CGPoint { double x0; double x1; })a0 animate:(BOOL)a1;
- (void)setBottomTracking:(BOOL)a0;
- (void)setEffectFullScreen:(BOOL)a0;
- (void)setLeftTracking:(BOOL)a0;
- (void)setRightTracking:(BOOL)a0;
- (void)setupTrackingArea;
- (void)startPanning;
- (void)stopPanning;
- (void)updatePanTrackingRects;

@end
