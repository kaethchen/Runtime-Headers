@interface FigFCRLOLayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererRenderedLegibleOutputInternal { id x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; void *x2; void /* function */ *x3; void /* function */ *x4; struct CGSize { double x0; double x1; } x5; id x6; unsigned char x7; } *layerInternal;
}

- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (void)clear:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)compose;
- (void)setCallbacks:(id)a0 viewportChanged:(void /* function */ *)a1 drawInContext:(void /* function */ *)a2;
- (void)setVideoDisplaySize:(struct CGSize { double x0; double x1; })a0;

@end
