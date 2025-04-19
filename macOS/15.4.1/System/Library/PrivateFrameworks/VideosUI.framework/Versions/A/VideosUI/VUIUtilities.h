@interface VUIUtilities : NSObject

+ (id)getOSVersion;
+ (id)randomColor;
+ (BOOL)isTVApp;
+ (id)getCurrentQueueLabel;
+ (id)gradientLayerLocationsFromSpacings:(id)a0 height:(double)a1;
+ (double)imageCornerRadiusWithStyle:(long long)a0;
+ (BOOL)isInRetailDemoMode;
+ (BOOL)isRemoteApp;
+ (BOOL)isSUIEnabled;
+ (BOOL)isStoreOrPressDemoMode;
+ (BOOL)shouldPlayerTabsUseVerticalLayoutForSize:(struct CGSize { double x0; double x1; })a0 isPhoneSizeClass:(BOOL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vuiRectCenteredXInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundsToCenterIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 offset:(double)a2;
+ (double)windowHeightMultiplierForHeight:(double)a0;
+ (struct CGSize { double x0; double x1; })windowSizeMultiplerForSize:(struct CGSize { double x0; double x1; })a0;

@end
