@class CAMediaTimingFunction, NSString, NSTimer, DDHighlightObject, NSDate, DDHighlightButton;

@interface DDBasicHighlightsView : NSView {
    struct __DDHighlight { } *_highlight;
    DDHighlightButton *_button;
    int _state;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _globalVisibleRect;
    NSTimer *_timer;
    NSDate *_startDate;
    double _targetOpacity;
    double _initialOpacity;
    CAMediaTimingFunction *_timingFunction;
}

@property (retain, nonatomic) DDHighlightObject *highlightObject;
@property (nonatomic) unsigned long long highlightStyle;
@property (nonatomic) BOOL layerOnly;
@property (nonatomic) BOOL mouseDown;
@property (retain, nonatomic) NSString *toolTipString;
@property struct OpaqueWKBundlePageOverlay { } *overlay;

+ (id)defaultAnimationForKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)currentState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })aimFrame;
- (void)drawAtPoint:(struct CGPoint { double x0; double x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlight:(BOOL)a0;
- (void)stopAnimation;
- (void)_finishSetup;
- (void)_setOpacity:(float)a0 disableAnimation:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actionRect;
- (BOOL)drawsSomething;
- (double)overlayAlphaValue;
- (BOOL)pointIsOnButton:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointIsOnHighlight:(struct CGPoint { double x0; double x1; })a0 onTriangle:(BOOL *)a1;
- (void)setAnimatedAlphaValue:(double)a0;
- (void)setAnimatedOverlayAlphaValue:(id)a0;
- (void)setButtonPressed:(BOOL)a0;
- (void)setGlobalVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlightState:(int)a0 disableAnimation:(BOOL)a1;
- (void)setOverlayAlphaValue:(double)a0;
- (void)setSublayerRects:(id)a0 withArrow:(BOOL)a1 textDirection:(long long)a2 endsWithEOL:(BOOL)a3;
- (id)trackingAreaRects:(BOOL)a0;
- (void)updateToolTip;
- (BOOL)wantsRolloverEffect;

@end
