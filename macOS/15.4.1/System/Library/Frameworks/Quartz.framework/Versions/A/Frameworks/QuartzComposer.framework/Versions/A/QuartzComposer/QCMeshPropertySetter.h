@class QCIndexPort, QCStructurePort, QCMeshPort;

@interface QCMeshPropertySetter : QCPatch {
    QCMeshPort *inputMesh;
    QCStructurePort *inputValue;
    QCIndexPort *_inputProperty;
    QCMeshPort *outputMesh;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
