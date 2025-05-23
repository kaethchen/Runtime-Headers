@class NSObject, VCPPnPSolver, VCPFaceTensorModel;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPFaceShapeModel : NSObject {
    VCPFaceTensorModel *_tensorModel;
    int _numVertices;
    float *_curMesh;
    float *_cur2D;
    int _numInternalLms;
    int *_lmCoord;
    float *_lmWeight;
    int _numBoundaryLms;
    int *_boundaryLmIndices;
    int _numBoundaryVertices;
    int *_boundaryVertices;
    BOOL *_boundaryLandmarkValidity;
    struct { float x0; float x1; int x2; } *_chPts;
    BOOL *_chPtSelected;
    BOOL _boundaryLmUpdated;
    int _chCount;
    float *_curBlendshapes;
    float *_curCoeff;
    float *_curExprWeights;
    float *_prevExprWeights;
    float *_exprWeightDiagMatrix;
    float *_transformedCoeff;
    float *_blendShapeDelta;
    float _trans[8];
    float _intrinsicMatrix[9];
    float _extrinsicMatrix[12];
    float _eulerAngle[3];
    float _rotMatrix[9];
    float _LM2D[126];
    float _LM3D[189];
    float *_lm3dBlendshapes;
    float *_lm3dMeanBlendshapes;
    float *_lm3dBlendshapeComponents;
    int _numFrmsSinceLastShapeUpdate;
    BOOL _shapeUpdateInProgress;
    VCPPnPSolver *_poseSolver;
    NSObject<OS_dispatch_group> *_updateShapeGroup;
    NSObject<OS_dispatch_queue> *_updateShapeQueue;
    float *_asyncBlendshapes;
    float *_asyncLmBlendshapes;
    float _asyncExtMat[12];
    float _asyncLm2d[126];
    float _asyncWeights[51];
    BOOL _identityInit;
}

@property int processingMode;
@property (readonly) void *meshVertices;
@property (readonly) unsigned long long vertexCount;
@property int detectionModeCounterShapeModel;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMode:(int)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getPose;
- (id)blendShapes;
- (void)calculateBlendshapeWeights:(float *)a0 prevWeights:(float *)a1 lmBlendshapes:(float *)a2 maxIter:(int)a3;
- (void)calculateIdentityCoefficients:(float *)a0 extrinsicMatrix:(float *)a1 pts2D:(float *)a2 exprWeights:(float *)a3 lm3DMeanBlendshapes:(float *)a4 lm3DComponents:(float *)a5 maxIter:(int)a6;
- (void)calculatePosePnpSolver:(int)a0;
- (BOOL)fitOneImage:(float *)a0;
- (void)getEulerAngle:(float *)a0;
- (void)getInternal3dLandmarksCoordinates:(const float *)a0 lm3dPos:(float *)a1;
- (void)getOneInternalLandmarkCoordinates:(const float *)a0 lmCoord:(const int *)a1 lmWeight:(const float *)a2 lm3dPos:(float *)a3;
- (struct matrix<double, 6L, 1L, dlib::memory_manager_stateless_kernel_1<char>, dlib::row_major_layout> { struct layout<double, 6L, 1L, dlib::memory_manager_stateless_kernel_1<char>, 1> { double x0[6]; } x0; })getPoseParam;
- (BOOL)isIdentityInit;
- (void)moveBoundaryLandmarks:(const float *)a0 output:(float *)a1 isInput:(BOOL)a2;
- (BOOL)optimizeProjectionMatrix:(int)a0 tracking:(BOOL)a1 firstPass:(BOOL)a2;
- (void)project3Dto2D:(float *)a0 intrinsinc:(float *)a1 extrinsic:(float *)a2 numVert:(int)a3 out2dpts:(float *)a4;
- (void)projectAndUpdateBoundary;
- (void)reestimateProjectionMatrixPnP;
- (void)resetIdentityAndExpressions;
- (int)setCameraIntrinsics:(float)a0 uc:(float)a1 vc:(float)a2;
- (int)setupModel:(int)a0;
- (BOOL)trackFaceMesh:(float *)a0;
- (void)updateBoundary3dLandmarkBlendshapes:(const float *)a0 numBlendshapes:(int)a1 pts2D:(const float *)a2 lm2D:(const float *)a3 lmBlendshapes:(float *)a4;
- (void)updateBoundaryLandmarkCoordinates:(const float *)a0 pts2D:(const float *)a1 lm2D:(const float *)a2 lm3dPos:(float *)a3;
- (void)updateBoundaryLmForShapeOptimization;
- (void)updateFocalLengthInPixels:(float)a0;
- (void)updateIdentityShape:(float *)a0;
- (void)updateIntrinsic:(float)a0 vc:(float)a1;
- (void)updateMeshAndLm3dAfterExpressionChange;
- (void)updateMeshVertices;
- (void)updateShapeCoeff:(float *)a0 extrinsicMatrix:(float *)a1 pts2D:(float *)a2 exprWeights:(float *)a3 outputblendshapes:(float *)a4;

@end
