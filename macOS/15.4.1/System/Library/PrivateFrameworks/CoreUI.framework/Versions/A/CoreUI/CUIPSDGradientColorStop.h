@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {
    struct _psdGradientColor { double red; double green; double blue; double alpha; } gradientColor;
}

+ (void)initialize;
+ (id)colorStopWithLocation:(double)a0 gradientColor:(struct _psdGradientColor { double x0; double x1; double x2; double x3; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(double)a0 gradientColor:(struct _psdGradientColor { double x0; double x1; double x2; double x3; })a1;
- (double)colorLocation;
- (struct _psdGradientColor { double x0; double x1; double x2; double x3; })gradientColor;
- (BOOL)isColorStop;

@end
