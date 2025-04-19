@interface _TtCV7HumanUI13FrameRenderer8Observer : NSObject <MTKViewDelegate> {
    void /* unknown type, empty encoding */ textureCache;
    void /* unknown type, empty encoding */ renderPipelineState;
    void /* unknown type, empty encoding */ captureScope;
    void /* unknown type, empty encoding */ vertexBuffer;
    void /* unknown type, empty encoding */ indexBuffer;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ sourceImage;
    void /* unknown type, empty encoding */ semaphore;
    void /* unknown type, empty encoding */ inflightBuffer;
    void /* unknown type, empty encoding */ dispatchQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;

@end
