@class PDFSelection, PDFScannerResult, PDFPage, PDFAnnotation;

@interface PDFSelectionTrackingData : NSObject

@property (retain, nonatomic) PDFSelection *extendingSelection;
@property (nonatomic) int selectionMode;
@property (weak, nonatomic) PDFPage *startPage;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } marquee;
@property (nonatomic) BOOL highlighted;
@property (weak, nonatomic) PDFAnnotation *annotation;
@property (weak, nonatomic) PDFScannerResult *pdfResult;

- (void).cxx_destruct;

@end
