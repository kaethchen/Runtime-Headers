@class NSColor, NSString;

@interface OITSUColor : NSObject <NSCopying, NSPasteboardReading> {
    struct CGColor { } *mCGColor;
}

@property (readonly) double whiteComponent;
@property (readonly) double cyanComponent;
@property (readonly) double magentaComponent;
@property (readonly) double yellowComponent;
@property (readonly) double blackComponent;
@property (readonly) struct CGColorSpace { } *CGColorSpace;
@property (readonly) int CGColorSpaceModel;
@property (readonly) struct CGColor { } *CGColor;
@property (readonly, nonatomic) unsigned long long colorRGBSpace;
@property (readonly, nonatomic) double blueComponent;
@property (readonly, nonatomic) double redComponent;
@property (readonly, nonatomic) double greenComponent;
@property (readonly, nonatomic) double alphaComponent;
@property (readonly, nonatomic) NSColor *NSColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)colorWithCalibratedRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithCalibratedWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithCatalogName:(id)a0 colorName:(id)a1;
+ (id)blackColor;
+ (id)blueColor;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithCalibratedHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorWithDeviceCyan:(double)a0 magenta:(double)a1 yellow:(double)a2 black:(double)a3 alpha:(double)a4;
+ (id)colorWithDeviceHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorWithDeviceRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithDeviceWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorWithPatternImage:(id)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)purpleColor;
+ (id)readableTypesForPasteboard:(id)a0;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;
+ (id)colorWithHexString:(id)a0;
+ (id)stringForColor:(id)a0;
+ (id)colorWithBGR:(unsigned int)a0;
+ (id)colorWithBGRValue:(long long)a0;
+ (id)colorWithBinaryRed:(int)a0 green:(int)a1 blue:(int)a2;
+ (id)colorWithBinaryRed:(int)a0 green:(int)a1 blue:(int)a2 alpha:(int)a3;
+ (id)colorWithCsColour:(const struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } *)a0;
+ (id)colorWithEshColor:(const struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; } *)a0;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3 targetRGBSpace:(unsigned long long)a4;
+ (id)colorWithNSColor:(id)a0;
+ (id)colorWithRGBBytes:(unsigned char)a0 green:(unsigned char)a1 blue:(unsigned char)a2;
+ (id)colorWithRGBValue:(long long)a0;
+ (id)colorWithSystemColorID:(int)a0;
+ (id)randomColor;
+ (id)stringForSystemColorID:(int)a0;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)set;
- (void)getWhite:(double *)a0 alpha:(double *)a1;
- (id)blendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (double)brightnessComponent;
- (id)colorWithAlphaComponent:(double)a0;
- (void)getCyan:(double *)a0 magenta:(double *)a1 yellow:(double *)a2 black:(double *)a3 alpha:(double *)a4;
- (void)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (double)hueComponent;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)initWithPasteboardPropertyList:(id)a0 ofType:(id)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (BOOL)isOpaque;
- (double)saturationComponent;
- (id)hexString;
- (id)initWithHexString:(id)a0;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3 colorSpace:(unsigned long long)a4;
- (double)luminance;
- (BOOL)isBlack;
- (struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })ttColor;
- (BOOL)p_isEqualToColor:(id)a0 withTolerance:(double)a1;
- (id)colorWithShadeValue:(double)a0;
- (id)colorWithTintValue:(double)a0;
- (struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })csColour;
- (struct EshColor { struct Data { int x0; union Value { struct RGB { unsigned char x0; unsigned char x1; unsigned char x2; } x0; unsigned short x1; unsigned short x2; struct AdjustedColor { unsigned char x0; unsigned char x1; unsigned char x2 : 4; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; } x3; } x1; } x0; })eshColor;
- (void)getRGBAComponents:(double *)a0;
- (void)getRGBBytes:(char *)a0 green:(char *)a1 blue:(char *)a2;
- (id)grayscaleColor;
- (id)initWithCGColor:(struct CGColor { } *)a0 colorSpace:(unsigned long long)a1;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3 targetRGBSpace:(unsigned long long)a4;
- (id)initWithNSColor:(id)a0;
- (id)initWithPatternImage:(id)a0;
- (id)invertedColor;
- (BOOL)isAlmostEqualToColor:(id)a0;
- (BOOL)isEqualWithTolerance:(id)a0;
- (BOOL)isNearlyWhite;
- (id)newBlendedColorWithFraction:(double)a0 ofColor:(id)a1;
- (id)newSolidColoredBitmap:(struct CGSize { double x0; double x1; })a0;
- (double)p_cmykComponentWithIndex:(unsigned char)a0;
- (double)p_rgbComponentWithIndex:(unsigned char)a0;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)solidColoredPngImage;
- (unsigned int)toBGR;

@end
