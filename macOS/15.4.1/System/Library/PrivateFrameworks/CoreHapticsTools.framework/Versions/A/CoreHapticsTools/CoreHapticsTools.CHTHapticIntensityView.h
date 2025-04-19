@interface CoreHapticsTools.CHTHapticIntensityView : CoreHapticsTools.CHTBaseView {
    void /* unknown type, empty encoding */ paramCurveOverlayLayer;
    void /* unknown type, empty encoding */ overlayParamCurve;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) BOOL wantsDefaultClipping;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)makeBackingLayer;

@end
