@class ASCOfferTheme, NSString, ASCOfferMetadata, CAAnimation, ASCUILabel, ASCModalViewInteraction, ASCOfferButtonBackgroundImageView, ASCUIViewPropertyAnimator;
@protocol ASCOfferButtonDelegate;

@interface ASCOfferButton : ASCUIControl

@property (retain, nonatomic) NSString *size;
@property (readonly, nonatomic) ASCOfferButtonBackgroundImageView *imageView;
@property (readonly, nonatomic) ASCUILabel *titleLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *titleLabel;
@property (readonly, nonatomic) ASCUILabel *subtitleLabelIfLoaded;
@property (readonly, nonatomic) ASCUILabel *subtitleLabel;
@property (retain, nonatomic) ASCModalViewInteraction *modalInteraction;
@property (retain, nonatomic) CAAnimation *imageAnimation;
@property (retain, nonatomic) ASCUIViewPropertyAnimator *currentTransition;
@property (retain, nonatomic) ASCOfferTheme *theme;
@property (retain, nonatomic) ASCOfferMetadata *metadata;
@property (weak, nonatomic) id<ASCOfferButtonDelegate> delegate;
@property (nonatomic) long long subtitlePosition;
@property (nonatomic, getter=isFixedHeight) BOOL fixedHeight;
@property (nonatomic) BOOL shouldTopAlign;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL shouldExpandBackground;

+ (BOOL)adjustsTitleFontSizeToFitWidthForSize:(id)a0;
+ (id)progressStateImageFittingSize:(id)a0 forTheme:(id)a1 startPercent:(double)a2 endPercent:(double)a3 useFullImageSize:(BOOL)a4;
+ (id)smallTitleFontForText:(id)a0 compatibleWithTraitCollection:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (id)accessibilityChildren;
- (id)accessibilityHelp;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityTitle;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)beginModalStateWithCancelBlock:(id /* block */)a0;
- (id)imageTextStyle:(id)a0;
- (BOOL)canTransitionToMetadata:(id)a0;
- (BOOL)chainTransitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (void)endModalState;
- (id)makeLayout;
- (void)setSubtitleLabelIfLoaded:(id)a0;
- (void)setTitleLabelIfLoaded:(id)a0;
- (BOOL)shouldTransitionImageViewFromMetadata:(id)a0 toMetadata:(id)a1;
- (id)transitionColorForMetadata:(id)a0;
- (id)transitionImageForMetadata:(id)a0;
- (void)transitionToMetadata:(id)a0 scalingDurationBy:(double)a1 withCompletion:(id /* block */)a2;
- (void)transitionToMetadata:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateImageStyleProperties;
- (void)updateLabelStyleProperties;
- (void)updateVisualEffects;

@end
