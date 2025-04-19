@class NSTextField, MarqueeView, DualMaskedView, NSColor;

@interface AMPScrollingLabel : NSControl

@property (retain, nonatomic) DualMaskedView *dualMask;
@property (retain, nonatomic) MarqueeView *marquee;
@property (retain, nonatomic) NSTextField *actualLabel;
@property (copy) NSColor *textColor;

- (void).cxx_destruct;
- (id)stringValue;
- (void)setStringValue:(id)a0;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)attributedStringValue;
- (double)baselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAttributedStringValue:(id)a0;
- (void)setFont:(id)a0;

@end
