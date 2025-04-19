@class NSArray, PDFAnnotation;
@protocol PDFMarkupStylePickerDelegate;

@interface PDFMarkupStylePickerPrivate : NSObject {
    NSArray *markupStyles;
    id<PDFMarkupStylePickerDelegate> delegate;
    PDFAnnotation *annotation;
}

- (void).cxx_destruct;

@end
