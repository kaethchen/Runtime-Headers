@class PDFTextWidgetTextView, NSView, PDFView, PDFPageView, PDFAnnotation;

@interface PDFKitTextViewPrivate : NSObject {
    NSView *topLevelView;
    PDFTextWidgetTextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}

- (void).cxx_destruct;

@end
