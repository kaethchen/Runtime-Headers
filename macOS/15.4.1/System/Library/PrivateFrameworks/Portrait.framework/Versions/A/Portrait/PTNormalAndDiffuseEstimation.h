@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTNormalAndDiffuseEstimation : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _estimateNormalsFromDisparity;
    id<MTLComputePipelineState> _estimateDiffuseFromDisparity;
    float _sensorWidth;
    float _focalLength;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (void)estimateDiffuseFromDisparity:(id)a0 outDiffuse:(id)a1;
- (void)estimateNormalsFromDisparity:(id)a0 outNormal:(id)a1;
- (id)initWithMetalContext:(id)a0 sensorWidth:(float)a1 focalLength:(float)a2;

@end
