@class NSDictionary, OITSUColor;

@interface MFPColorAdjust : NSObject {
    struct MFPColorMatrix { float x0[5][5]; } *mColorMatrix;
    struct MFPColorMatrix { float x0[5][5]; } *mGrayMatrix;
    int mColorMatrixFlags;
    OITSUColor *mTransparentRangeLow;
    OITSUColor *mTransparentRangeHigh;
    float mGamma;
    NSDictionary *mRecolorMap;
    float mThreshold;
    BOOL mEnabled;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (float)threshold;
- (float)gamma;
- (void)setThreshold:(float)a0;
- (void)setColorMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (id)transparentHigh;
- (struct MFPColorMatrix { float x0[5][5]; } *)colorMatrix;
- (int)colorMatrixFlags;
- (struct MFPColorMatrix { float x0[5][5]; } *)grayMatrix;
- (id)recolorMap;
- (void)setColorMatrixFlags:(int)a0;
- (void)setGamma:(float)a0;
- (void)setGrayMatrix:(struct MFPColorMatrix { float x0[5][5]; } *)a0;
- (void)setRecolorMap:(id)a0;
- (void)setTransparentLow:(id)a0 high:(id)a1;
- (id)transparentLow;

@end
