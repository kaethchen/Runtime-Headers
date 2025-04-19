@class NSMutableDictionary, NSTextStorage, PDFTextSelectionBoundingBoxesEffectLayer, PDFPage, NSObject, PDFNodeBoundingBoxesEffectLayer, PDFPageLayerEffect, NSMutableArray, CALayer, PDFRenderingProperties, NSImage, PDFHighlightDetectedFormFieldsEffectLayer, PDFAnnotation, PDFTextBoundingBoxesEffectLayer, PDFTextPreciseBoundingBoxesEffectLayer, PDFAccessibilityEffectLayer, PDFPageViewAnnotationController;
@protocol PDFPageLayerGeometryInterface, PDFPageLayerInterface;

@interface PDFPageViewPrivate : NSObject {
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    CALayer<PDFPageLayerInterface> *pageLayer;
    PDFPageLayerEffect *searchLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
    NSTextStorage *activeTextStorage;
    NSMutableArray *pageSignatures;
    PDFPageViewAnnotationController *annotationController;
    CALayer *backgroundLayer;
    NSImage *backgroundImage;
    int backgroundQuality;
    unsigned long long visibilityDelegateIndex;
    BOOL isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize { double width; double height; } bookmarkSize;
    PDFHighlightDetectedFormFieldsEffectLayer *detectedFormFieldBoundingBoxesLayer;
    PDFPageLayerEffect *pdfResultLayer;
    PDFPageLayerEffect *selectionLayer;
    PDFAccessibilityEffectLayer *accessibilityLayer;
    PDFTextBoundingBoxesEffectLayer *textBoundingBoxesLayer;
    PDFNodeBoundingBoxesEffectLayer *nodeBoundingBoxesLayer;
    PDFTextPreciseBoundingBoxesEffectLayer *textPreciseBoundingBoxesLayer;
    PDFTextSelectionBoundingBoxesEffectLayer *textSelectionBoundingBoxesLayer;
    BOOL isDetachedView;
    NSMutableDictionary *toolTipTags;
}

- (void).cxx_destruct;

@end
