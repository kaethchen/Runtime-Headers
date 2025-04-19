@class GKButtonStyle, GKTextStyle;

@interface GKButton : GKFocusableButton {
    GKTextStyle *_baseStyle;
    GKButtonStyle *_appliedButtonStyle;
}

@property (retain, nonatomic) GKTextStyle *appliedStyle;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;

+ (void)initialize;

- (void).cxx_destruct;
- (void)setAttributedTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)applyTextStyle:(id)a0;
- (void)applyButtonStyle:(id)a0;

@end
