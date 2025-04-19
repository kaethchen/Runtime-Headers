@class SHPalette;

@interface SHPaletteLayer : CALayer

@property (readonly) SHPalette *palette;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPalette:(id)a0;
- (void)setup;

@end
