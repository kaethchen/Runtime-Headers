@class LPImageViewStyle, LPPadding, LPPointUnit, LPImage, NSColor;

@interface LPGlyphStyle : NSObject

@property (retain, nonatomic) LPImage *image;
@property (readonly, retain, nonatomic) LPPadding *padding;
@property (nonatomic) double opacity;
@property (readonly, nonatomic) LPImageViewStyle *imageStyle;
@property (retain, nonatomic) LPPointUnit *baselineOffset;
@property (retain, nonatomic) NSColor *color;

- (id)init;
- (void).cxx_destruct;
- (id)initSearchGlyph;

@end
