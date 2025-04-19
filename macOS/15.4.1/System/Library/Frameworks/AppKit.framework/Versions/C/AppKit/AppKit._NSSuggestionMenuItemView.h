@interface AppKit._NSSuggestionMenuItemView : NSTableCellView {
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ imageWidth;
    void /* unknown type, empty encoding */ primaryText;
    void /* unknown type, empty encoding */ secondaryText;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ secondaryLabel;
    void /* unknown type, empty encoding */ topConstraint;
    void /* unknown type, empty encoding */ leadingConstraint;
    void /* unknown type, empty encoding */ trailingConstraint;
    void /* unknown type, empty encoding */ bottomConstraint;
    void /* unknown type, empty encoding */ iconImageViewWidthConstraint;
    void /* unknown type, empty encoding */ _actualPrimaryText;
    void /* unknown type, empty encoding */ _actualSecondaryText;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
