@class PDFView, NSColor, PDFLayerController;

@interface PDFRenderingPropertiesPrivate : NSObject {
    PDFView *pdfView;
    PDFLayerController *pdfLayerController;
    long long displayBox;
    BOOL shouldAntiAlias;
    double greekingThreshold;
    long long interpolationQuality;
    double lineWidthThreshold;
    NSColor *pageColor;
    BOOL enablePageShadows;
    BOOL enableTileEdgeColoring;
    BOOL enableAccessibilityDrawing;
    double screenScaleFactor;
    BOOL enableTileUpdates;
    BOOL enableBackgroundImages;
    BOOL isUsingPDFExtensionView;
    struct CGColorSpace { } *deviceColorSpace;
}

- (void).cxx_destruct;

@end
