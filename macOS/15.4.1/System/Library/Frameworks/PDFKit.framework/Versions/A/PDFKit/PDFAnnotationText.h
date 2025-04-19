@class PDFAnnotationTextPrivateVars;

@interface PDFAnnotationText : PDFAnnotation <NSCopying, NSCoding> {
    PDFAnnotationTextPrivateVars *_private2;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPage:(id)a0;
- (id)iconName;
- (void)setIconName:(id)a0;
- (long long)iconType;
- (void)setIsSelected:(BOOL)a0;
- (void)setIconType:(long long)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;

@end
