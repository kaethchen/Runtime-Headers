@class __NSImmutableTextStorage;

@interface NSSingleLineTypesetter : NSATSTypesetter {
    double _lineWidth;
    struct _NSRange { unsigned long long location; unsigned long long length; } _currentBufferRange;
    unsigned short *_glyphs;
    long long *_props;
    unsigned long long *_charIndexes;
    struct { unsigned char _usesScreenFonts : 1; unsigned char _syncAlignmentToDirection : 1; unsigned char _mirrorsTextAlignment : 1; unsigned int _reserved : 29; } _slFlags;
    __NSImmutableTextStorage *_textStorage;
}

+ (void)initialize;
+ (BOOL)_validateAttributes:(id)a0 measuringOnly:(BOOL)a1;
+ (void)performWithSingleLineTypesetterContext:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (BOOL)_mirrorsTextAlignment;
- (id)attributedString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })characterRangeForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })glyphRangeForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 actualCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)getGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 glyphs:(unsigned short *)a1 properties:(long long *)a2 characterIndexes:(unsigned long long *)a3 bidiLevels:(char *)a4;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (id)_textContainerForAttachmentProtocol;
- (id)_textStorageForAttachmentProtocol;
- (BOOL)_usesScreenFonts;
- (id)createRenderingContextForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 typesetterBehavior:(long long)a1 usesScreenFonts:(BOOL)a2 hasStrongRight:(BOOL)a3 maximumWidth:(double)a4;
- (id)createRenderingContextForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 typesetterBehavior:(long long)a1 usesScreenFonts:(BOOL)a2 hasStrongRight:(BOOL)a3 syncDirection:(BOOL)a4 mirrorsTextAlignment:(BOOL)a5 maximumWidth:(double)a6;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 forStartingGlyphAtIndex:(unsigned long long)a3 proposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 lineSpacing:(double)a5 paragraphSpacingBefore:(double)a6 paragraphSpacingAfter:(double)a7;
- (void)insertGlyph:(unsigned int)a0 atGlyphIndex:(unsigned long long)a1 characterIndex:(unsigned long long)a2;
- (void)insertGlyphs:(const unsigned int *)a0 length:(unsigned long long)a1 forStartingGlyphAtIndex:(unsigned long long)a2 characterIndex:(unsigned long long)a3;
- (unsigned long long)layoutOptions;
- (void)setAttachmentSize:(struct CGSize { double x0; double x1; })a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setBidiLevels:(const char *)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setDrawsOutsideLineFragment:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setGlyphs:(const unsigned short *)a0 properties:(const long long *)a1 characterIndexes:(const unsigned long long *)a2 font:(id)a3 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)setIntAttribute:(long long)a0 value:(long long)a1 forGlyphAtIndex:(unsigned long long)a2;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 baselineOffset:(double)a3;
- (void)setLocation:(struct CGPoint { double x0; double x1; })a0 withAdvancements:(const double *)a1 forStartOfGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setNotShownAttribute:(BOOL)a0 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)substituteFontForFont:(id)a0;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withGlyphs:(unsigned int *)a1;
- (BOOL)synchronizesAlignmentToDirection;

@end
