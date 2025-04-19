@class NSWindow;

@interface CPKWindowMorphAnimation : NSAnimation {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startWindowFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endWindowFrame;
}

@property (nonatomic) NSWindow *startWindow;
@property (nonatomic) NSWindow *endWindow;

- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_CGScreenRectFromNSScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentFrameFromFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 finalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (struct CGPoint { double x0; double x1; })_getScreenOriginOfWindow:(id)a0;
- (void)_setAlpha:(double)a0 forWindow:(id)a1;
- (void)_warpWindow:(id)a0 originalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)finalizeWindowState;

@end
