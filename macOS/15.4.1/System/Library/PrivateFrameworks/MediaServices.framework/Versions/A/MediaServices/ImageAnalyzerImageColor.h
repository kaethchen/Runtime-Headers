@interface ImageAnalyzerImageColor : NSObject

@property (class, readonly, nonatomic) ImageAnalyzerImageColor *defaultColors;

@property (readonly, nonatomic) struct CGColor { } *backgroundColor;
@property (readonly, nonatomic) struct CGColor { } *primaryTextColor;
@property (readonly, nonatomic) struct CGColor { } *secondaryTextColor;
@property (readonly, nonatomic) struct CGColor { } *tertiaryTextColor;
@property (readonly, nonatomic) struct CGColor { } *quaternaryTextColor;
@property (readonly, nonatomic) struct CGColor { } *primaryDropShadowColor;
@property (readonly, nonatomic) struct CGColor { } *secondaryDropShadowColor;
@property (readonly, nonatomic) struct CGColor { } *tertiaryDropShadowColor;
@property (readonly, nonatomic) struct CGColor { } *quarnaryDropShadowColor;
@property (readonly, nonatomic) BOOL isBackgroundLight;
@property (readonly, nonatomic) BOOL isPrimaryColorLight;
@property (readonly, nonatomic) BOOL isSecondaryColorLight;

+ (struct CGColor { } *)_colorFromITColor:(struct ITColor { double x0; double x1; double x2; double x3; })a0;
+ (id)analyzeImage:(struct CGImage { } *)a0 error:(id *)a1;
+ (struct CGContext { } *)createContextForImage:(struct CGImage { } *)a0;
+ (id)determineColors:(struct CGImage { } *)a0 error:(id *)a1;
+ (id)imageColorWithAnalyzedImageColors:(const struct AnalyzedImageColors { struct ITColor { double x0; double x1; double x2; double x3; } x0; struct ITColor { double x0; double x1; double x2; double x3; } x1; struct ITColor { double x0; double x1; double x2; double x3; } x2; struct ITColor { double x0; double x1; double x2; double x3; } x3; struct ITColor { double x0; double x1; double x2; double x3; } x4; struct ITColor { double x0; double x1; double x2; double x3; } x5; struct ITColor { double x0; double x1; double x2; double x3; } x6; struct ITColor { double x0; double x1; double x2; double x3; } x7; struct ITColor { double x0; double x1; double x2; double x3; } x8; double x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; } *)a0;
+ (id)imageColorWithImageAnalyzer:(const void *)a0;

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)colorString:(struct CGColor { } *)a0;
- (id)initWithAnalyzedImageColors:(const struct AnalyzedImageColors { struct ITColor { double x0; double x1; double x2; double x3; } x0; struct ITColor { double x0; double x1; double x2; double x3; } x1; struct ITColor { double x0; double x1; double x2; double x3; } x2; struct ITColor { double x0; double x1; double x2; double x3; } x3; struct ITColor { double x0; double x1; double x2; double x3; } x4; struct ITColor { double x0; double x1; double x2; double x3; } x5; struct ITColor { double x0; double x1; double x2; double x3; } x6; struct ITColor { double x0; double x1; double x2; double x3; } x7; struct ITColor { double x0; double x1; double x2; double x3; } x8; double x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; } *)a0;
- (id)initWithImageAnalyzer:(const void *)a0;
- (BOOL)isEqualToImageColor:(id)a0;

@end
