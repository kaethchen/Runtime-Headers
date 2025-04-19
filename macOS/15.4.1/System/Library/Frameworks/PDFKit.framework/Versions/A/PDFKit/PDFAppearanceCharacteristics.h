@class NSString, NSDictionary, PDFAppearanceCharacteristicsPrivate, NSColor;

@interface PDFAppearanceCharacteristics : NSObject <NSCopying> {
    PDFAppearanceCharacteristicsPrivate *_private;
}

@property (nonatomic) long long controlType;
@property (copy, nonatomic) NSColor *backgroundColor;
@property (copy, nonatomic) NSColor *borderColor;
@property (nonatomic) long long rotation;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *rolloverCaption;
@property (copy, nonatomic) NSString *downCaption;
@property (readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (struct CGPDFForm { } *)icon;
- (void)addColor:(id)a0 forKey:(struct __CFString { } *)a1 toDictionaryRef:(struct __CFDictionary { } *)a2;
- (struct __CFDictionary { } *)createDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forControlType:(long long)a1;
- (BOOL)scaleProportional;

@end
