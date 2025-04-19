@class NSMutableArray, NSString, VFXMTLSmoothNormalsDeformer, VFXModelDeformer, VFXMTLMorphDeformer, NSMapTable, VFXMTLResourceManager, VFXMTLRenderContext, VFXMTLComputePipeline, VFXMTLSkinDeformer, MTLStageInputOutputDescriptor, VFXMTLMesh;
@protocol MTLBlitCommandEncoder, MTLBuffer;

@interface VFXMTLDeformerStack : NSObject <VFXMTLDeformerInitComputeContext, VFXMTLDeformerUpdateComputeContext> {
    VFXMTLResourceManager *_resourceManager;
    struct __CFXDeformerStack { } *_deformers;
    struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXNode *x1; struct __CFXNode *x2; struct __CFXNode *x3; int x4; struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; union { } x1; } x5; struct *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 3; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __CFXGeometry *x39; struct __CFXDeformerStack *x40; float x41; struct { } x42; } *_node;
    struct __CFXMesh { } *_baseMesh;
    unsigned char _finalDataKind;
    unsigned char _deformDataKind;
    BOOL _isValid;
    BOOL _reliesOnTransforms;
    BOOL _reliesOnFrustum;
    id<MTLBuffer> _initialPositionBuffer;
    id<MTLBuffer> _initialNormalBuffer;
    id<MTLBuffer> _initialTangentBuffer;
    MTLStageInputOutputDescriptor *_initialBuffersStageInputDescriptor;
    id<MTLBuffer> _deformPositionBuffer;
    id<MTLBuffer> _deformNormalBuffer;
    id<MTLBuffer> _deformTangentBuffer;
    VFXMTLMesh *_finalMesh;
    id<MTLBuffer> _finalPositionBuffer;
    id<MTLBuffer> _finalNormalBuffer;
    id<MTLBuffer> _finalTangentBuffer;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _initialPositionStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _initialNormalStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _initialTangentStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _deformPositionStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _deformNormalStageInputOutputDescriptorInfo;
    struct { BOOL isActive; unsigned long long bufferAttributeFormat; unsigned long long bufferAttributeOffset; unsigned long long bufferLayoutStride; } _deformTangentStageInputOutputDescriptorInfo;
    struct { unsigned int maxIndex; } _splatUniforms;
    VFXMTLComputePipeline *_splatDeformedToFinalPipeline;
    id<MTLBuffer> _deindexedToOriginalTableBuffer;
    unsigned long long _deindexedToOriginalTableBufferIndexSize;
    id<MTLBuffer> _deindexedToFirstDeindexedTableBuffer;
    unsigned long long _deindexedToFirstDeindexedTableBufferIndexSize;
    id<MTLBuffer> _originalToFirstDeindexedTableBuffer;
    unsigned long long _originalToFirstDeindexedTableBufferIndexSize;
    VFXModelDeformer *_currentInitDeformer;
    VFXMTLRenderContext *_currentInitRenderContext;
    id<MTLBlitCommandEncoder> _currentInitResourceBlitEncoder;
    struct { struct { void /* unknown type, empty encoding */ columns[4]; } modelViewTransform; struct { void /* unknown type, empty encoding */ columns[4]; } modelViewProjectionTransform; struct { void /* unknown type, empty encoding */ columns[4]; } projectionTransform; } _currentUpdateTransforms;
    struct { void /* unknown type, empty encoding */ screenResolution; void /* unknown type, empty encoding */ worldPlanes[6]; } _currentUpdateFrustumInfo;
    VFXMTLRenderContext *_currentUpdateRenderContext;
    struct VFXMTLComputeCommandEncoder { id x0; id x1; struct VFXMTLBufferPool *x2; unsigned int x3; } *_currentUpdateComputeCommandEncoder;
    VFXMTLMorphDeformer *_morphDeformer;
    VFXMTLSkinDeformer *_skinDeformer;
    VFXMTLSmoothNormalsDeformer *_smoothNormalsDeformer;
    NSMutableArray *_deformerInstances;
    NSMapTable *_customDeformerToInstances;
}

@property (readonly, nonatomic) id<MTLBlitCommandEncoder> currentBlitEncoder;
@property (readonly, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long currentFrameHash;
@property (readonly, nonatomic) struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; } currentTransforms;
@property (readonly, nonatomic) struct VFXMTLComputeCommandEncoder { id x0; id x1; struct VFXMTLBufferPool *x2; unsigned int x3; } *currentComputeEncoder;

- (void)dealloc;
- (struct { void /* unknown type, empty encoding */ x0[6]; })_currentFrustumInfo;
- (id)deindexedToFirstDeindexedTableBufferWithBlitEncoder:(id)a0 indexSizeOut:(unsigned long long *)a1;
- (id)deindexedToOriginalTableBufferWithBlitEncoder:(id)a0 indexSizeOut:(unsigned long long *)a1;
- (id)newBufferForDataKind:(unsigned char)a0 meshSource:(struct __CFXMeshSource { struct __CFXGenericSource { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a1 dataType:(short)a2 forStageInputOutputDescriptor:(BOOL)a3 usePrivateStorageMode:(BOOL)a4 outStride:(unsigned long long *)a5;
- (id)newBufferForDataKind:(unsigned char)a0 positionSource:(struct __CFXMeshSource { struct __CFXGenericSource { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a1 normalSource:(struct __CFXMeshSource { struct __CFXGenericSource { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXSourceAccessor *x1; union { struct __CFData *x0; void *x1; void *x2; } x2; long long x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x0; unsigned short x1; unsigned char x2; unsigned char x3; } *)a2 positionDataType:(short)a3 normalDataType:(short)a4 forStageInputOutputDescriptor:(BOOL)a5 usePrivateStorageMode:(BOOL)a6 outStride:(unsigned long long *)a7 outPositionOffset:(unsigned long long *)a8 outNormalOffset:(unsigned long long *)a9;
- (id)originalToFirstDeindexedTableBufferWithBlitEncoder:(id)a0 indexSizeOut:(unsigned long long *)a1;
- (void)reconfigureIfNeededWithContext:(id)a0 programHashCodeRequirements:(struct { BOOL x0; })a1;
- (void)setStageInputOutputBuffersToEncoder:(struct VFXMTLComputeCommandEncoder { id x0; id x1; struct VFXMTLBufferPool *x2; unsigned int x3; } *)a0;
- (void)setupFinalMeshWithMesh:(struct __CFXMesh { } *)a0 entityName:(struct __CFString { } *)a1 info:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })a2 usingDrawIndirect:(BOOL)a3;
- (void)setupInitialBuffersWithBaseMesh:(struct __CFXMesh { } *)a0 entityName:(struct __CFString { } *)a1 info:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })a2;

@end
