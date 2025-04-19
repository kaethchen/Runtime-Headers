@class WDStyle, WDParagraphProperties;

@interface WMParagraphStyle : WMStyle {
    WDStyle *_baseStyle;
    BOOL _isInTextFrame;
    WDParagraphProperties *_defaultParagraphProperties;
}

+ (BOOL)isShadingNull:(id)a0;

- (void).cxx_destruct;
- (void)addParagraphPropertiesFromStyle;
- (void)addParagraphProperties:(id)a0;
- (void)addParagraphPropertiesFromStyle:(id)a0;
- (void)addParagraphStyleCharacterProperties:(id)a0;
- (id)initWithDefaultProperties:(id)a0 isInTextFrame:(BOOL)a1;
- (id)initWithDefaultProperties:(id)a0 style:(id)a1 isInTextFrame:(BOOL)a2;
- (BOOL)isRTLWithOverridesFromProperties:(id)a0;
- (id)leadingMarginPropertyNameWithOverridesFromProperties:(id)a0;
- (void)mapBorders:(id)a0;
- (id)trailingMarginPropertyNameWithOverridesFromProperties:(id)a0;

@end
