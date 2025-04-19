@class NSWindow;

@interface WebWindowFadeAnimation : NSAnimation {
    double _initialAlpha;
    double _finalAlpha;
    NSWindow *_window;
    BOOL _isStopped;
}

- (id)init;
- (void)setDuration:(double)a0;
- (void)setCurrentProgress:(float)a0;
- (void)setWindow:(id)a0;
- (void)stopAnimation;
- (double)currentAlpha;
- (id)initWithDuration:(double)a0 window:(id)a1 initialAlpha:(double)a2 finalAlpha:(double)a3;

@end
