@class NSString, VFXMTLComputePipeline;
@protocol MTLBuffer;

@interface VFXModelWrapDeformerInstance : NSObject <VFXModelDeformerInstance> {
    unsigned long long _bindingMode;
    struct { unsigned int vertexCount; struct { void /* unknown type, empty encoding */ columns[4]; } innerLayerToDeformedTransform; struct { void /* unknown type, empty encoding */ columns[4]; } outerLayerToDeformedTransform; } _uniforms;
    struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXNode *x1; struct __CFXNode *x2; struct __CFXNode *x3; int x4; struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; union { } x1; } x5; struct *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 3; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __CFXGeometry *x39; struct __CFXDeformerStack *x40; float x41; struct { } x42; } *_innerLayerNode;
    struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXNode *x1; struct __CFXNode *x2; struct __CFXNode *x3; int x4; struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; union { } x1; } x5; struct *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 3; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __CFXGeometry *x39; struct __CFXDeformerStack *x40; float x41; struct { } x42; } *_outerLayerNode;
    struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXNode *x1; struct __CFXNode *x2; struct __CFXNode *x3; int x4; struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; union { } x1; } x5; struct *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 3; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __CFXGeometry *x39; struct __CFXDeformerStack *x40; float x41; struct { } x42; } *_deformedNode;
    unsigned long long _currentFrameHash;
    VFXMTLComputePipeline *_computePipeline;
    id<MTLBuffer> _pointIndicesBuffer;
    id<MTLBuffer> _barycentricCoordsBuffer;
    id<MTLBuffer> _innerLayerInfluencesBuffer;
    id<MTLBuffer> _innerBindingSpaceVectorsBuffer;
    id<MTLBuffer> _outerBindingSpaceVectorsBuffer;
    id<MTLBuffer> _innerBindingOffsetsBuffer;
    id<MTLBuffer> _outerBindingOffsetsBuffer;
    BOOL _isLegacySingleLayerDeformer;
    struct { unsigned int vertexCount; struct { void /* unknown type, empty encoding */ columns[4]; } driverToDeformedTransform; } _legacyUniforms;
    struct __CFXNode { struct __CFXEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __CFXWorld *x5; long long x6; } x0; struct __CFXNode *x1; struct __CFXNode *x2; struct __CFXNode *x3; int x4; struct { struct { void /* unknown type, empty encoding */ x0[4]; } x0; union { } x1; } x5; struct *x6; BOOL x7; float x8; unsigned long long x9; int x10; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24 : 1; unsigned char x25 : 1; unsigned char x26 : 1; unsigned char x27 : 1; unsigned char x28 : 1; unsigned char x29 : 1; unsigned char x30 : 1; unsigned char x31 : 1; unsigned char x32 : 3; unsigned char x33 : 1; unsigned char x34 : 1; unsigned char x35 : 1; unsigned char x36 : 1; struct { struct { unsigned short x0; unsigned short x1; } x0; unsigned int x1; } x37; struct *x38; struct __CFXGeometry *x39; struct __CFXDeformerStack *x40; float x41; struct { } x42; } *_legacyDrivingNode;
    id<MTLBuffer> _legacyOffsetsOrTransformsBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)updateWithContext:(id)a0;

@end
