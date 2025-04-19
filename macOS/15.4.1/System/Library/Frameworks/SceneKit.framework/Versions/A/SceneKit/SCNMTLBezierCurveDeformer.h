@class SCNMTLMesh, NSString, SCNMTLComputePipeline;
@protocol MTLBuffer;

@interface SCNMTLBezierCurveDeformer : NSObject <SCNMTLMeshlessDeformer> {
    unsigned long long _currentFrameHash;
    struct { void /* unknown type, empty encoding */ columns[4]; } _transform;
    struct { unsigned int monotonicSubsegmentCountCubic; unsigned short segmentCountLinear; unsigned short segmentCountQuadratic; unsigned short segmentCountCubic; unsigned short segmentInfoOffsetLinear; unsigned short segmentInfoOffsetQuadratic; unsigned short segmentInfoOffsetCubic; unsigned short controlPointIndicesOffset; } _curveInfo;
    unsigned int _curveControlPointCount;
    SCNMTLMesh *_quadMesh;
    id<MTLBuffer> _quadPositionsBuffer;
    id<MTLBuffer> _quadTexcoordsBuffer;
    id<MTLBuffer> _bezierCurveInfoBuffer;
    id<MTLBuffer> _lastDeformedCurveControlPointsBuffer;
    SCNMTLComputePipeline *_buildQuadGeometryPipeline;
    SCNMTLComputePipeline *_initBezierCurveInfoPipeline;
    SCNMTLComputePipeline *_buildBezierCurveInfoPipelineLinear;
    SCNMTLComputePipeline *_buildBezierCurveInfoPipelineQuadratic;
    SCNMTLComputePipeline *_buildBezierCurveInfoPipelineCubic;
}

@property (readonly, nonatomic) SCNMTLMesh *finalMesh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (BOOL)deformsControlPointsForMeshlessGeometry:(struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __C3DMesh *x1; struct __C3DMaterial *x2; struct __CFArray *x3; struct __CFSet *x4; struct __CFArray *x5; struct *x6; unsigned char x7 : 1; struct *x8; struct *x9; struct { unsigned char x0; BOOL x1; struct { BOOL x0; unsigned char x1; unsigned char x2; unsigned char x3; } x2; struct __C3DMeshElement *x3; struct __C3DMeshSource *x4; struct __C3DMesh *x5; void *x6; void *x7; } x10; struct { unsigned char x0; float x1; unsigned int x2; unsigned char x3; union { struct { float x0; float x1; } x0; struct { float x0; } x1; struct { float x0; } x2; struct { unsigned char x0; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } x4; } x11; unsigned char x12; } *)a0;
+ (unsigned long long)requiredInputs;

@end
