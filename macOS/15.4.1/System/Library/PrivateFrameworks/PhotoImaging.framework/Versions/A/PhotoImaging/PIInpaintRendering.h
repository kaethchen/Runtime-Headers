@interface PIInpaintRendering : NSObject

+ (void)initialize;
+ (BOOL)renderImage:(id)a0 intoMutableBuffer:(id)a1 destinationBounds:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 renderer:(id)a3 error:(out id *)a4;
+ (id)_imageByOverlayingForegroundImage:(id)a0 onImage:(id)a1 withOpacity:(double)a2;
+ (void)addModelsToInpaintFilter:(id)a0;
+ (float)computeLocalHeadroomForHDRImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2;
+ (void)configureFilter:(id)a0 withOptions:(unsigned long long)a1;
+ (double)dilationAmountForMaskSize:(struct CGSize { double x0; double x1; })a0 fullSize:(struct CGSize { double x0; double x1; })a1;
+ (id)imageByOverlayingBoundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onImage:(id)a1;
+ (id)imageByOverlayingMaskImage:(id)a0 onImage:(id)a1 withOpacity:(double)a2;
+ (id)inpaintedImageWithInputImage:(id)a0 maskImage:(id)a1 exclusionMaskImage:(id)a2 headroom:(float)a3 operation:(id)a4;
+ (id)maskByAddingMask:(id)a0 toMask:(id)a1;
+ (id)maskByDilatingMask:(id)a0 fullExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)maskByFillingHolesInMask:(id)a0;
+ (id)maskByRemovingMask:(id)a0 fromMask:(id)a1;
+ (id)maskByUpscalingMask:(id)a0 withGuideImage:(id)a1;
+ (id)redactedImageWithInputImage:(id)a0 maskImage:(id)a1;
+ (BOOL)shouldDilateMaskForOperation:(id)a0;
+ (struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })sourceExtentForMaskExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0 exclusionMaskExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 imageExtent:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a2 operation:(id)a3;

@end
