@interface IKImageBackgroundLayer : CALayer {
    struct CGColor { } *_patternColor;
    struct IKBGLPatternInfo { double patternSize; double patternLightFillColor[4]; double patternDarkFillColor[4]; } _patternInfo;
    BOOL _showsCheckerboard;
    BOOL _whileUpdating;
}

+ (double)fadeDuration;
+ (BOOL)registerLayerWithView:(id)a0;

- (void)dealloc;
- (void)finalize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPatternSize:(double)a0;
- (void)createPatternColor;
- (void)setDarkFillColorRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)setLightFillColorRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (void)setShowsCheckerboard:(BOOL)a0;
- (void)setup:(id)a0;
- (BOOL)showsCheckerboard;

@end
