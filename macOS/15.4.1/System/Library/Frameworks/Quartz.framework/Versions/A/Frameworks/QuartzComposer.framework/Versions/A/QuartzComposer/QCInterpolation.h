@class QCInterpolationPort, QCNumberPort, QCIndexPort;

@interface QCInterpolation : QCPatch {
    QCNumberPort *inputValue1;
    QCNumberPort *inputValue2;
    QCNumberPort *inputDuration;
    QCNumberPort *inputTension;
    QCIndexPort *inputRepeat;
    QCNumberPort *outputValue;
    BOOL _compatibilityMode;
    QCInterpolationPort *_interpolationPort;
    unsigned long long _pointCount;
    unsigned long long _pointMax;
    double *_pointTimeBuffer;
    double *_pointValueBuffer;
    struct __Spline { double *x0; double *x1; long long x2; double *x3; long long x4; long long x5; } *_splineRef;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (id)serializedStateKeysWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)_finalize_QCInterpolation;
- (void)_updateSpline;
- (unsigned long long)addControlPointAtTime:(double)a0 withValue:(double)a1;
- (unsigned long long)controlPointsCount;
- (BOOL)customInterpolation;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (long long)nearestControlPointAtTime:(double)a0 andValue:(double)a1 withTolerance:(double)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (void)removeControlPoint:(unsigned long long)a0;
- (BOOL)setControlPoint:(unsigned long long)a0 time:(double)a1 value:(double)a2;
- (void)setCustomInterpolation:(BOOL)a0;
- (double)timeForControlPoint:(unsigned long long)a0;
- (double)valueAtTime:(double)a0;
- (double)valueForControlPoint:(unsigned long long)a0;

@end
