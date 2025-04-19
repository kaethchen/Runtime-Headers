@class PDFDocumentLayer, NSObject, PDFPage, PDFSelectionTrackingData, PDFAnnotation, PDFRenderingProperties, CALayer, NSMutableArray, PDFHUDLayerController, NSString, PDFDocument, PDFSelection, NSArray, PDFPasswordLayerController, NSEvent;
@protocol OS_dispatch_queue, PDFLayerControllerDelegate;

@interface PDFLayerControllerPrivate : NSObject {
    struct CGSize { double width; double height; } frameSize;
    CALayer *parentLayer;
    PDFDocumentLayer *documentLayer;
    PDFRenderingProperties *renderingProperties;
    double contentScaleFactor;
    struct CGPoint { double x; double y; } contentOffset;
    double oldContentScaleFactor;
    BOOL autoScale;
    BOOL disableLayerCommits;
    BOOL displaysPDFHUDController;
    PDFHUDLayerController *hudController;
    PDFPasswordLayerController *passwordController;
    id<PDFLayerControllerDelegate> delegate;
    PDFDocument *document;
    NSObject<OS_dispatch_queue> *pagePreloadQueue;
    NSString *urlFragment;
    PDFSelection *currentSelection;
    PDFAnnotation *currentAnnotation;
    PDFPage *currentPage;
    PDFSelection *currentSearchSelection;
    NSString *currentSearchString;
    NSArray *highlights;
    int mouseTrackingMode;
    PDFSelectionTrackingData *selectionTrackingData;
    BOOL inContinuousAutoscroll;
    NSEvent *lastAutoscrollEvent;
    struct CGPoint { double x; double y; } lastAutoscrollPoint;
    NSMutableArray *accessibilityPageElements;
    id accessibilityParent;
}

- (void).cxx_destruct;

@end
