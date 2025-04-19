@class OITSUBezierPath, NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {
    OITSUBezierPath *mPath;
    BOOL mHasAngle;
    double mAngle;
    NSString *mPointsTypes;
    BOOL mHasOriginType;
    int mOriginType;
    BOOL mHasRotationCenter;
    struct CGPoint { double x; double y; } mRotationCenter;
    BOOL mHasPathEditMode;
    int mPathEditMode;
}

+ (id)NSStringForBezierPath:(id)a0;
+ (id)bezierPathFromNSString:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)path;
- (void)setPath:(id)a0;
- (double)angle;
- (void)setAngle:(double)a0;
- (int)originType;
- (BOOL)hasAngle;
- (BOOL)hasPath;
- (BOOL)hasPathEditMode;
- (void)setPointsTypes:(id)a0;
- (BOOL)hasOriginType;
- (BOOL)hasRotationCenter;
- (int)pathEditMode;
- (id)pointsTypes;
- (struct CGPoint { double x0; double x1; })rotationCenter;
- (void)setOriginType:(int)a0;
- (void)setPathEditMode:(int)a0;
- (void)setRotationCenter:(struct CGPoint { double x0; double x1; })a0;

@end
