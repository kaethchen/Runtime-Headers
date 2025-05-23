@interface MTRGBColor : MTColor

@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;

- (id)description;
- (struct CGColor { } *)CGColor;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)colorDescription;
- (id)_rgbColor;
- (id)_initWithCGColor:(struct CGColor { } *)a0;
- (id)_initWithDescription:(id)a0;
- (id)colorBlendedWithColor:(id)a0;
- (id)colorWithAdditionalAlphaComponent:(double)a0;
- (struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; })sourceOverColorMatrix;

@end
