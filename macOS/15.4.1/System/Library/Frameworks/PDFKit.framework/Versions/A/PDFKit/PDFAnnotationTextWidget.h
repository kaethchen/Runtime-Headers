@class PDFAnnotationTextWidgetPrivateVars;

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationTextWidgetPrivateVars *_private2;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)stringValue;
- (id)defaultStringValue;
- (void)setAlignment:(long long)a0;
- (long long)alignment;
- (long long)rotation;
- (void)setStringValue:(id)a0;
- (BOOL)isReadOnly;
- (id)backgroundColor;
- (id)attributedStringValue;
- (void)commonInit;
- (id)font;
- (void)setAttributedStringValue:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setFont:(id)a0;
- (void)setRotation:(int)a0;
- (id)fieldName;
- (void)setFieldName:(id)a0;
- (id)fontColor;
- (BOOL)isMultiline;
- (void)setMaximumLength:(unsigned long long)a0;
- (void)setFontColor:(id)a0;
- (void)setIsReadOnly:(BOOL)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)setIsMultiline:(BOOL)a0;
- (id)alternateFieldName;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (unsigned long long)maximumLength;
- (void)setAlternateFieldName:(id)a0;
- (void)setDefaultStringValue:(id)a0;

@end
