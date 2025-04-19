@interface AXVLabeledBadgeView : NSVisualEffectView

@property (nonatomic) unsigned long long _arrowOrientation;
@property (nonatomic) unsigned long long _badgePresentation;

+ (id)_badgeImageWithRightArrow;
+ (id)_borderedBadgeImageWithNoArrow;
+ (id)_borderlessBadgeImageWithNoArrow;

- (id)_maskImageForOrientation:(unsigned long long)a0 presentation:(unsigned long long)a1;
- (void)_setupNumberSubviewWithString:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 label:(id)a1 arrowOrientation:(unsigned long long)a2 badgePresentation:(unsigned long long)a3;

@end
