@class QCStructurePort, QCIndexPort, QCMeshPort;

@interface QCMeshPropertyGetter : QCPatch {
    QCMeshPort *inputMesh;
    QCIndexPort *_inputProperty;
    QCStructurePort *outputValue;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
