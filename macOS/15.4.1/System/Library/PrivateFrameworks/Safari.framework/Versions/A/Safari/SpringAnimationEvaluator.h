@class NSDate;

@interface SpringAnimationEvaluator : NSObject {
    double _mass;
    double _stiffness;
    double _damping;
    double _w0;
    double _wd;
    double _zeta;
    double _A;
    double _B;
    struct __CVDisplayLink { } *_displayLink;
    NSDate *_startDate;
    id /* block */ _progressHandler;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_handleCallback;
- (double)_progressAtTime:(double)a0;
- (void)_setUpState;
- (id)initWithMass:(double)a0 stiffness:(double)a1 damping:(double)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
