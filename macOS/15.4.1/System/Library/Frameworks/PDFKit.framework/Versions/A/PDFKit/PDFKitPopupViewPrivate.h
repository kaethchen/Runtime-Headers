@class NSString, PDFPageView, PDFView, NSUndoManager, NSTextView, PDFAnnotation, NSScrollView;

@interface PDFKitPopupViewPrivate : NSObject {
    PDFAnnotation *parentAnnotation;
    PDFPageView *pageView;
    PDFView *view;
    NSTextView *popupTextView;
    NSUndoManager *popupTextViewUndoManager;
    NSScrollView *popupScrollView;
    NSString *contents;
    BOOL deviceIsiPhone;
    BOOL deviceIsiPad;
    id savedFirstResponder;
}

- (void).cxx_destruct;

@end
