@class NSArray, OITSUBezierPath, OITSUColor;

@interface MFPPathGradientBrush : MFPGradientBrush {
    OITSUColor *mCenterColor;
    struct CGPoint { double x; double y; } mCenterPoint;
    NSArray *mSurroundColors;
    OITSUBezierPath *mPath;
}

- (void).cxx_destruct;
- (void)setPath:(id)a0;
- (void)setCenterColor:(id)a0;
- (void)setCenterPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)createShading;
- (id)endColor;
- (void)setSurroundColors:(id)a0;
- (id)startColor;

@end
