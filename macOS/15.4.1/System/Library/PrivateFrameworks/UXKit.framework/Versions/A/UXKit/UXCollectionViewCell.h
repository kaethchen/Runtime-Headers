@class NSView;

@interface UXCollectionViewCell : UXCollectionReusableView

@property (readonly, nonatomic) NSView *contentView;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL selectionBorderShouldUsePrimaryColor;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)a0;
- (id)_accessibilityIndexPath;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)accessibilityPerformPress;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilitySelected;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAccessibilitySelected:(BOOL)a0;
- (BOOL)wantsUpdateLayer;
- (id)_accessibilityDefaultRole;
- (void)_axPerformDoubleClick;
- (id)_axSimulateClick:(unsigned long long)a0 withNumberOfClicks:(unsigned long long)a1;
- (id)_dynamicAccessibilityParent;

@end
