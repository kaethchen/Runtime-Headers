@interface JUCustomView : NSView

@property (readonly, getter=isFlipped) BOOL flipped;
@property BOOL needsLayout;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;

+ (void)initialize;

- (void)layout;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void)layoutIfNeeded;
- (void)layoutSubtreeIfNeeded;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
