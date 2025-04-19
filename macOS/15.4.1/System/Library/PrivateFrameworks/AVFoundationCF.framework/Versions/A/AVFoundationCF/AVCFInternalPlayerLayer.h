@interface AVCFInternalPlayerLayer : FigBaseCALayer

@property (nonatomic) struct OpaqueAVCFPlayerLayer { } *AVCFLayer;

- (void)layoutSublayers;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
