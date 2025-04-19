@class NSImageView, NSVisualEffectView;

@interface SOLabeledBadgeWindowController : NSWindowController

@property long long arrowOrientation;
@property long long badgePresentation;
@property NSImageView *colorFillView;
@property (readonly) NSVisualEffectView *badgeView;

+ (id)_badgeImageWithDownArrow;
+ (id)_badgeImageWithRightArrow;
+ (id)_borderedBadgeImageWithNoArrow;
+ (id)_borderlessBadgeImageWithNoArrow;
+ (id)_increaseContrastFillColor;
+ (id)_reduceTransparencyFillColor;
+ (id)materialViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)_highContrastFillImageForOrientation:(long long)a0 presentation:(long long)a1;
- (id)_maskImageForOrientation:(long long)a0 presentation:(long long)a1;
- (void)_setHighContrastFill;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 arrowOrientation:(long long)a1 presentation:(long long)a2;

@end
