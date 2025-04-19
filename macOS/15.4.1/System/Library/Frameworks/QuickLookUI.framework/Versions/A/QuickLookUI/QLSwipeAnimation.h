@class NSWindow;

@interface QLSwipeAnimation : NSAnimation {
    unsigned int _wid;
    unsigned int _cid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _initialFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _clipFrame;
}

@property (weak) NSWindow *window;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetFrame;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } clipFrame;

- (void).cxx_destruct;
- (float)currentValue;
- (void)prepare;
- (void)setCurrentProgress:(float)a0;

@end
