@class NSImageView, NSTextField, NSView, NSString, NSLayoutConstraint, NSStackView;

@interface _AdvisoryDisplay : NSView

@property (retain, nonatomic) NSImageView *glyph;
@property (retain, nonatomic) NSView *divider;
@property (retain, nonatomic) NSTextField *descriptionLine1;
@property (retain, nonatomic) NSTextField *descriptionLine2;
@property (retain, nonatomic) NSTextField *descriptionLine3;
@property (retain, nonatomic) NSLayoutConstraint *descriptionLine1HeightConstraint;
@property (retain, nonatomic) NSTextField *legendLine1;
@property (retain, nonatomic) NSTextField *legendLine2;
@property (retain, nonatomic) NSTextField *legendLine3;
@property (retain, nonatomic) NSTextField *descriptionBlock;
@property (retain, nonatomic) NSStackView *lineStack;
@property (retain, nonatomic) NSView *legendBlock;
@property (copy, nonatomic) NSString *axDescription;
@property (retain, nonatomic) NSLayoutConstraint *dividerPaddingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *dividerPaddingConstraint2;
@property (retain, nonatomic) NSLayoutConstraint *legendSpacingConstraint;

+ (void)axDisableChildTree:(id)a0;
+ (id)buildDisplayFor:(id)a0 size:(int)a1;
+ (void)stopAnimationsInTree:(id)a0;

- (void).cxx_destruct;
- (void)setSize:(int)a0;
- (BOOL)accessibilityIsIgnored;
- (void)animateDivider:(id)a0 startBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startPoint:(struct CGPoint { double x0; double x1; })a2 endBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4 delay:(BOOL)a5;
- (void)animateFromOld:(BOOL)a0 completion:(id /* block */)a1;
- (void)animateIn:(id /* block */)a0;
- (void)animateInDivider:(id)a0;
- (void)animateOpacity:(id)a0 startAlpha:(double)a1 endAlpha:(double)a2 duration:(double)a3 delay:(double)a4 timing:(id)a5;
- (void)animateOut:(id /* block */)a0;
- (void)animateOutDivider:(id)a0;
- (void)animateStaggeredFall:(id)a0 distance:(double)a1 startAlpha:(double)a2 endAlpha:(double)a3 initialFadeDelay:(double)a4 staggerDelay:(double)a5 fadeDuration:(double)a6 opacityTiming:(id)a7;
- (void)animateStaggeredSlide:(id)a0 distance:(double)a1 startAlpha:(double)a2 endAlpha:(double)a3 staggerDelay:(double)a4 fadeDuration:(double)a5;
- (void)animateToNew:(BOOL)a0 completion:(id /* block */)a1;
- (void)stopAllAnimations;

@end
