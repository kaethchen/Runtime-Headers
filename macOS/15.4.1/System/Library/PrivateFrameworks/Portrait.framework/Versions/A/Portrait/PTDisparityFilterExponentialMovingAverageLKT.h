@class NSString, PTMetalContext, PTOpticalFlow;
@protocol MTLComputePipelineState;

@interface PTDisparityFilterExponentialMovingAverageLKT : NSObject <PTAbstractDisparityFilter> {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _temporalFilterExponentialMovingAverageLKT;
    id<MTLComputePipelineState> _copyDisparityWithBias;
    int _frameCount;
    void /* unknown type, blank encoding */ _iirUpdateCoefficient;
    PTOpticalFlow *_opticalFlow;
    NSString *_dumpInputOutputFolder;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparityFilteredSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithMetalContext:(id)a0;
- (int)copyDisparityWithBias:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2 disparityBias:(float)a3;
- (int)exponentialMovingAverageFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 updateCoefficient:(void /* unknown type, blank encoding */)a5 disparityBias:(float)a6;
- (id)initWithMetalContext:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 disparityFilteredSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;
- (int)prepareFilter:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outState:(id)a5;

@end
