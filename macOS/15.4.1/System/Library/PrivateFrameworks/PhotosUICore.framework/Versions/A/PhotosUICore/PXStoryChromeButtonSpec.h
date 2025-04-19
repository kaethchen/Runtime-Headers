@class NSColor, NSDictionary, PXExtendedTraitCollection;

@interface PXStoryChromeButtonSpec : NSObject

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (readonly, nonatomic) double systemImageSizeWithoutBackground;
@property (readonly, nonatomic) double systemImageSizeWithBackground;
@property (readonly, nonatomic) double systemImageWeightWithoutBackground;
@property (readonly, nonatomic) double systemImageWeightWithBackground;
@property (readonly, nonatomic) long long systemImageScale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } badgeImageSize;
@property (readonly, nonatomic) double badgeSystemImageWeight;
@property (readonly, nonatomic) NSColor *defaultTintColor;
@property (readonly, nonatomic) NSColor *defaultFocusedTintColor;
@property (readonly, nonatomic) NSDictionary *labelAttributes;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } labelPadding;
@property (readonly, nonatomic) long long blurEffectStyle;
@property (readonly, nonatomic) long long highlightedBlurEffectStyle;
@property (readonly, nonatomic) long long textOnlyBlurEffectStyle;
@property (readonly, nonatomic) double roundedRectCornerRadius;
@property (readonly, nonatomic) long long systemImageStyle;
@property (readonly, nonatomic) double shadowRadius;
@property (readonly, nonatomic) struct CGSize { double width; double height; } focusedShadowOffset;
@property (readonly, nonatomic) double focusedShadowOpacity;
@property (readonly, nonatomic) BOOL shouldDimWhenHighlighted;
@property (readonly, nonatomic) long long backgroundStyle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0;

@end
