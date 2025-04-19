@class QCNumberPort, QCBooleanPort;

@interface QCTrackBall : QCPatch {
    QCBooleanPort *inputTrack;
    QCBooleanPort *inputResetSignal;
    QCNumberPort *inputOriginX;
    QCNumberPort *inputOriginY;
    QCNumberPort *inputOriginZ;
    float _sensibility;
    float _inertia;
    float _friction;
    BOOL _lastResetSignal;
    BOOL _tracking;
    BOOL _wasTracking;
    struct { double x; double y; double z; } _start;
    struct { double x; double y; double z; } _last;
    struct { double x; double y; double z; double w; } _orientation;
    struct { double x; double y; double z; double w; } _saveOrientation;
    float _rotationSpeed;
    struct { double x; double y; double z; } _rotationAxis;
    double _lastTime;
    double _moveTime;
    double _modelview[16];
}

+ (BOOL)isSafe;
+ (int)executionModeWithIdentifier:(id)a0;
+ (Class)inspectorClassWithIdentifier:(id)a0;
+ (BOOL)supportsOptimizedExecutionForIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (float)friction;
- (void)setFriction:(float)a0;
- (BOOL)setup:(id)a0;
- (void)enable:(id)a0;
- (float)inertia;
- (void)setSensibility:(float)a0;
- (void)updateTimebase:(int)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (double)nextExecutionTime:(id)a0 time:(double)a1 arguments:(id)a2;
- (float)sensibility;
- (void)setInertia:(float)a0;

@end
