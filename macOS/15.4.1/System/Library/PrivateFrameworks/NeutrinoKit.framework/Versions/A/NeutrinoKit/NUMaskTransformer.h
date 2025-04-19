@interface NUMaskTransformer : NSObject

+ (id)applyRenderedOutputGeometryFromSpace:(id)a0 toInputImage:(id)a1 geometry:(id)a2 composition:(id)a3 error:(out id *)a4;
+ (struct CGImage { } *)createImageIsolatedToMask:(id)a0 mediaView:(id)a1;
+ (struct CGImage { } *)createImageIsolatedToMask:(id)a0 source:(id)a1 geometry:(id)a2 composition:(id)a3;
+ (id)imageForComposition:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (void)imageForComposition:(id)a0 size:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (BOOL)isMaskValid:(id)a0;
+ (id)maskedImageBackgroundImage:(id)a0 source:(id)a1;
+ (id)transformedImage:(id)a0 forComposition:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 error:(out id *)a3;

@end
