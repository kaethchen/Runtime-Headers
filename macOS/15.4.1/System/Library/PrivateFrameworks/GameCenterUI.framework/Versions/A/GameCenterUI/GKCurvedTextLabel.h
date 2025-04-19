@class NSFont, NSDictionary, NSTextStorage, NSTextContainer, NSLayoutManager, NSColor;

@interface GKCurvedTextLabel : NSTextField {
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _textWidth;
    double _cachedLeadingAngle;
    double _cachedTrailingAngle;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedGlyphsBoundingRect;
    struct CGSize { double width; double height; } _cachedSize;
    BOOL _cachedSizeIsValid;
    NSColor *_textColor;
    NSFont *_font;
    BOOL _hasMonospacedNumbers;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) BOOL interior;
@property (nonatomic) double centerAngle;
@property (nonatomic) double maxAngularWidth;
@property (readonly, copy, nonatomic) NSDictionary *textAttributes;
@property (readonly, nonatomic) double linearWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textBoundingRect;
@property (readonly, nonatomic) double textLeadingAngle;
@property (readonly, nonatomic) double textTrailingAngle;

- (id)init;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (id)attributedText;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (void)setTextColor:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)text;
- (id)textColor;
- (void)setText:(id)a0;
- (void)_updateTextColor;
- (void)setAttributedText:(id)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_distance;
- (struct __CTLine { } *)_newLineFromDrawableTextStorage;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_drawableCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)_enumerateTransformsForDrawableCharacters:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_glyphsBoundingRect;
- (struct CGPoint { double x0; double x1; })_offsetOfBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateMaxSize;
- (void)invalidateCachedSize;

@end
