@class NSMutableArray, QCNumberPort;

@interface QCNoise : QCPatch {
    NSMutableArray *_inPorts;
    QCNumberPort *outputValue;
    char *_perm;
    double *_grad;
    int _seed;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (unsigned long long)dimensions;
- (void)setDimensions:(unsigned long long)a0;
- (BOOL)setup:(id)a0;
- (double)_noise1d:(double)a0;
- (double)_noise2d:(double)a0 y:(double)a1;
- (double)_noise3d:(double)a0 y:(double)a1 z:(double)a2;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
