@class NSArray;

@interface MFPGradientBrush : MFPBrush {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading { } *mShading;
    struct CGFunction { } *mShadingFunction;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)color;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)fillPath:(id)a0;
- (id)colorAtPosition:(float)a0;
- (void)createPhoneBrush;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (void)createStopsFromStartAndEndColors;
- (id)endColor;
- (void)setBlend:(id)a0;
- (void)setColorBlend:(id)a0;
- (void)setWrapMode:(int)a0;
- (id)startColor;

@end
