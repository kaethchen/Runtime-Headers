@interface ILMediaBrowserUtilities : NSObject

+ (BOOL)timeMachineMode;
+ (id)aliasResolvedPath:(id)a0;
+ (id)bezierPathWithCappedBoxInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)bezierPathWithRoundRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 radius:(float)a1;
+ (id)bezierPathWithTriangleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)bezierPathWithTriangleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pointingAtCorner:(int)a1;
+ (id)bezierPathWithVerticalCappedBoxInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)drawGradient:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startColor:(id)a1 endColor:(id)a2;
+ (void)drawHorizontalGradient:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startColor:(id)a1 endColor:(id)a2;
+ (id)executeAppleScript:(id)a0;
+ (void)hideShadow;
+ (void)showDefaultShadow;
+ (void)showShadowHeight:(long long)a0 radius:(long long)a1 azimuth:(long long)a2 ka:(double)a3;
+ (BOOL)supportedMovieFile:(id)a0;
+ (id)truncateAttributedString:(id)a0 toWidth:(double)a1;
+ (id)truncateString:(id)a0 toWidth:(double)a1;

@end
