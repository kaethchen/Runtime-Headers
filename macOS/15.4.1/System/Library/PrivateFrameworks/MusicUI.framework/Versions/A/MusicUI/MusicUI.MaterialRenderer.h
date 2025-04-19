@interface MusicUI.MaterialRenderer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ textureSource;
    void /* unknown type, empty encoding */ loadedImageTexture;
    void /* unknown type, empty encoding */ resizeTexture;
    void /* unknown type, empty encoding */ resizeRenderPipelineState;
    void /* unknown type, empty encoding */ treatmentPipelineState;
    void /* unknown type, empty encoding */ textureFallbackCopyAllocator;
    void /* unknown type, empty encoding */ lastVideoTexture;
}

- (id)init;
- (void).cxx_destruct;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;

@end
