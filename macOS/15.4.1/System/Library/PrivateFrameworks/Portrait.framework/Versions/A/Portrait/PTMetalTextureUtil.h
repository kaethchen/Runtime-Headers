@protocol MTLComputePipelineState, MTLDevice;

@interface PTMetalTextureUtil : NSObject {
    id<MTLDevice> _device;
    id<MTLComputePipelineState> _copy;
    id<MTLComputePipelineState> _multiply;
    id<MTLComputePipelineState> _mix;
    id<MTLComputePipelineState> _resample420To444;
    BOOL _imageblocksSupported;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)mix:(id)a0 inTexX:(id)a1 inTexY:(id)a2 outTex:(id)a3 alpha:(float)a4;
- (int)copy:(id)a0 inTex:(id)a1 outTex:(id)a2;
- (id)createWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned long long)a1;
- (id)createWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2;
- (id)createWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 pixelFormat:(unsigned long long)a2 mipmapLevelCount:(unsigned long long)a3;
- (id)mipmapLevelsUsingTextureView:(id)a0;
- (int)multiply:(id)a0 inTex:(id)a1 outTex:(id)a2 multiplier:(float)a3;
- (int)resample420To444:(id)a0 inLuma:(id)a1 inChroma:(id)a2 outYUV:(id)a3;

@end
