@interface NSCGSWindowCornerPathMask : NSCGSWindowCornerMask {
    struct CGPath { } *_cornerPath;
    BOOL _clipsWindowContents;
    BOOL _definesShadowShape;
    struct CGImage { } *_cachedImage;
    double _cachedImageScale;
}

- (void)dealloc;
- (struct CGPath { } *)path;
- (BOOL)clipsWindowContents;
- (double)cornerRadius;
- (BOOL)definesShadowShape;
- (struct CGImage { } *)imageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithCornerPath:(struct CGPath { } *)a0 clipsWindowContents:(BOOL)a1 definesShadowShape:(BOOL)a2;

@end
