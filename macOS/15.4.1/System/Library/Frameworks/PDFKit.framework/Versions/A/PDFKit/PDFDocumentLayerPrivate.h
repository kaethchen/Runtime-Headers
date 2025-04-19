@class PDFViewLayout, PDFPageBackgroundManager, PDFPageLayerEffect, NSMutableDictionary, PDFDocument, PDFSelection, NSObject, PDFCoachMarkManager, PDFRenderingProperties, PDFTimer;
@protocol PDFPageLayerGeometryInterface;

@interface PDFDocumentLayerPrivate : NSObject {
    PDFDocument *document;
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFViewLayout *viewLayout;
    long long displayMode;
    PDFTimer *updateTimer;
    PDFTimer *updatePageLayerEffectsTimer;
    NSMutableDictionary *loadedPageLayers;
    PDFSelection *selection;
    NSMutableDictionary *selectionLayers;
    PDFSelection *searchSelection;
    NSMutableDictionary *searchSelectionLayers;
    PDFPageLayerEffect *pdfResultLayer;
    PDFCoachMarkManager *coachMarkManager;
    PDFPageBackgroundManager *pageBackgroundManager;
    NSMutableDictionary *backgroundPageLayers;
    NSMutableDictionary *backgroundPageQualities;
}

- (void).cxx_destruct;

@end
