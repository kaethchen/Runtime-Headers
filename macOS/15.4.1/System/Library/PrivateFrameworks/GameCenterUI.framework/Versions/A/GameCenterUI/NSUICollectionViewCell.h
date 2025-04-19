@class NSView;

@interface NSUICollectionViewCell : NSUICollectionReusableView

@property (readonly, nonatomic) NSView *contentView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (id)accessibilitySelectedAttribute;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)_gksetContentViewBackgroundColor:(id)a0;

@end
