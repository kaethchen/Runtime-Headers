@class QCNumberPort;

@interface QCRandom : QCPatch {
    QCNumberPort *inputMin;
    QCNumberPort *inputMax;
    QCNumberPort *outputValue;
    double _variability;
    BOOL _usePerlinNoise;
    double _lastTime;
    double _lastSampleTime;
    char *_perm;
    double *_grad;
    long long _seed;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;
+ (int)timeModeWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)validateValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)setup:(id)a0;
- (double)_noise2d:(double)a0 y:(double)a1 min:(double)a2 max:(double)a3;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
