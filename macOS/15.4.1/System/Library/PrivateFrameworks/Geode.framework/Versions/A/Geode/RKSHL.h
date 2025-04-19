@class RKColorUtil;

@interface RKSHL : NSObject {
    void *m_vectorDataElem;
    void *m_vectorGainArray;
    RKColorUtil *m_rkColorUtil;
    unsigned long long m_grid;
    unsigned long long m_clutDataSize;
    float *m_clutData;
    long long m_overlayElem;
    long long m_overlayOption;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)allocLutData:(unsigned int)a0;
- (id)getCIColorBrickData:(const struct Vec3f { float x0[3]; } *)a0;
- (id)getCIColorCubeData:(unsigned long long)a0;
- (void)getDataElem:(struct SHLDataElem { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; } *)a0 number:(long long)a1;
- (double)getGammaUsedToFix8bitsQuantization;
- (void)getOverlayElem:(long long *)a0 andOption:(long long *)a1;
- (void)preProcess;
- (void)processColor:(const struct Vec3f { float x0[3]; } *)a0 clrProcessed:(struct Vec3f { float x0[3]; } *)a1 clamp:(BOOL)a2;
- (void)processColorBlackOverlay:(const struct Vec3f { float x0[3]; } *)a0 clrProcessed:(struct Vec3f { float x0[3]; } *)a1 clamp:(BOOL)a2;
- (void)processColorDesaturateOverlay:(const struct Vec3f { float x0[3]; } *)a0 clrProcessed:(struct Vec3f { float x0[3]; } *)a1 clamp:(BOOL)a2;
- (void)setDataElem:(const struct SHLDataElem { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; } *)a0 number:(long long)a1;
- (void)setOverlayElem:(long long)a0 andOption:(long long)a1;

@end
