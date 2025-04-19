@class NSURL;

@interface _AXFMouseCursorGeneratorLayer : NSObject {
    struct CGPDFDocument { } *_pdf;
    struct CGPDFPage { } *_pdfPage;
}

@property (copy, nonatomic) NSURL *_pdfURL;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_baseSize;
- (struct CGImage { } *)_createImageForScale:(double)a0 color:(id)a1;
- (struct CGPDFDocument { } *)_pdf;
- (struct CGPDFPage { } *)_pdfPage;

@end
