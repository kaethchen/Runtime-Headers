@class NSMutableArray, NSPrefCrossFadeWindowMoveHelper;

@interface NSPrefCrossFadeWindow : NSWindow {
    NSMutableArray *mAnimatedViews;
    NSPrefCrossFadeWindowMoveHelper *mMoveHelper;
}

- (void).cxx_destruct;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1 animate:(BOOL)a2;
- (void)addAnimatedView:(id)a0;
- (id)animatedViews;
- (void)removeAnimatedView:(id)a0;

@end
