@protocol UINSPDFDocument;

@interface UINSPDFPrintingView : NSView

@property (copy) id /* block */ pdfDocumentGenerator;
@property (retain) id<UINSPDFDocument> cachedPdfDocument;
@property (readonly, nonatomic) id<UINSPDFDocument> pdfDocument;
@property (nonatomic) BOOL isGeneratingPDF;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageablePageBounds;
@property struct CGSize { double width; double height; } paperSize;
@property double scale;
@property long long pageToPrint;

- (void).cxx_destruct;
- (BOOL)knowsPageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })locationOfPrintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)printJobTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPage:(long long)a0;
- (id)_generatePDF;
- (id)initWithPDFDocumentGenerator:(id /* block */)a0;

@end
