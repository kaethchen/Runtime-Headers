@class QCOpenGLPort_Image, QCStructurePort, QCIndexPort, QCNumberPort, QCMeshPort;

@interface QCMeshCreator : QCPatch {
    QCStructurePort *inputVertices;
    QCStructurePort *_inputColors;
    QCStructurePort *_inputNormals;
    QCStructurePort *_inputIndices;
    QCStructurePort *_inputTexcoords;
    QCNumberPort *_inputPointSize;
    QCIndexPort *_inputSliceWidth;
    QCIndexPort *_inputSliceHeight;
    QCIndexPort *_inputSliceDepth;
    QCStructurePort *_inputVolume;
    QCOpenGLPort_Image *_inputTextures[16];
    QCMeshPort *outputMesh;
    int _mode;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;
+ (id)inspectorNibNameWithIdentifier:(id)a0;
+ (id)stateKeysWithIdentifier:(id)a0;
+ (unsigned long long)stateVersionWithIdentifier:(id)a0;

- (void)setMode:(int)a0;
- (id)state;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setState:(id)a0;
- (void)_forwardRenderingFlag;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
