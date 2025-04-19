@class VKARCameraController;

@interface VKARGestureCameraBehavior : VKGestureCameraBehavior {
    VKARCameraController *_arCameraController;
    struct Geocentric<double> { double _e[3]; } _startPanPosition;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)beginPan:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithARCameraController:(id)a0;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;

@end
