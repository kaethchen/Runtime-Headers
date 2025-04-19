@class NSColor, NSString;

@interface TSUColor : NSObject <NSCopying, NSSecureCoding> {
    struct CGColor { } *mCGColor;
}

@property (class, readonly, nonatomic) TSUColor *randomColor;
@property (class, readonly, nonatomic) TSUColor *clearColor;
@property (class, readonly, nonatomic) TSUColor *blackColor;
@property (class, readonly, nonatomic) TSUColor *whiteColor;
@property (class, readonly, nonatomic) TSUColor *grayColor;
@property (class, readonly, nonatomic) TSUColor *redColor;
@property (class, readonly, nonatomic) TSUColor *greenColor;
@property (class, readonly, nonatomic) TSUColor *blueColor;
@property (class, readonly, nonatomic) TSUColor *cyanColor;
@property (class, readonly, nonatomic) TSUColor *yellowColor;
@property (class, readonly, nonatomic) TSUColor *magentaColor;
@property (class, readonly, nonatomic) TSUColor *orangeColor;
@property (class, readonly, nonatomic) TSUColor *purpleColor;
@property (class, readonly, nonatomic) TSUColor *brownColor;
@property (class, readonly, nonatomic) TSUColor *lightGrayColor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGColor { } *CGColor;
@property (readonly, nonatomic) unsigned long long colorRGBSpace;
@property (readonly, nonatomic) double blueComponent;
@property (readonly, nonatomic) double redComponent;
@property (readonly, nonatomic) double greenComponent;
@property (readonly, nonatomic) double alphaComponent;
@property (readonly, nonatomic) NSColor *NSColor;
@property (readonly, nonatomic) NSColor *platformColor;
@property (readonly, nonatomic) TSUColor *grayscaleColor;
@property (readonly, nonatomic) TSUColor *invertedColor;
@property (readonly, nonatomic) double luminance;
@property (readonly, nonatomic) double relativeLuminance;
@property (readonly, nonatomic) BOOL isOpaque;
@property (readonly, nonatomic) BOOL isClear;
@property (readonly, nonatomic) BOOL isNearlyWhite;
@property (readonly, nonatomic) NSString *hexString;

+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorWithPatternImage:(id)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithHexString:(id)a0;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3 targetRGBSpace:(unsigned long long)a4;
+ (id)colorWithNSColor:(id)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 targetRGBSpace:(unsigned long long)a4;
+ (BOOL)improvesContrastWhenColor:(id)a0 displayedOverBackgroundColor:(id)a1 comparedToColor:(id)a2 displayedOverBackgroundColor:(id)a3 inScenario:(unsigned long long)a4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)blendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (double)brightnessComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (double)hueComponent;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithCyan:(double)a0 magenta:(double)a1 yellow:(double)a2 black:(double)a3 alpha:(double)a4;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (double)saturationComponent;
- (id)initWithHexString:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4;
- (BOOL)p_isEqualToColor:(id)a0 withTolerance:(double)a1;
- (void)getRGBAComponents:(double *)a0;
- (id)initWithCGColor:(struct CGColor { } *)a0 colorSpace:(unsigned long long)a1;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3 targetRGBSpace:(unsigned long long)a4;
- (id)initWithNSColor:(id)a0;
- (id)initWithPatternImage:(id)a0;
- (BOOL)isAlmostEqualToColor:(id)a0;
- (BOOL)isEqualWithTolerance:(id)a0;
- (id)newBlendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (double)p_rgbComponentWithIndex:(unsigned char)a0;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)colorByCompositingSourceOverDestinationColor:(id)a0;
- (BOOL)requiresOutlineOnBackgroundWithAppearance:(unsigned long long)a0;
- (double)contrastRatioWithColor:(id)a0;
- (BOOL)improvesContrastWhenDisplayedOverAlternateBackgroundColor:(id)a0 ratherThanStandardBackgroundColor:(id)a1 inScenario:(unsigned long long)a2;
- (id)p_colorForComparingWithColor:(id)a0;

@end
