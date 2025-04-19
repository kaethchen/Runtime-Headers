@class NSColor, NSString;

@interface PDFAppearanceCharacteristicsPrivate : NSObject {
    NSColor *backgroundColor;
    NSColor *borderColor;
    long long rotation;
    long long controlType;
    NSString *caption;
    NSString *rolloverCaption;
    NSString *downCaption;
    struct CGPDFForm { } *icon;
    int scaleCircumstance;
    BOOL scaleProportional;
}

- (void).cxx_destruct;

@end
