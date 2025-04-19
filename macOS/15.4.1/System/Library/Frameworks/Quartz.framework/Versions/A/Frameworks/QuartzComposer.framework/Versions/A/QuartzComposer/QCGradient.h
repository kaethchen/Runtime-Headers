@class QCOpenGLPort_Blending, QCIndexPort, NSMutableArray;

@interface QCGradient : QCRenderingPatch {
    QCIndexPort *inputDirection;
    QCOpenGLPort_Blending *inputBlending;
    unsigned long long _numPoints;
    BOOL _clearDepthBuffer;
    NSMutableArray *_colorPorts;
    NSMutableArray *_positionPorts;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (int)executionModeWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)dealloc;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (BOOL)setup:(id)a0;
- (BOOL)allowsScissors:(id)a0;
- (BOOL)clearDepthBuffer;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;
- (unsigned long long)numberOfPoints;
- (void)setClearDepthBuffer:(BOOL)a0;
- (void)setNumberOfPoints:(unsigned long long)a0;

@end
