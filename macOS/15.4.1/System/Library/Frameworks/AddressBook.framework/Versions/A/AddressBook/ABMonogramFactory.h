@interface ABMonogramFactory : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCenterString:(id)a1 withAttributes:(id)a2;
+ (BOOL)colorIsClear:(id)a0;
+ (double)fontSizeForDiameter:(double)a0;
+ (double)fontWeightForDiameter:(double)a0;
+ (id)imageWithContactSilhouetteWithOptions:(id)a0;
+ (double)addPhotoBaselineForString:(id)a0;
+ (id)addPhotoImageWithOptions:(id)a0;
+ (unsigned long long)compositingOperationForColor:(id)a0;
+ (void)drawString:(id)a0 color:(id)a1 diameter:(double)a2;
+ (id)fontForDiameter:(double)a0;
+ (id)imageWithCompanySilhouetteWithOptions:(id)a0;
+ (id)imageWithInitials:(id)a0 options:(id)a1;
+ (id)imageWithOptions:(id)a0 drawBorder:(BOOL)a1 drawHandler:(id /* block */)a2;
+ (id)imageWithSilhouette:(id)a0 options:(id)a1;
+ (id)imageWithThumbnail:(id)a0 options:(id)a1;
+ (unsigned long long)linesOfTextInString:(id)a0;

@end
