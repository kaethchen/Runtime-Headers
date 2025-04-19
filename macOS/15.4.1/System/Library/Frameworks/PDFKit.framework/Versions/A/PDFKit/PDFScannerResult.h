@class PDFScannerResultPrivate;

@interface PDFScannerResult : NSObject {
    PDFScannerResultPrivate *_private;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)rects;
- (id)ddResult;
- (BOOL)pointIsOnButton:(struct CGPoint { double x0; double x1; })a0;
- (void)setButtonPressed:(BOOL)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 onPageLayer:(id)a1;
- (double)displayScaleOnPageLayer:(id)a0;
- (BOOL)hasActionsForResult;
- (struct __DDHighlight { } *)highlightRef;
- (id)initWithDDScannerResult:(id)a0 foundOnPage:(id)a1;
- (BOOL)pointIsOnButton:(struct CGPoint { double x0; double x1; })a0 onPageLayer:(id)a1;
- (BOOL)resultIsPastDate;
- (void)setHighlightRef:(struct __DDHighlight { } *)a0;

@end
