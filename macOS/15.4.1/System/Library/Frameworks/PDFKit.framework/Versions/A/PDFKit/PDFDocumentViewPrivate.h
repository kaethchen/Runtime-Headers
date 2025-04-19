@class PDFDocumentContentView, NSMutableDictionary, PDFView, PDFRenderingProperties, PDFPageBackgroundManager, PDFDocument, PDFAccessibilityDocumentController;

@interface PDFDocumentViewPrivate : NSObject {
    PDFView *pdfView;
    PDFDocument *document;
    PDFRenderingProperties *renderingProperties;
    struct CGSize { double width; double height; } documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableDictionary *pageViews;
    NSMutableDictionary *pageFrames;
    PDFPageBackgroundManager *pageBackgroundManager;
    BOOL ignoreChangedBoundsForBoxNotification;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedBounds;
    PDFAccessibilityDocumentController *accessibilityDocumentController;
}

- (void).cxx_destruct;

@end
