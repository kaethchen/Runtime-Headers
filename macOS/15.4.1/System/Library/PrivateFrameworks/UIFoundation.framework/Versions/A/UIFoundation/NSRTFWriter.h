@class NSFileWrapper, NSAttributedString, NSString, NSTextContentStorage, NSMutableDictionary, NSDictionary, NSMutableArray, NSMutableData, NSMapTable;

@interface NSRTFWriter : NSObject {
    NSMutableData *_output;
    NSAttributedString *_attrString;
    unsigned long long _attrStringLength;
    NSFileWrapper *_document;
    NSMutableDictionary *_fontNames;
    NSMutableDictionary *_fontObjects;
    NSMutableDictionary *_colors;
    NSMutableArray *_indexedColors;
    NSMutableArray *_listRanges;
    id _curFont;
    id _curForegroundColor;
    id _curBackgroundColor;
    id _curParagraphStyle;
    id _curKern;
    id _curBaselineOffset;
    id _curSuperscript;
    id _curUnderlineStyle;
    unsigned long long _curTraits;
    unsigned int _curEncoding;
    struct { unsigned char _forceColorWrite : 1; unsigned char _activeFontFeatures : 1; unsigned char _activeFontPalette : 1; unsigned char _activeFontPaletteColors : 1; unsigned char _preserveNaturalAlignment : 1; unsigned char _textScalingNeedsConvert : 1; unsigned char _wroteCocoaVersion : 1; unsigned char _isInlineRTFD : 1; unsigned int _reserved : 24; } _rwFlags;
    double _rightMargin;
    NSDictionary *_docAttrs;
    void *_layoutSections;
    NSMapTable *_attachmentData;
    long long _textScalingConversionSource;
    long long _textScalingConversionTarget;
    NSMutableArray *_indexedHighlightStyles;
    NSMutableArray *_indexedHighlightColorSchemes;
    NSString *_curHighlightStyle;
    NSString *_curHighlightColorScheme;
    NSTextContentStorage *_textListMarkerTextContentStorage;
}

+ (void)initialize;

- (void)dealloc;

@end
