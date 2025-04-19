@class CAGradientLayer, NSString, PRMonogramColor, NSColor;

@interface PRMonogram : NSObject

@property (class, readonly, nonatomic) CAGradientLayer *plateOverlayLayer;

@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long fontIndex;
@property (retain, nonatomic) NSColor *color;
@property (retain, nonatomic) PRMonogramColor *monogramColor;
@property (readonly, nonatomic) NSColor *plateFlatColor;
@property (readonly, nonatomic) NSColor *plateGradientStartColor;
@property (readonly, nonatomic) NSColor *plateGradientEndColor;
@property (readonly, nonatomic) NSColor *plateSelectedActiveColor;
@property (readonly, nonatomic) NSColor *plateSelectedInactiveColor;
@property (readonly, nonatomic) NSColor *plateSelectedActiveTextColor;

+ (id)fontNames;
+ (id)monogram;
+ (id)_fontSpecs;
+ (unsigned long long)countOfFonts;
+ (id)fontForIndex:(unsigned long long)a0 plateDiameter:(double)a1;
+ (double)kerningForFontIndex:(unsigned long long)a0 fontSize:(double)a1;
+ (id)monogramWithData:(id)a0;
+ (void)updatePlateOverlayLayer:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)_initWithData:(id)a0;
- (id)snapshotWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (BOOL)_renderTextInContext:(struct CGContext { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_takeValuesFromDataRepresentation:(id)a0;
- (void)appendToRecipe:(id)a0 text:(id)a1;
- (void)appendToRecipe:(id)a0 text:(id)a1 fontIndex:(unsigned char)a2;
- (id)dataRepresentationWithVersion:(unsigned char)a0;
- (id)initWithText:(id)a0 fontIndex:(unsigned long long)a1 monogramColor:(id)a2;
- (void)setFontIndexToUnsupportedValue;
- (id)stringAttributesForDiameter:(double)a0;

@end
