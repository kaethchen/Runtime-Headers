@interface PKAveragePointGenerator : NSObject {
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _locationX;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _locationY;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _force;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _azimuth;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _altitude;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _velocity;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _directionAngle;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _zPosition;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _timestamp;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _length;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _rollAngle;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _radius;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _edgeWidth;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _aspectRatio;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _opacity;
    struct PKRunningStat { BOOL isAngle; long long numValues; long long numValuesOverLimit; double oldM; double newM; double oldS; double newS; double minValue; double maxValue; double limit; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _radius2;
}

- (id)init;
- (id).cxx_construct;
- (void)reset;
- (void)addPoint:(struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })a0;
- (void)addStroke:(id)a0;
- (void)_addPoint:(struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })a0 ignoreAzimuth:(BOOL)a1;
- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })a0;
- (void)addStrokes:(id)a0;
- (struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; BOOL x8; long long x9; double x10; BOOL x11; double x12; long long x13; long long x14; })currentInputPoint;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })currentStrokePoint;

@end
