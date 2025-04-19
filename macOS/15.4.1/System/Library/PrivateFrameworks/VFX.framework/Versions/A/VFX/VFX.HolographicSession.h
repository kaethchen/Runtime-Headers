@interface VFX.HolographicSession : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ renderSettings;
    void /* unknown type, empty encoding */ commandQueue;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ display;
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ quiltTexture;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;

@end
