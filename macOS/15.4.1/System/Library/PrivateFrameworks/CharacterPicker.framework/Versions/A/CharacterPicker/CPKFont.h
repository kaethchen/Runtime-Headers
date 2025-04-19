@class NSLock;

@interface CPKFont : NSObject {
    struct __CTFont { } *_privateCTFont;
    NSLock *_privateFontLock;
}

@property (readonly) struct __CTFont { } *ctFont;
@property (nonatomic) double fontSize;
@property (readonly) double ascent;
@property (readonly) double descent;
@property (readonly) BOOL isEmojiFont;

+ (id)defaultFontName;
+ (id)glyphInfoArrayForAttributedString:(id)a0;
+ (void)registerFontRef:(struct __CTFont { } *)a0;
+ (id)sharedFontWithName:(id)a0 size:(double)a1;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)a0 size:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForGlyph:(unsigned short)a0;
- (unsigned short)glyphForString:(id)a0 fallbackFontRef:(const struct __CTFont **)a1;
- (double)_fontSizeForFittingGlyph:(unsigned short)a0 orCharacter:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 preferredFontSize:(double)a3 outDrawingPos:(struct CGPoint { double x0; double x1; } *)a4 outLayoutBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (unsigned short)_glyphForString:(id)a0 fallbackFontName:(id *)a1 fallbackFontRef:(const struct __CTFont **)a2;
- (id)_privateInit;
- (void)_setFontRef:(struct __CTFont { } *)a0;
- (struct __CTFont { } *)copyFontRef;
- (double)fontSizeForFittingGlyph:(unsigned short)a0 orCharacter:(id)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outDrawingPos:(struct CGPoint { double x0; double x1; } *)a3 outLayoutBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (unsigned short)glyphForString:(id)a0 fallbackFontName:(id *)a1;
- (id)initWithFontRef:(struct __CTFont { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutBoundsForGlyph:(unsigned short)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
