@class NSString, PDFDocument;

@interface PDFPrintViewPrivate : NSObject {
    PDFDocument *document;
    NSString *printJobTitle;
    int pageIndex;
    BOOL autoRotate;
    BOOL rotateRight;
    long long scaleMode;
}

- (void).cxx_destruct;

@end
