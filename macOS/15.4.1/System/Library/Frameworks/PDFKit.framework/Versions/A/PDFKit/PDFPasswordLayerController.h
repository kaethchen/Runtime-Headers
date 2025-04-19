@class PDFPasswordLayerControllerPrivate;

@interface PDFPasswordLayerController : NSObject {
    PDFPasswordLayerControllerPrivate *_private;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)initInLayer:(id)a0 withRenderingProperties:(id)a1;
- (id)passwordInstruction;
- (id)passwordPrompt;
- (void)setPasswordInstruction:(id)a0;
- (void)setPasswordPrompt:(id)a0;

@end
