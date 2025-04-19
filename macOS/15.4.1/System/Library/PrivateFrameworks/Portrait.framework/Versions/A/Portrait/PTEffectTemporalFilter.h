@class PTMetalContext, PTOpticalFlow, PTFilterEMA_LKT;
@protocol MTLTexture;

@interface PTEffectTemporalFilter : NSObject {
    PTMetalContext *_metalContext;
    PTOpticalFlow *_opticalFlow;
    int _indexIn;
    int _indexOut;
    id<MTLTexture> _temporalDisparity[2];
    id<MTLTexture> _temporalNormal[2];
    id<MTLTexture> _temporalDiffuse[2];
    PTFilterEMA_LKT *_disparityFilter;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
}

- (void).cxx_destruct;
- (unsigned int)reset;
- (id)diffuseFiltered;
- (id)displacementFWD;
- (id)disparityFiltered;
- (unsigned int)filter:(id)a0 inDisparity:(id)a1 inNormal:(id)a2 filterNormalSpatial:(BOOL)a3 frameIndex:(int)a4 disparityScale:(float)a5;
- (unsigned int)filter:(id)a0 inDisparity:(id)a1 inNormal:(id)a2 inDiffuse:(id)a3 filterNormalSpatial:(BOOL)a4 filterDiffuseSpatial:(BOOL)a5 frameIndex:(int)a6 disparityScale:(float)a7;
- (id)initWithMetalContext:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (id)normalFiltered;
- (unsigned int)prepareFilter:(id)a0 opticalFlowRGB:(id)a1 frameIndex:(int)a2;

@end
