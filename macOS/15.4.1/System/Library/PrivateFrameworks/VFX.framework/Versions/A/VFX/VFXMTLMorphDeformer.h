@class NSString, VFXMTLResourceManager, VFXMTLComputePipeline;
@protocol MTLBuffer;

@interface VFXMTLMorphDeformer : NSObject <VFXMTLDeformer> {
    struct __CFXMorpher { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXGeometry *x1; struct __CFXMorph *x2; unsigned int x3; unsigned int x4; float *x5; unsigned int x6; unsigned int x7; } *_morpher;
    unsigned char _finalMeshDataKind;
    unsigned char _dataKindForComputeKernel;
    VFXMTLResourceManager *_resourceManager;
    BOOL _morphNormals;
    unsigned long long _morphKind;
    unsigned long long _currentFrameHash;
    unsigned int _lastMorpherIncrementalPassState;
    unsigned int _finalMeshVertexCount;
    unsigned int _vertexCountForComputeKernel;
    unsigned int _morphTargetCount;
    struct { float x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; } *_morphTargets;
    short _morphTargetPositionDataType;
    short _morphTargetNormalDataType;
    short _basePositionDataType;
    short _baseNormalDataType;
    id<MTLBuffer> _baseBufferForComputeKernel;
    id<MTLBuffer> _originalToFirstDeindexedTableBuffer;
    id<MTLBuffer> _deindexedToFirstDeindexedTableBuffer;
    id<MTLBuffer> _morphTargetsVertexBuffer;
    id<MTLBuffer> _morphTargetsSparseIndicesBuffer;
    VFXMTLComputePipeline *_incrementalInitPipeline;
    VFXMTLComputePipeline *_incrementalAddPipeline;
    VFXMTLComputePipeline *_copyBaseBufferPipeline;
    VFXMTLComputePipeline *_blendDensePipeline;
    VFXMTLComputePipeline *_blendDenseIndexedPipeline;
    VFXMTLComputePipeline *_blendSparsePipeline;
    VFXMTLComputePipeline *_splatPipeline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)requiredInputs;

- (void)dealloc;
- (void)createSparseIndicesBufferForMorphTarget:(struct { float x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; } *)a0 withSetupTarget:(struct { unsigned int x0; struct __CFXMesh *x1; struct __CFXMeshSource *x2; struct __CFXMeshSource *x3; unsigned long long x4; } *)a1 indicesBuffer:(char *)a2 indicesBufferOffset:(unsigned long long)a3 indexSize:(unsigned long long)a4 originalToFirstDeindexedTable:(unsigned int *)a5 computeContext:(id)a6;
- (void)createVertexBufferForMorphTarget:(struct { float x0; unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; } *)a0 withSetupTarget:(struct { unsigned int x0; struct __CFXMesh *x1; struct __CFXMeshSource *x2; struct __CFXMeshSource *x3; unsigned long long x4; } *)a1 vertexBuffer:(char *)a2 vertexBufferOffset:(unsigned long long)a3 indicesBuffer:(char *)a4 indicesBufferOffset:(unsigned long long)a5 indexSize:(unsigned long long)a6 originalToFirstDeindexedTable:(unsigned int *)a7 computeContext:(id)a8;
- (unsigned long long)morphIncrementallyWithComputeContext:(id)a0 positions:(id)a1 normals:(id)a2;
- (unsigned long long)morphSparseWithComputeContext:(id)a0 positions:(id)a1 normals:(id)a2;
- (void)setupMorphTargetsWithComputeContext:(id)a0;
- (unsigned long long)updateWithComputeContext:(id)a0 positions:(id)a1 normals:(id)a2 tangents:(id)a3;

@end
