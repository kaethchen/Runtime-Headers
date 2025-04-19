@class PTMetalContext;
@protocol PTAbstractDisparityFilter;

@interface PTDisparityPostProcessing : NSObject {
    id<PTAbstractDisparityFilter> _disparityFilter;
    PTMetalContext *_metalContext;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _filteredDisparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _colorSize;
}

+ (int)prewarmForCameraCaptured;
+ (int)prewarmForMediaserverd;
+ (int)prewarmWithDescriptor:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithDescriptor:(id)a0;
- (int)computeOpticalFlow:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)computeOpticalFlow:(id)a0 outDisplacement:(id)a1;
- (id)initWithCommandQueue:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 filteredDisparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;
- (int)temporalDisparityFilter:(id)a0 inDisparity:(id)a1 inDisplacement:(id)a2 inDisparityFilteredPrev:(id)a3 outDisparityFiltered:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityFilteredPrev:(id)a2 outDisparityFiltered:(id)a3 disparityBias:(float)a4;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparityFiltered:(id)a4 outState:(id)a5;
- (int)temporalDisparityFilter:(id)a0 inStatePrev:(id)a1 inDisparity:(id)a2 outDisparityFiltered:(id)a3 outState:(id)a4;

@end
