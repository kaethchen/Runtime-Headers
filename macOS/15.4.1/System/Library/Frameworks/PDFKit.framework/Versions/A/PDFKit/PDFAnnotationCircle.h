@class PDFAnnotationCirclePrivateVars;

@interface PDFAnnotationCircle : PDFAnnotation <NSCopying> {
    PDFAnnotationCirclePrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)interiorColor;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (void)setInteriorColor:(id)a0;

@end
