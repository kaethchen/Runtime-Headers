@interface CNPhotoLikenessEditorUtils : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRectForImageRef:(struct CGImage { } *)a0 fittingToSize:(struct CGSize { double x0; double x1; })a1 fittingZoom:(double *)a2 minZoom:(double *)a3;
+ (id)imageWithPhotoLikeness:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })invertCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forImage:(struct CGImage { } *)a1;
+ (BOOL)isBadCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCGImageRef:(struct CGImage { } *)a1;
+ (BOOL)isCGFloatValueApproximateZero:(double)a0;
+ (void)saveImage:(id)a0 atPath:(id)a1;
+ (BOOL)shouldDebugReloadSidebarPeriodically;

@end
