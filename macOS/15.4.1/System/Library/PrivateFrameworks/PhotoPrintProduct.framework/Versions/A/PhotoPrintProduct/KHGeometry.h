@interface KHGeometry : NSObject

+ (id)stringFromSize:(struct { double x0; BOOL x1; double x2; BOOL x3; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillRectForAspectRatio:(double)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })rectFromString:(id)a0;
+ (struct { double x0; BOOL x1; double x2; BOOL x3; })sizeFromString:(id)a0;
+ (id)stringFromRect:(struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })leftHalfOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; double x1; BOOL x2; BOOL x3; } x1; })lineFromString:(id)a0;
+ (id)stringFromLine:(struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; double x1; BOOL x2; BOOL x3; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignedRectAbout:(struct CGPoint { double x0; double x1; })a0 withSize:(struct CGSize { double x0; double x1; })a1 horizontalAlignment:(unsigned long long)a2 verticalAlignment:(unsigned long long)a3 gap:(struct CGSize { double x0; double x1; })a4;
+ (double)angleFromRadians:(double)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotatedByDegrees:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotatedByRadians:(double)a1;
+ (struct CGSize { double x0; double x1; })ceilSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerToStandardOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })ellipseFromString:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enclosedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withAspectRatio:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })floorNSRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGPoint { double x0; double x1; })floorPoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })floorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGSize { double x0; double x1; })floorSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })physicalPointForRelativePoint:(struct { double x0; double x1; BOOL x2; BOOL x3; })a0 inScaledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
+ (struct { double x0; BOOL x1; double x2; BOOL x3; double x4; BOOL x5; double x6; BOOL x7; })physicalRectInsetForRelativeRectInset:(struct { double x0; BOOL x1; double x2; BOOL x3; double x4; BOOL x5; double x6; BOOL x7; })a0 inScaledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
+ (struct CGSize { double x0; double x1; })physicalSizeForRelativeSize:(struct { double x0; BOOL x1; double x2; BOOL x3; })a0 inScaledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
+ (struct { double x0; double x1; BOOL x2; BOOL x3; })pointFromString:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })proportionallyInsetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 top:(double)a1 left:(double)a2 bottom:(double)a3 right:(double)a4 fromImageSize:(struct CGSize { double x0; double x1; })a5;
+ (double)radiansFromAngle:(double)a0;
+ (struct { double x0; BOOL x1; double x2; BOOL x3; double x4; BOOL x5; double x6; BOOL x7; })rectInsetFromString:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectRelativeToOrigin:(struct CGPoint { double x0; double x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightHalfOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGPoint { double x0; double x1; })roundPoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })roundSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledNSRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atScale:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scaledRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atScale:(double)a1;
+ (BOOL)size:(struct CGSize { double x0; double x1; })a0 isLargerThanSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standardToCenterOriginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)stringFromEllipse:(struct { struct { double x0; double x1; BOOL x2; BOOL x3; } x0; struct { double x0; BOOL x1; double x2; BOOL x3; } x1; })a0;
+ (id)stringFromPoint:(struct { double x0; double x1; BOOL x2; BOOL x3; })a0;
+ (id)stringFromRectInset:(struct { double x0; BOOL x1; double x2; BOOL x3; double x4; BOOL x5; double x6; BOOL x7; })a0;

@end
