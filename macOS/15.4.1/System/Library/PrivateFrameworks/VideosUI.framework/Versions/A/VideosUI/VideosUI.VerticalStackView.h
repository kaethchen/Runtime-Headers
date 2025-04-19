@interface VideosUI.VerticalStackView : VUIBaseView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panelView;
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ topPlatterGradient;
    void /* unknown type, empty encoding */ bottomExpandableGradient;
    void /* unknown type, empty encoding */ bottomPlatterGradient;
    void /* unknown type, empty encoding */ lastExpandableViewFrame;
    void /* unknown type, empty encoding */ lastPanelFrame;
    void /* unknown type, empty encoding */ initialExpandableHeight;
    void /* unknown type, empty encoding */ maxExpandableHeight;
    void /* unknown type, empty encoding */ scrollDraggedOffset;
    void /* unknown type, empty encoding */ isScrollable;
    void /* unknown type, empty encoding */ isPartiallyExpanded;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
