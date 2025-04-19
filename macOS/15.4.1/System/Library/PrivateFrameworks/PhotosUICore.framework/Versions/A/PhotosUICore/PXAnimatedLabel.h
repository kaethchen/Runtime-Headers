@class NSString, PXAnimatedCounter, NSLayoutConstraint, NSFont, UXLabel;

@interface PXAnimatedLabel : UXView

@property (retain) PXAnimatedCounter *counter;
@property (retain) UXLabel *label;
@property (readonly) NSLayoutConstraint *counterWidthConstraint;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateConstraintsForText;
- (void)setText:(id)a0 withAnimationStyle:(long long)a1 completionBlock:(id /* block */)a2;

@end
