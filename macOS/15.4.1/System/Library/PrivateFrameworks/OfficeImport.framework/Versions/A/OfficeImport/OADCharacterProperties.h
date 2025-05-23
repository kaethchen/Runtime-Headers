@class OADHyperlink, NSString, NSArray, OADFill, OADColor, OADStroke;

@interface OADCharacterProperties : OADProperties <OADEffectsParent> {
    NSString *mLatinFont;
    NSString *mEastAsianFont;
    NSString *mBidiFont;
    NSString *mHAnsiFont;
    NSString *mSymbolFont;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    OADFill *mFill;
    OADStroke *mStroke;
    NSArray *mEffects;
    OADFill *mUnderlineFill;
    OADStroke *mUnderlineStroke;
    OADColor *mHighlight;
    float mOpacity;
    float mSize;
    float mSpacing;
    float mBaseline;
    unsigned char mUnderlineType;
    unsigned char mFormatType;
    unsigned char mFormatKerningType;
    unsigned char mStrikeThroughType;
    unsigned char mCaps;
    int mLanguage;
    unsigned char mHasUnderlineFill : 1;
    unsigned char mHasUnderlineStroke : 1;
    unsigned char mHasHighlight : 1;
    unsigned char mHasOpacity : 1;
    unsigned char mHasIsBold : 1;
    unsigned char mIsBold : 1;
    unsigned char mHasIsItalic : 1;
    unsigned char mIsItalic : 1;
    unsigned char mHasUnderlineType : 1;
    unsigned char mHasFormatType : 1;
    unsigned char mHasFormatKerningType : 1;
    unsigned char mHasStrikeThroughType : 1;
    unsigned char mHasSize : 1;
    unsigned char mHasSpacing : 1;
    unsigned char mHasKerning : 1;
    unsigned char mHasIsVerticalText : 1;
    unsigned char mIsVerticalText : 1;
    unsigned char mHasIsRightToLeft : 1;
    unsigned char mIsRightToLeft : 1;
    unsigned char mHasBaseline : 1;
    unsigned char mHasIsHorizontalNormalized : 1;
    unsigned char mIsHorizontalNormalized : 1;
    unsigned char mHasCaps : 1;
    unsigned char mHasLanguage : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setSize:(float)a0;
- (float)size;
- (int)language;
- (void)setLanguage:(int)a0;
- (float)opacity;
- (float)spacing;
- (id)fill;
- (void)setOpacity:(float)a0;
- (void)setSpacing:(float)a0;
- (void)setSymbolFont:(id)a0;
- (id)stroke;
- (id)symbolFont;
- (BOOL)hasBaseline;
- (BOOL)hasFill;
- (float)baseline;
- (BOOL)hasStroke;
- (id)highlight;
- (void)setBaseline:(float)a0;
- (id)effects;
- (void)setEffects:(id)a0;
- (BOOL)hasEffects;
- (void)setFill:(id)a0;
- (BOOL)hasSize;
- (void)setIsBold:(BOOL)a0;
- (id)initWithDefaults;
- (unsigned char)formatType;
- (BOOL)hasFormatType;
- (BOOL)hasLanguage;
- (void)setFormatType:(unsigned char)a0;
- (BOOL)isRightToLeft;
- (void)setIsRightToLeft:(BOOL)a0;
- (BOOL)isBold;
- (void)setStroke:(id)a0;
- (BOOL)hasCaps;
- (id)underlineStroke;
- (id)bidiFont;
- (unsigned char)caps;
- (id)clickHyperlink;
- (id)eastAsianFont;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (unsigned char)formatKerningType;
- (id)hansiFont;
- (BOOL)hasBidiFont;
- (BOOL)hasEastAsianFont;
- (BOOL)hasFormatKerningType;
- (BOOL)hasHAnsiFont;
- (BOOL)hasHighlight;
- (BOOL)hasIsBold;
- (BOOL)hasIsHorizontalNormalized;
- (BOOL)hasIsItalic;
- (BOOL)hasIsRightToLeft;
- (BOOL)hasIsVerticalText;
- (BOOL)hasLatinFont;
- (BOOL)hasOpacity;
- (BOOL)hasSpacing;
- (BOOL)hasStrikeThroughType;
- (BOOL)hasSymbolFont;
- (BOOL)hasUnderlineFill;
- (BOOL)hasUnderlineStroke;
- (BOOL)hasUnderlineType;
- (id)hoverHyperlink;
- (BOOL)isAnyCharacterPropertyOverridden;
- (BOOL)isAnythingOverridden;
- (BOOL)isHorizontalNormalized;
- (BOOL)isItalic;
- (BOOL)isVerticalText;
- (id)latinFont;
- (void)overrideWithCharacterProperties:(id)a0;
- (void)overrideWithProperties:(id)a0;
- (void)removeUnnecessaryOverrides;
- (void)setBidiFont:(id)a0;
- (void)setCaps:(unsigned char)a0;
- (void)setClickHyperlink:(id)a0;
- (void)setEastAsianFont:(id)a0;
- (void)setFormatKerningType:(unsigned char)a0;
- (void)setHAnsiFont:(id)a0;
- (void)setHighlight:(id)a0;
- (void)setHoverHyperlink:(id)a0;
- (void)setIsHorizontalNormalized:(BOOL)a0;
- (void)setIsItalic:(BOOL)a0;
- (void)setIsVerticalText:(BOOL)a0;
- (void)setLatinFont:(id)a0;
- (void)setStrikeThroughType:(unsigned char)a0;
- (void)setUnderlineFill:(id)a0;
- (void)setUnderlineStroke:(id)a0;
- (void)setUnderlineType:(unsigned char)a0;
- (unsigned char)strikeThroughType;
- (id)underlineFill;
- (unsigned char)underlineType;

@end
