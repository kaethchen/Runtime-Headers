@interface MUPDFView : MUPDFViewBase

- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (double)autoScaleFactor;
- (double)_zoomToFitScaleFactor;
- (void)magnificationDidChange:(id)a0;
- (void)setMinScaleFactor:(double)a0;

@end
