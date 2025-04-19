@class NSLayoutGuide, NSAttributedString, NSString;

@interface VUIContentRatingTextBadgeView : NSView

@property (retain, nonatomic) NSLayoutGuide *contentGuide;
@property (copy, nonatomic) NSAttributedString *contentRatingAttributedText;
@property (copy, nonatomic) NSString *contentRatingText;

+ (id)_attributedRatingTextForText:(id)a0 color:(id)a1;
+ (id)_badgeImageWithAttributedRatingText:(id)a0 andColor:(id)a1;
+ (struct CGSize { double x0; double x1; })_badgeSizeForAttributedRatingText:(id)a0;
+ (void)_drawBadgeWithAttributedRatingText:(id)a0 inContext:(struct CGContext { } *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 color:(id)a3;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_paddingEdgeInsets;

- (void).cxx_destruct;
- (id)firstBaselineAnchor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)lastBaselineAnchor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_intrinsicContentSize;
- (void)_updateContentRatingAttributedText:(id)a0;
- (id)initWithBaselineOffsetFromBottom:(double)a0;

@end
