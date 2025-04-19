@interface VideosUI.SegmentedControl : NSSegmentedControl {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ handleActionForHostedView;
    void /* unknown type, empty encoding */ defaultSegmentPadding;
    void /* unknown type, empty encoding */ defaultSegmentWidth;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)segmentSelectionChanged;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
