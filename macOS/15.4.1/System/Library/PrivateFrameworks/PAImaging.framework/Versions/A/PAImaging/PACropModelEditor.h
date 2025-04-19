@class NUCropModel;

@interface PACropModelEditor : NSObject {
    NUCropModel *_model;
}

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (void)updateModel:(id)a0;
- (void)makeCurrentAspectRatioFreeForm;
- (void)makeCurrentFreeFormAspectFixed;
- (void)makeCropRectIntegral;
- (void)moveCropBy:(struct CGVector { double x0; double x1; })a0 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updateAspectRatio:(struct { long long x0; long long x1; })a0 targetArea:(double)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)updatePitchAngle:(double)a0 targetArea:(double)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startAngle:(double)a3;
- (void)updateRollAngle:(double)a0 targetArea:(double)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startAngle:(double)a3;
- (void)updateYawAngle:(double)a0 targetArea:(double)a1 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 startAngle:(double)a3;
- (void)zoomIntoCrop:(double)a0 startRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
