@class WDDocument, WDCharacterPropertiesValues;

@interface WDCharacterProperties : NSObject {
    BOOL mOriginal;
    BOOL mTracked;
    BOOL mResolved;
    WDCharacterPropertiesValues *mOriginalProperties;
    WDCharacterPropertiesValues *mTrackedProperties;
}

@property (readonly, weak) WDDocument *document;

+ (SEL)fontOverriddenSelectorForFontType:(int)a0;
+ (SEL)fontSelectorForFontType:(int)a0;
+ (SEL)setFontSelectorForFontType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setHidden:(int)a0;
- (id)reflection;
- (short)position;
- (void)setPosition:(short)a0;
- (id)color;
- (void)setColor:(id)a0;
- (short)spacing;
- (id)font;
- (unsigned short)fontSize;
- (int)highlightColor;
- (void)setFont:(id)a0;
- (void)setFontSize:(unsigned short)a0;
- (void)setShadow:(int)a0;
- (void)setSpacing:(short)a0;
- (void)setStrikeThrough:(int)a0;
- (void)setSymbolFont:(id)a0;
- (int)shadow;
- (int)strikeThrough;
- (id)symbolFont;
- (int)hidden;
- (void)setHighlightColor:(int)a0;
- (int)deleted;
- (void)setRightToLeft:(int)a0;
- (int)edited;
- (int)rightToLeft;
- (void)setDeleted:(int)a0;
- (void)setEdited:(int)a0;
- (int)bold;
- (void)setBold:(int)a0;
- (void)setUnderline:(int)a0;
- (int)underline;
- (BOOL)isHighlight;
- (id)initWithDocument:(id)a0;
- (int)outline;
- (id)border;
- (id)outlineColor;
- (void)setOutline:(int)a0;
- (void)setOutlineColor:(id)a0;
- (void)setVerticalAlign:(int)a0;
- (int)verticalAlign;
- (BOOL)isOffsetToPictureDataOverridden;
- (unsigned short)kerning;
- (int)objectIDForOle2;
- (BOOL)formattingChangedDifferentFrom:(id)a0;
- (int)imprint;
- (BOOL)isDoubleStrikeThroughOverridden;
- (int)italicForBiText;
- (void)setFarEastFont:(id)a0;
- (void)setResolveMode:(int)a0;
- (id)shading;
- (unsigned short)symbolCharacter;
- (void)applyPropertiesFrom:(id)a0 ifOverriddenIn:(id)a1;
- (id)baseStyle;
- (int)boldForBiText;
- (int)bracketTwoLinesInOne;
- (int)caps;
- (int)charPositionOfPictureBulletInBookmark;
- (void)clearBaseStyle;
- (BOOL)compressHorizontalInVertical;
- (void)copyPropertiesInto:(id)a0;
- (id)deletionDate;
- (BOOL)deletionDifferentFrom:(id)a0;
- (BOOL)deletionDifferentFrom:(id)a0 mode:(int)a1;
- (int)doubleStrikeThrough;
- (id)editDate;
- (BOOL)editDifferentFrom:(id)a0;
- (BOOL)editDifferentFrom:(id)a0 mode:(int)a1;
- (BOOL)embeddedObject;
- (int)embossed;
- (int)emphasisMark;
- (id)extendedFont;
- (id)farEastFont;
- (id)fontForFontType:(int)a0;
- (int)fontHint;
- (unsigned short)fontSizeForBiText;
- (int)formattingChanged;
- (BOOL)formattingChangedDifferentFrom:(id)a0 mode:(int)a1;
- (BOOL)horizontalInVertical;
- (unsigned short)indexToAuthorIDOfDeletion;
- (unsigned short)indexToAuthorIDOfEdit;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (BOOL)isAnythingOverridden;
- (BOOL)isAnythingOverriddenIn:(id)a0;
- (BOOL)isBaseStyleOverridden;
- (BOOL)isBoldForBiTextOverridden;
- (BOOL)isBoldOverridden;
- (BOOL)isBooleanProbablyDifferent:(unsigned char)a0 than:(unsigned char)a1;
- (BOOL)isBorderOverridden;
- (BOOL)isBracketTwoLinesInOneOverridden;
- (BOOL)isCapsOverridden;
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
- (BOOL)isColorAuto;
- (BOOL)isColorAutoOverridden;
- (BOOL)isColorOverridden;
- (BOOL)isCompressHorizontalInVerticalOverridden;
- (BOOL)isDeletedOverridden;
- (BOOL)isDeletionDateOverridden;
- (BOOL)isEditDateOverridden;
- (BOOL)isEditedOverridden;
- (BOOL)isEmbeddedObjectOverridden;
- (BOOL)isEmbossedOverridden;
- (BOOL)isEmphasisMarkOverridden;
- (BOOL)isExtendedFontOverridden;
- (BOOL)isFarEastFontOverridden;
- (BOOL)isFontHintOverridden;
- (BOOL)isFontOverridden;
- (BOOL)isFontOverriddenForFontType:(int)a0;
- (BOOL)isFontSizeForBiTextOverridden;
- (BOOL)isFontSizeOverridden;
- (BOOL)isFormattingChangedOverridden;
- (BOOL)isHiddenOverridden;
- (BOOL)isHighlightColorOverridden;
- (BOOL)isHighlightOverridden;
- (BOOL)isHorizontalInVerticalOverridden;
- (BOOL)isImprintOverridden;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (BOOL)isItalicForBiTextOverridden;
- (BOOL)isItalicOverridden;
- (BOOL)isKerningOverridden;
- (BOOL)isLanguageForBiTextOverridden;
- (BOOL)isLanguageForDefaultTextOverridden;
- (BOOL)isLanguageForFarEastOverridden;
- (BOOL)isLigatureOverridden;
- (BOOL)isListCharacterPictureBullet;
- (BOOL)isListCharacterPictureBulletOverridden;
- (BOOL)isLowerCase;
- (BOOL)isLowerCaseOverridden;
- (BOOL)isObjectIDForOle2Overridden;
- (BOOL)isOle2Overridden;
- (BOOL)isOutline2010WidthOverridden;
- (BOOL)isOutlineColorOverridden;
- (BOOL)isOutlineOverridden;
- (BOOL)isPositionOverridden;
- (BOOL)isReflectionOverridden;
- (BOOL)isRightToLeftOverridden;
- (BOOL)isShadingOverridden;
- (BOOL)isShadow2010OpacityOverridden;
- (BOOL)isShadow2010Overridden;
- (BOOL)isShadowOverridden;
- (BOOL)isSmallCapsOverridden;
- (BOOL)isSpacingOverridden;
- (BOOL)isSpecialCharacter;
- (BOOL)isSpecialCharacterOverridden;
- (BOOL)isStrikeThroughOverridden;
- (BOOL)isSymbolCharacterOverridden;
- (BOOL)isSymbolFontOverridden;
- (BOOL)isTextScaleOverridden;
- (BOOL)isTwoLinesInOneOverridden;
- (BOOL)isUnderlineColorOverridden;
- (BOOL)isUnderlineOverridden;
- (BOOL)isUseCsFontOverridden;
- (BOOL)isVerticalAlignOverridden;
- (int)italic;
- (int)languageForBiText;
- (int)languageForDefaultText;
- (int)languageForFarEast;
- (int)ligature;
- (id)mutableBorder;
- (id)mutableShading;
- (void)negateFormattingChangesWithDefaults:(id)a0;
- (int)offsetToPictureData;
- (BOOL)ole2;
- (float)outline2010Width;
- (void)removeEmptyFormattingChanges:(id)a0;
- (int)resolveMode;
- (int)reverseBooleanProperty:(int)a0;
- (void)setBaseStyle:(id)a0;
- (void)setBoldForBiText:(int)a0;
- (void)setBracketTwoLinesInOne:(int)a0;
- (void)setCaps:(int)a0;
- (void)setCharPositionOfPictureBulletInBookmark:(int)a0;
- (void)setColorAuto:(BOOL)a0;
- (void)setCompressHorizontalInVertical:(BOOL)a0;
- (void)setDeletionDate:(id)a0;
- (void)setDoubleStrikeThrough:(int)a0;
- (void)setEditDate:(id)a0;
- (void)setEmbeddedObject:(BOOL)a0;
- (void)setEmbossed:(int)a0;
- (void)setEmphasisMark:(int)a0;
- (void)setExtendedFont:(id)a0;
- (void)setFont:(id)a0 forFontType:(int)a1;
- (void)setFontHint:(int)a0;
- (void)setFontSizeForBiText:(unsigned short)a0;
- (void)setFormattingChanged:(int)a0;
- (void)setHighlight:(BOOL)a0;
- (void)setHorizontalInVertical:(BOOL)a0;
- (void)setImprint:(int)a0;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)a0;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)a0;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)a0;
- (void)setItalic:(int)a0;
- (void)setItalicForBiText:(int)a0;
- (void)setKerning:(unsigned short)a0;
- (void)setLanguageForBiText:(int)a0;
- (void)setLanguageForDefaultText:(int)a0;
- (void)setLanguageForFarEast:(int)a0;
- (void)setLigature:(int)a0;
- (void)setListCharacterPictureBullet:(BOOL)a0;
- (void)setLowerCase:(BOOL)a0;
- (void)setObjectIDForOle2:(int)a0;
- (void)setOffsetToPictureData:(int)a0;
- (void)setOle2:(BOOL)a0;
- (void)setOutline2010Width:(float)a0;
- (void)setReflection:(id)a0;
- (void)setShadow2010:(id)a0;
- (void)setShadow2010Opacity:(float)a0;
- (void)setSmallCaps:(int)a0;
- (void)setSpecialCharacter:(BOOL)a0;
- (void)setSymbolCharacter:(unsigned short)a0;
- (void)setTextScale:(unsigned short)a0;
- (void)setTwoLinesInOne:(BOOL)a0;
- (void)setUnderlineColor:(id)a0;
- (void)setUseCsFont:(int)a0;
- (id)shadow2010;
- (float)shadow2010Opacity;
- (int)smallCaps;
- (unsigned short)textScale;
- (BOOL)twoLinesInOne;
- (id)underlineColor;
- (int)useCsFont;

@end
