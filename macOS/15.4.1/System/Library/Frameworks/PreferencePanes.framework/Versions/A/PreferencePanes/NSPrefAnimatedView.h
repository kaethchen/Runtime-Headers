@interface NSPrefAnimatedView : NSView {
    double mPercent;
    unsigned long long mAnimationEffect;
    struct CGImage { } *mSourceImage;
}

+ (struct CGImage { } *)createCGImageOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inWindow:(id)a1;
+ (struct CGImage { } *)createCGImageOfView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 superview:(id)a2;
+ (struct CGImage { } *)createCGImageOfView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 superview:(id)a2 windowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setPercent:(double)a0;
- (void)didStopAnimation;
- (void)setAnimationEffect:(unsigned long long)a0;
- (void)willStartAnimation;

@end
