@class NSArray, PTMetalContext;
@protocol MTLTexture, MTLComputePipelineState;

@interface PTPyramid : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _downscaleGaussian3x3;
    id<MTLComputePipelineState> _updateLevel0Gaussian3x3FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0Gaussian3x3FromYUV[9];
    id<MTLComputePipelineState> _updateLevel0and1Gaussian3x3FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0and1Gaussian3x3FromYUV[9];
    id<MTLComputePipelineState> _updateLevel0Box2x2FromRGBA[9];
    id<MTLComputePipelineState> _updateLevel0Box2x2FromYUV[9];
    BOOL _skipFullSizeLayer;
    BOOL _doFirstLevelGaussianDownsample;
}

@property (retain, nonatomic) id<MTLTexture> mipmapTexture;
@property (retain, nonatomic) NSArray *mipmapLevels;
@property (nonatomic) BOOL bicubic;

- (void).cxx_destruct;
- (id)findMipmapLevelLargerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)findMipmapLevelLargerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 fromLevel:(int)a1;
- (id)initWithMetalContext:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned long long)a2 skipFullSizeLayer:(BOOL)a3 doFirstLevelGaussianDownsample:(BOOL)a4 mipmapLevelCount:(int)a5;
- (int)updateLevel0FromPTTextureRGBA:(id)a0 inPTTextureRGBA:(id)a1 doFirstLevelGaussianDownsample:(BOOL)a2;
- (int)updateLevel0FromPTTextureYUV:(id)a0 inPTTextureYUV:(id)a1 doFirstLevelGaussianDownsample:(BOOL)a2;
- (int)updateLevel0and1FromPTTextureRGBA:(id)a0 inPTTextureRGBA:(id)a1;
- (int)updateLevel0and1FromPTTextureYUV:(id)a0 inPTTextureYUV:(id)a1;
- (int)updatePyramid:(id)a0 offset:(int)a1;
- (int)updatePyramid:(id)a0 offset:(int)a1 samplingRadius:(float)a2;
- (int)updatePyramidFromPTTexture:(id)a0 inPTTexture:(id)a1;

@end
