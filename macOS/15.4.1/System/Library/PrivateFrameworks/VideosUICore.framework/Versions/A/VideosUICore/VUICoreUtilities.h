@interface VUICoreUtilities : NSObject

+ (id)URLForResource:(id)a0;
+ (id)randomColor;
+ (id)VideosUICoreBundle;
+ (BOOL)canHandleDecodingOnRenderThread;
+ (void)image:(id)a0 didCompleteLoadingForCache:(long long)a1 requestRecord:(id)a2;
+ (id)imageForResource:(id)a0 accessibilityDescription:(id)a1;
+ (double)radiusFromCornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (BOOL)runningAnInternalBuild;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1 maximumContentSizeCategory:(unsigned long long)a2;
+ (void)vuiColor:(id)a0 getRed:(double *)a1 green:(double *)a2 blue:(double *)a3 alpha:(double *)a4;
+ (id)TVUIKitBundle;
+ (id)VideosUIBundle;
+ (id)_URLForResource:(id)a0 inBundle:(id)a1;
+ (id)_getImageFromURLorBundle:(id)a0;
+ (id)_imageForResource:(id)a0;
+ (id)_vuiCoreResourceMap;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (double)focusedSizeIncreaseForSize:(struct CGSize { double x0; double x1; })a0 upscaleFactor:(double)a1;
+ (id)mobileGestaltStringForKey:(struct __CFString { } *)a0;
+ (struct _VUICornerRadii { double x0; double x1; double x2; double x3; })radiiFromRadius:(double)a0;
+ (BOOL)radiiIsZero:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (BOOL)runningUiTest;
+ (struct CGPath { } *)shadowPathWithCornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0 andScaledSize:(struct CGSize { double x0; double x1; })a1;
+ (unsigned long long)vuiUserInterfaceStyleForAppearance:(id)a0;

@end
