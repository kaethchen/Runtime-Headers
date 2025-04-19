@class NSLayoutManager, NSArray, NSDictionary, NSTextContainer, NSParagraphStyle, NSAttributedString;

@interface NSTypesetter : NSObject {
    void *_reserved;
    NSParagraphStyle *_defaultParagraphStyle;
}

@property (class, readonly) NSTypesetter *sharedSystemTypesetter;
@property (class, readonly) long long defaultTypesetterBehavior;

@property BOOL usesFontLeading;
@property long long typesetterBehavior;
@property float hyphenationFactor;
@property double lineFragmentPadding;
@property BOOL bidiProcessingEnabled;
@property NSAttributedString *attributedString;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } paragraphGlyphRange;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } paragraphSeparatorGlyphRange;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } paragraphCharacterRange;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } paragraphSeparatorCharacterRange;
@property (readonly, copy) NSDictionary *attributesForExtraLineFragment;
@property (readonly) NSLayoutManager *layoutManager;
@property (readonly) NSArray *textContainers;
@property (readonly) NSTextContainer *currentTextContainer;
@property (readonly, copy) NSParagraphStyle *currentParagraphStyle;

+ (void)initialize;
+ (long long)defaultStringDrawingTypesetterBehavior;
+ (BOOL)_usesATSTypesetter;
+ (unsigned long long)defaultLineBreakStrategy;
+ (struct CGSize { double x0; double x1; })printingAdjustmentInLayoutManager:(id)a0 forNominallySpacedGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 packedGlyphs:(const char *)a2 count:(unsigned long long)a3;
+ (id)sharedSystemTypesetterForBehavior:(long long)a0;

- (void)dealloc;
- (void)finalize;
- (id)defaultParagraphStyle;
- (void)setApplicationFrameworkContext:(long long)a0;
- (double)baselineOffsetInLayoutManager:(id)a0 glyphIndex:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })glyphRangeForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)setDefaultParagraphStyle:(id)a0;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 glyphs:(unsigned short *)a1 properties:(long long *)a2 characterIndexes:(unsigned long long *)a3 bidiLevels:(char *)a4;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)a0 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_layoutGlyphsInLayoutManager:(id)a0 startingAtGlyphIndex:(unsigned long long)a1 maxNumberOfLineFragments:(unsigned long long)a2 maxCharacterIndex:(unsigned long long)a3 nextGlyphIndex:(unsigned long long *)a4 nextCharacterIndex:(unsigned long long *)a5;
- (struct { struct *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; void /* function */ *x5; void /* function */ *x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 2; unsigned char x11 : 1; unsigned char x12 : 3; unsigned char x13 : 7; } x19; void *x20[0]; } *)_allocateAuxData;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (long long)_baseWritingDirection;
- (id)_ellipsisFontForFont:(id)a0;
- (BOOL)_forceOriginalFontBaseline;
- (struct { struct *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; void /* function */ *x5; void /* function */ *x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 2; unsigned char x11 : 1; unsigned char x12 : 3; unsigned char x13 : 7; } x19; void *x20[0]; } *)_getAuxData;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 andParagraphSeparatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 charactarIndex:(unsigned long long)a2 layoutManager:(id)a3 string:(id)a4;
- (BOOL)_isLineBreakModeOverridden;
- (union { struct { double x0; double x1; double x2; long long x3; } x0; struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } x1; } *)_lineFragmentRectForProposedRectArgs;
- (void)_setForceOriginalFontBaseline:(BOOL)a0;
- (void)_setLineBreakModeOverridden:(BOOL)a0;
- (void)_updateParagraphStyleCache:(id)a0;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)a0;
- (long long)applicationFrameworkContext;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)a0;
- (void)beginParagraph;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)endParagraph;
- (BOOL)finalizeLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 baselineOffset:(inout double *)a2 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 glyphs:(unsigned int *)a1 characterIndexes:(unsigned long long *)a2 glyphInscriptions:(unsigned long long *)a3 elasticBits:(BOOL *)a4 bidiLevels:(char *)a5;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forParagraphSeparatorGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 atProposedOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 forStartingGlyphAtIndex:(unsigned long long)a3 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 lineSpacing:(double)a5 paragraphSpacingBefore:(double)a6 paragraphSpacingAfter:(double)a7;
- (void)insertGlyph:(unsigned int)a0 atGlyphIndex:(unsigned long long)a1 characterIndex:(unsigned long long)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })layoutCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forLayoutManager:(id)a1 maximumNumberOfLineFragments:(unsigned long long)a2;
- (void)layoutGlyphsInLayoutManager:(id)a0 startingAtGlyphIndex:(unsigned long long)a1 maxNumberOfLineFragments:(unsigned long long)a2 nextGlyphIndex:(unsigned long long *)a3;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)a0 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)a0 withProposedLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setAttachmentSize:(struct CGSize { double x0; double x1; })a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBidiLevels:(const char *)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setDrawsOutsideLineFragment:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setHardInvalidation:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 baselineOffset:(double)a3;
- (void)setLocation:(struct CGPoint { double x0; double x1; })a0 withAdvancements:(const double *)a1 forStartOfGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setNotShownAttribute:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setParagraphGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 separatorGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setTightenThresholdForTruncation:(float)a0;
- (id)substituteFontForFont:(id)a0;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withGlyphs:(unsigned int *)a1;
- (id)textTabForGlyphLocation:(double)a0 writingDirection:(long long)a1 maxLocation:(double)a2;
- (float)tightenThresholdForTruncation;

@end
