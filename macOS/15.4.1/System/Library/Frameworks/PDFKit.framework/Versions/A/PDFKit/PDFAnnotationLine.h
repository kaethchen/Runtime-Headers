@class PDFAnnotationLinePrivateVars;

@interface PDFAnnotationLine : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationLinePrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)setEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })startPoint;
- (struct CGPoint { double x0; double x1; })endPoint;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (id)interiorColor;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (long long)endLineStyle;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (void)setEndLineStyle:(long long)a0;
- (void)setInteriorColor:(id)a0;
- (void)setStartLineStyle:(long long)a0;
- (long long)startLineStyle;

@end
