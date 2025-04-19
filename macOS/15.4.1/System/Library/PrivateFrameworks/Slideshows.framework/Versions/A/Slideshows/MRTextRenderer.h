@class NSAttributedString;

@interface MRTextRenderer : NSObject {
    NSAttributedString *_cachedText;
    long long _lastGlyphIndex;
    struct CGSize { double width; double height; } _cachedSize;
    struct CGSize { double width; double height; } _originalCacheSize;
}

@property (nonatomic) NSAttributedString *text;
@property (nonatomic) NSAttributedString *placeholderText;
@property (nonatomic) struct CGSize { double width; double height; } resolution;
@property (nonatomic) BOOL truncate;
@property (nonatomic) struct CGSize { double width; double height; } definedSize;
@property (nonatomic) BOOL renderAtDefinedSize;
@property (nonatomic) long long maxNumberOfLines;
@property (nonatomic) double lineSpacingFactor;
@property (nonatomic) struct CGSize { double width; double height; } inset;
@property (nonatomic) double scale;
@property (nonatomic) long long columnCount;
@property (nonatomic) double columnMargin;
@property (nonatomic) double extraFooter;
@property (nonatomic) BOOL centerVertically;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (struct CGSize { double x0; double x1; })shadowOffset;
- (void)clearCache;
- (struct CGContext { } *)retainedContext;
- (double)_scale;
- (void)trimWhitespace;
- (long long)numberOfLines;
- (void)_drawInContext:(struct CGContext { } *)a0 withAttributedString:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 andScale:(double)a3;
- (long long)_glyphIndexForStringIndex:(long long)a0 inString:(id)a1 forSize:(struct CGSize { double x0; double x1; })a2;
- (id)_invertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)_numberOfLinesInString:(id)a0;
- (struct CGContext { } *)_retainedContextFromAttributedString:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })_shadowSizeOffsetForString:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeOfString:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeToRendererAt;
- (double)_strikethroughThinkness:(long long)a0 baselineOffset:(double)a1 lineRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textClipRectForString:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tightFrameOfLineAtIndex:(long long)a0 inString:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2;
- (id)_truncateTextToFitInSize:(struct CGSize { double x0; double x1; })a0 fromCenter:(BOOL)a1 outSize:(struct CGSize { double x0; double x1; } *)a2;
- (void)cacheText;
- (long long)countOfGlyphs;
- (long long)countOfWords;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfLineWithGlyphAtIndex:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (long long)glyphIndexForStringIndex:(long long)a0;
- (id)initWithText:(id)a0 resolution:(struct CGSize { double x0; double x1; })a1;
- (long long)numberOfLinesForTruncatedText;
- (struct CGPoint { double x0; double x1; })originOfGlyphAtIndex:(long long)a0;
- (struct CGPoint { double x0; double x1; })originOfWordAtIndex:(long long)a0;
- (struct { long long x0; long long x1; })rangeOfGlyphsForWordsInRange:(struct { long long x0; long long x1; })a0;
- (struct { long long x0; long long x1; })rangeOfGlyphsOnLine:(long long)a0;
- (struct { long long x0; long long x1; })rangeOfStringForGlyphIndex:(long long)a0;
- (struct { long long x0; long long x1; })rangeOfWordsOnLine:(long long)a0;
- (struct CGContext { } *)retainedContextOfGlyphAtIndex:(long long)a0;
- (struct CGContext { } *)retainedContextOfWordsInRange:(struct { long long x0; long long x1; })a0;
- (struct CGSize { double x0; double x1; })sizeOfContext;
- (struct CGSize { double x0; double x1; })sizeOfText;
- (void)squeezeWidthForLineCount:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tightFrameOfAllLines;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tightFrameOfLineAtIndex:(long long)a0;
- (id)truncatedText;
- (void)updateLineSpacing;

@end
