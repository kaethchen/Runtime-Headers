@class NSString, SCNMTLComputePipeline;
@protocol MTLBuffer;

@interface SCNMTLSmoothNormalsDeformer : NSObject <SCNMTLDeformer> {
    unsigned long long _currentFrameHash;
    unsigned int _baseVertexCount;
    id<MTLBuffer> _perVertexTrianglesOffsets;
    id<MTLBuffer> _perVertexTrianglesIndices;
    SCNMTLComputePipeline *_smoothNormalsPipeline;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)supportedOutputs;
+ (unsigned long long)requiredOutputs;
+ (unsigned long long)requiredInputs;

- (void)dealloc;
- (unsigned long long)updateWithComputeContext:(id)a0 buffers:(const struct { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; } *)a1;

@end
