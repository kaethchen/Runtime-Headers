@interface NSPrefCrossFadeView : NSPrefAnimatedView {
    struct CGImage { } *mDestImage;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)setDestCGImage:(struct CGImage { } *)a0;
- (void)didStopAnimation;
- (void)setSourceCGImage:(struct CGImage { } *)a0;
- (void)willStartAnimation;

@end
