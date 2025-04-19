@class NSString, VFXMTLResourceManager, VFXMTLComputePipeline;
@protocol MTLBuffer;

@interface VFXMTLSkinDeformer : NSObject <VFXMTLDeformer> {
    struct __CFXSkinner { } *_skinner;
    struct __CFXGeometry { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXMesh *x1; struct __CFXMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; void /* function */ *x8; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __CFXMeshElement *x3; struct __CFXMeshSource *x4; struct __CFXMesh *x5; void *x6; void *x7; } x9; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x10; unsigned char x11; } *_baseGeometry;
    unsigned char _dataKind;
    VFXMTLResourceManager *_resourceManager;
    BOOL _skinNormals;
    BOOL _skinTangents;
    unsigned int _baseVertexCount;
    unsigned long long _currentFrameHash;
    id<MTLBuffer> _vertexWeightIndicesBuffer;
    id<MTLBuffer> _boneIndicesBuffer;
    id<MTLBuffer> _boneWeightsBuffer;
    VFXMTLComputePipeline *_computePipeline;
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
