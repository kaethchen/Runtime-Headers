@interface NSCGSWindowCornerMask : NSObject

@property (readonly) BOOL clipsWindowContents;
@property (readonly) BOOL definesShadowShape;
@property (readonly) double cornerRadius;
@property (readonly) struct CGPath { } *path;

- (struct CGImage { } *)caImageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (struct CGImage { } *)imageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (struct CGImage { } *)slImageForScale:(double)a0 size:(struct CGSize { double x0; double x1; })a1 center:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
