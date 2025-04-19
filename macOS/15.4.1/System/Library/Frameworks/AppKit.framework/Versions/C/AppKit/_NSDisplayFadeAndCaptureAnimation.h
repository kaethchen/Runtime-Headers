@interface _NSDisplayFadeAndCaptureAnimation : NSAnimation {
    unsigned long long _displayCount;
    unsigned int *_displays;
    struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *_gammas;
}

@property BOOL fadeOut;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (void)setCurrentProgress:(float)a0;
- (void)startAnimation;

@end
