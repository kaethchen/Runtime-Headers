@class NSString, GKUITheme, NSImage, NSDictionary;

@interface GKMButtonCell : NSButtonCell {
    NSString *_themeStyle;
    double _drawingFontSize;
    BOOL _specialFocusRingMask;
    int _buttonKind;
}

@property (copy, nonatomic) NSString *themeStyle;
@property (nonatomic) int buttonKind;
@property (retain, nonatomic) GKUITheme *theme;
@property (readonly, nonatomic) NSImage *bezelImage;
@property (readonly, nonatomic) NSDictionary *textAttributes;
@property (retain, nonatomic) NSImage *normalBezelImage;
@property (retain, nonatomic) NSImage *alternateBezelImage;
@property (retain, nonatomic) NSImage *pressedBezelImage;
@property (retain, nonatomic) NSImage *disabledBezelImage;
@property (retain, nonatomic) NSImage *pressedImage;
@property (retain, nonatomic) NSImage *pressedAlternateImage;
@property (retain, nonatomic) NSImage *disabledImage;
@property (retain, nonatomic) NSDictionary *normalTextAttributes;
@property (retain, nonatomic) NSDictionary *alternateTextAttributes;
@property (retain, nonatomic) NSDictionary *pressedTextAttributes;
@property (retain, nonatomic) NSDictionary *disabledTextAttributes;
@property (nonatomic) double minFontSize;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultThemeStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)_textAttributes;
- (void)setControlView:(id)a0;
- (BOOL)_shouldDrawTextWithDisabledAppearance;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bezelRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textAttributes;
- (void)resetThemeStyle;
- (void)setupForSmallOnHeaderBackground;
- (void)_preeffectBaseImage:(id *)a0 state:(void *)a1 backgroundStyle:(void *)a2;
- (BOOL)_shouldUseStyledTextInView:(id)a0;
- (id)bezelImage;
- (void)setupForFacebookLike;
- (void)setupForNavbar;
- (void)setupForNavbarBack;
- (void)setupForNavbarBlue;
- (void)setupForNormal;
- (void)setupForNormalOnHeaderBackground;
- (void)setupForSmall;
- (void)setupForSmallAlternate;
- (void)setupForSmallAlternate2;
- (void)setupForSmallAlternate2OnHeaderBackground;
- (void)setupForSmallAlternateOnHeaderBackground;
- (void)setupForSmallOnHeaderBackgroundWithNormalFont;
- (void)setupForSmallWithNormalFont;
- (void)setupForTitleOnFelt;
- (void)setupNormalFontWithHeaderBackground:(BOOL)a0 smallFont:(BOOL)a1;

@end
