@class ICSelectorDelayer, NSProgressIndicator, NSImage, NSOperation;

@interface ICPDFAttachmentView : ICAttachmentView {
    struct CGPDFDocument { } *_pdf;
    struct CGPDFPage { } *_page;
}

@property (weak, nonatomic) NSOperation *renderOperation;
@property (retain, nonatomic) NSProgressIndicator *progressView;
@property (retain) ICSelectorDelayer *startProgressSelectorDelayer;
@property (nonatomic) BOOL isManaullyGeneratingImage;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic, getter=isRendering) BOOL rendering;
@property (readonly, nonatomic) BOOL availableImageIsAcceptable;
@property (readonly, nonatomic) struct CGPDFPage { } *page;

+ (id)renderingQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityHelp;
- (void)setAttachment:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToWindow;
- (void)startProgress;
- (void)setHighlightColor:(id)a0;
- (void)stopProgress;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeMedia;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (id)pdfURL;
- (BOOL)cancelRenderingIfPossible;
- (void)cleanupPDFDocument;
- (id)icaxTypeDescription;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textAttachment:(id)a1 textContainer:(id)a2 forManualRendering:(BOOL)a3;
- (BOOL)needToStartRender;
- (void)prepareForPrinting;
- (void)setupBorderForLayer:(id)a0;
- (void)startImageRenderIfNeeded;
- (void)updateLayerContentsWithFade:(BOOL)a0;

@end
