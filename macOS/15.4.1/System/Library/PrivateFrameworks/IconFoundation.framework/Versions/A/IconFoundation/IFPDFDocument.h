@class NSURL;

@interface IFPDFDocument : NSObject

@property struct CGPDFDocument { } *pdfDocument;
@property (readonly) NSURL *url;
@property (readonly) unsigned long long numberOfPages;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)firstPage;
- (id)pageAtIndex:(unsigned long long)a0;

@end
