@interface NSCGSWindowCornerImageMask : NSCGSWindowCornerMask {
    struct CGImage { } *_image;
    double _imageScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _center;
    BOOL _hasTrivialEdges;
    BOOL _clipsWindowContents;
    BOOL _definesShadowShape;
    double _cornerRadius;
    struct CGImage { } *_cachedImage;
    double _cachedImageScale;
}

- (void)dealloc;
- (struct CGPath { } *)path;
- (BOOL)clipsWindowContents;
- (double)cornerRadius;
- (BOOL)definesShadowShape;
- (struct CGImage { } *)imageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hasTrivialEdges:(BOOL)a3 clipsWindowContents:(BOOL)a4 definesShadowShape:(BOOL)a5;

@end
