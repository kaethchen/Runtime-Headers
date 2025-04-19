@interface QLPreviewSizingUtils : NSObject

+ (struct CGSize { double x0; double x1; })_maxSizeFromUsableFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_usableFrameForScreen:(id)a0;
+ (struct CGSize { double x0; double x1; })adjustedSizeFromSize:(struct CGSize { double x0; double x1; })a0 withMinSize:(struct CGSize { double x0; double x1; })a1 maxSize:(struct CGSize { double x0; double x1; })a2 ratio:(id)a3 deltaPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 maxArea:(double)a5;
+ (struct CGSize { double x0; double x1; })optimalContentSizeForDisplayable:(id)a0 currentSize:(struct CGSize { double x0; double x1; })a1 adaptToScreen:(BOOL)a2 screen:(id)a3 userDefinedSizes:(id)a4 inOutMinSize:(struct CGSize { double x0; double x1; } *)a5 outRatioNumber:(id *)a6 deltaPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a7 onlyRatio:(BOOL *)a8;
+ (struct CGSize { double x0; double x1; })optimalContentSizeForDisplayable:(id)a0 currentSize:(struct CGSize { double x0; double x1; })a1 minSize:(struct CGSize { double x0; double x1; })a2 adaptToScreen:(BOOL)a3 screen:(id)a4;

@end
