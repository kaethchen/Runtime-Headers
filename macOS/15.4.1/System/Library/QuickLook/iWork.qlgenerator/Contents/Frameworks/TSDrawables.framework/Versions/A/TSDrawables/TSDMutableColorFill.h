@class TSUColor;

@interface TSDMutableColorFill : TSDColorFill <NSCopying>

@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) double opacity;
@property (nonatomic) double hue;
@property (nonatomic) double saturation;
@property (nonatomic) double brightness;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setColor:(id)a0;
- (void)setBrightness:(double)a0;
- (void)setOpacity:(double)a0;
- (void)setSaturation:(double)a0;
- (void)setHue:(double)a0;

@end
