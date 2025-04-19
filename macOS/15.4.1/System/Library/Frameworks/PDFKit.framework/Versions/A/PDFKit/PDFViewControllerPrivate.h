@class NSMutableDictionary, PDFView, CALayer, PDFAnnotation;

@interface PDFViewControllerPrivate : NSObject {
    PDFView *view;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewMarquee;
    CALayer *marqueeEffect;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *selectionMarkups;
}

- (void).cxx_destruct;

@end
