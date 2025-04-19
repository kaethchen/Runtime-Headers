@class QCImagePort, QCIndexPort, QCMeshPort;

@interface QCMeshMaterialGetter : QCPatch {
    QCMeshPort *inputMesh;
    QCIndexPort *inputIndex;
    QCImagePort *outputImage;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
