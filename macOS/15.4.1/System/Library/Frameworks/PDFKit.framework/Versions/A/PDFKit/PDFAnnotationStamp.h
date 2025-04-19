@class PDFAnnotationStampPrivateVars;

@interface PDFAnnotationStamp : PDFAnnotation <NSCopying> {
    PDFAnnotationStampPrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (void)commonInit;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;

@end
