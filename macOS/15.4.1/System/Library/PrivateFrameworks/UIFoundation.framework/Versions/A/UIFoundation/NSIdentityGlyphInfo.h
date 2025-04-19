@class NSFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo <NSSecureCoding> {
    NSFont *_font;
    unsigned int _glyph;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)glyphInfoWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_font;
- (unsigned int)_glyph;
- (unsigned short)glyph;
- (unsigned int)_glyphForFont:(id)a0 baseString:(id)a1;
- (id)initWithGlyph:(unsigned int)a0 forFont:(id)a1 baseString:(id)a2;

@end
