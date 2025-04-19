@class NSShadow;

@interface SCTHelpPointerView : NSView <SCTAnimatable> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mInitialBounds;
    NSShadow *mShadow;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mPreviousRect;
    BOOL mIsRightHandSide;
    float mAnimationProgress;
    float mScale;
}

- (void)dealloc;
- (void)updateProgress:(float)a0;
- (BOOL)animationShouldStart:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (BOOL)wantsDefaultClipping;
- (void)updateScale:(float)a0;
- (void)setIsOnRightHandSide:(BOOL)a0;

@end
