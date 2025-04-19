@class PDFAnnotationButtonWidgetPrivateVars;

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationButtonWidgetPrivateVars *_private2;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)a0;
- (long long)rotation;
- (id)backgroundColor;
- (void)commonInit;
- (id)font;
- (void)setBackgroundColor:(id)a0;
- (void)setFont:(id)a0;
- (id)fieldName;
- (id)caption;
- (void)setFieldName:(id)a0;
- (id)fontColor;
- (void)setCaption:(id)a0;
- (void)setFontColor:(id)a0;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (BOOL)allowsToggleToOff;
- (void)setControlType:(long long)a0;
- (id)alternateFieldName;
- (id)appearanceCharacteristics;
- (struct __CFDictionary { } *)commonCreateDictionaryRef;
- (long long)controlType;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (id)onStateValue;
- (void)setAllowsToggleToOff:(BOOL)a0;
- (void)setAlternateFieldName:(id)a0;
- (void)setOnStateValue:(id)a0;

@end
