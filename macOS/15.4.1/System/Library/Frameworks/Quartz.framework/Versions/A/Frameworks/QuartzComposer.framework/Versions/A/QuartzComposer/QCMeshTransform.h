@class QCNumberPort, QCMeshPort;

@interface QCMeshTransform : QCPatch {
    QCMeshPort *inputMesh;
    QCNumberPort *inputTransform_OriginX;
    QCNumberPort *inputTransform_OriginY;
    QCNumberPort *inputTransform_OriginZ;
    QCNumberPort *inputTransform_ScaleX;
    QCNumberPort *inputTransform_ScaleY;
    QCNumberPort *inputTransform_ScaleZ;
    QCNumberPort *inputTransform_RotateX;
    QCNumberPort *inputTransform_RotateY;
    QCNumberPort *inputTransform_RotateZ;
    QCNumberPort *inputTransform_TranslateX;
    QCNumberPort *inputTransform_TranslateY;
    QCNumberPort *inputTransform_TranslateZ;
    QCMeshPort *outputMesh;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
