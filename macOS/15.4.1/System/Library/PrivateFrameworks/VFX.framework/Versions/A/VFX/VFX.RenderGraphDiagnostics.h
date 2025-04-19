@interface VFX.RenderGraphDiagnostics : VFX.GraphDiagnostics {
    void /* unknown type, empty encoding */ graphID;
    void /* unknown type, empty encoding */ rendererInfo;
    void /* unknown type, empty encoding */ texturePreviewsByNodeID;
}

- (id)init;
- (void).cxx_destruct;
- (void)addGenericRenderGraphErrorWithMessage:(id)a0;

@end
