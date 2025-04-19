@class NSAttributedString, NSString, NSTextField, NSArray, NSFont, NSColor;

@interface UXLabel : UXView <NSAccessibilityStaticText> {
    NSTextField *_concreteTextField;
    NSArray *_verticalDefaultConstraints;
    NSArray *_verticalCenteringConstraints;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSFont *font;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSColor *shadowColor;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long lineBreakMode;
@property (nonatomic) BOOL selectable;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSColor *highlightedTextColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic) BOOL centerVertically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityValue;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)lastBaselineOffsetFromBottom;
- (void)setAccessibilityLabel:(id)a0;
- (void)setAccessibilityRoleDescription:(id)a0;
- (void)setContentCompressionResistancePriority:(float)a0 forOrientation:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;
- (id)textFieldCell;

@end
