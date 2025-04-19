@class PTMetalContext, PTBoxFilter;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTVFXSoftAlphaMask : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _disparityToAlphaMask;
    id<MTLComputePipelineState> _remapAlphaMask;
    id<MTLTexture> _alphaMask;
    id<MTLTexture> _remappedAlphaMask;
    id<MTLTexture> _intermediateTextureBox;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _colorSize;
    PTBoxFilter *_boxFilter;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (int)boxFilter:(id)a0 mask:(id)a1;
- (id)debugTextures;
- (id)lazyInstantiateAlphaMaskForRenderRequest:(id)a0;
- (int)remapAlphaMask:(id)a0 effectRenderRequest:(id)a1;
- (int)updateSoftAlphaMask:(id)a0 inDisparity:(id)a1 focusDisparityModifiers:(id)a2 effectRenderRequest:(id)a3;
- (int)updateSoftAlphaMask:(id)a0 inSegmentation:(id)a1 effectRenderRequest:(id)a2;

@end
