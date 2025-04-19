@class NSString, NSWindow, NSView;

@interface IKWindowEffect : NSObject <NSAnimationDelegate> {
    NSView *_view;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _startTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _endTransform;
    double _startAlpha;
    double _endAlpha;
    double _startWhite;
    double _endWhite;
    double _duration;
    unsigned int _connectionID;
    long long _windowNumber;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    BOOL _transtionIsLinear;
    BOOL _equalRects;
    int _windowEffectType;
}

@property (retain) NSWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newEffectForWindow:(id)a0;

- (id)initWithWindow:(id)a0;
- (void)animationDidEnd:(id)a0;
- (void)animationDidStop:(id)a0;
- (void)start:(unsigned long long)a0;
- (void)animationDone:(id)a0;
- (void)setStartAlpha:(double)a0 endAlpha:(double)a1 duration:(double)a2;
- (void)setStartAlpha:(double)a0 endAlpha:(double)a1 view:(id)a2 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 duration:(double)a5;
- (void)setStartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 linear:(BOOL)a2 duration:(double)a3;
- (void)setStartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startAlpha:(double)a2 endAlpha:(double)a3 duration:(double)a4;
- (void)setStartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 endRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startWhite:(double)a2 endWhite:(double)a3 startAlpha:(double)a4 endAlpha:(double)a5 duration:(double)a6;
- (void)setStartTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 endTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 startAlpha:(double)a2 endAlpha:(double)a3 duration:(double)a4;
- (void)setSuckEffect:(float)a0;
- (void)start:(unsigned long long)a0 curve:(unsigned long long)a1;
- (void)updateWindowForProgress:(float)a0;

@end
