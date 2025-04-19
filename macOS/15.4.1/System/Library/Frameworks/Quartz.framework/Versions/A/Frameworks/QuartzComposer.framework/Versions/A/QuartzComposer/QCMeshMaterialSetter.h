@class QCImagePort, QCIndexPort, QCMeshPort;

@interface QCMeshMaterialSetter : QCPatch {
    QCMeshPort *inputMesh;
    QCIndexPort *inputIndex;
    QCImagePort *inputImage;
    QCMeshPort *outputMesh;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
