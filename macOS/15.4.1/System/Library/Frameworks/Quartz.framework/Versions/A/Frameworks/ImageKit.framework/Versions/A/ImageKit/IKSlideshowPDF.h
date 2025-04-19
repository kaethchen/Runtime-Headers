@class PDFDocument;

@interface IKSlideshowPDF : IKSlideshowElement

@property (retain) PDFDocument *pdfDocument;

- (void)setThumbnail:(struct CGImage { } *)a0;
- (struct CGImage { } *)thumbnail;
- (void)load:(BOOL)a0;
- (id)debugState;
- (id)initWithPDFDocument:(id)a0 dataSourceHandler:(id)a1 index:(unsigned long long)a2 subIndex:(unsigned long long)a3;
- (void)loadThumbnail:(BOOL)a0;
- (void)loadThumbnail:(BOOL)a0 currentCount:(unsigned long long)a1;
- (void)loadThumbnailIfNeeded;
- (void)setMarkedForExport:(BOOL)a0;
- (void)setupSiblings;

@end
