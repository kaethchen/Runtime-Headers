@interface PDFAnnotationInk : PDFAnnotation <NSCopying, NSCoding>

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)paths;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)addBezierPath:(id)a0;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (void)releaseCGPathArray;
- (void)removeBezierPath:(id)a0;

@end
