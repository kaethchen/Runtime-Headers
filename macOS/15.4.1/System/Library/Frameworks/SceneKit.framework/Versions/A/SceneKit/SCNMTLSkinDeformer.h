@class NSString, SCNMTLResourceManager, SCNMTLComputePipeline;
@protocol MTLBuffer;

@interface SCNMTLSkinDeformer : NSObject <SCNMTLDeformer> {
    struct __C3DSkinner { } *_skinner;
    struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; struct *x8; struct *x9; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x10; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x11; unsigned char x12; } *_baseGeometry;
    unsigned char _dataKind;
    SCNMTLResourceManager *_resourceManager;
    BOOL _skinNormals;
    BOOL _skinTangents;
    unsigned int _baseVertexCount;
    unsigned long long _currentFrameHash;
    id<MTLBuffer> _vertexWeightIndicesBuffer;
    id<MTLBuffer> _boneIndicesBuffer;
    id<MTLBuffer> _boneWeightsBuffer;
    SCNMTLComputePipeline *_computePipeline;
    BOOL _useFallbackCopyKernel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)requiredInputs;

@end
