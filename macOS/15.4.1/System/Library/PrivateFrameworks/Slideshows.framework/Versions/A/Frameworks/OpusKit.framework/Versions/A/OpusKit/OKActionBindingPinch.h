@interface OKActionBindingPinch : OKActionBinding {
    struct CGPoint { double x; double y; } _startLocation;
    double _isRotating;
    double _startAngle;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)init;
- (void)unload;
- (id)initWithSettings:(id)a0;
- (void)loadForResponder:(id)a0 scope:(unsigned long long)a1;
- (BOOL)ownsGestureRecognizer:(id)a0;
- (void)performActionWithState:(unsigned long long)a0 location:(struct CGPoint { double x0; double x1; })a1 touchCount:(unsigned long long)a2 scale:(double)a3 angle:(double)a4 translation:(struct CGPoint { double x0; double x1; })a5 velocity:(double)a6;
- (BOOL)respondsToAction:(id)a0 isTouchCountAgnostic:(BOOL)a1;
- (id)settingObjectForKey:(id)a0;

@end
