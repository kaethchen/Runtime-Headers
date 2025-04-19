@class VKNavCameraController, VKTimedAnimation;

@interface VKDetachedNavGestureCameraBehavior : VKGestureCameraBehavior {
    VKNavCameraController *_navCameraController;
    double _startZoomScale;
    struct Unit<geo::RadianUnitDescription, double> { double _value; } _startPitch;
    VKTimedAnimation *_tapZoomAnimation;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })a0 oldFactor:(double)a1 newFactor:(double)a2;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithNavCameraController:(id)a0;
- (void)tapZoom:(struct CGPoint { double x0; double x1; })a0 levels:(double)a1 completionHandler:(id /* block */)a2;
- (void)updatePan:(struct CGPoint { double x0; double x1; })a0 lastScreenPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 degrees:(double)a1;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })a0 translation:(double)a1;
- (void)updateRotate:(double)a0 atScreenPoint:(struct CGPoint { double x0; double x1; })a1;

@end
