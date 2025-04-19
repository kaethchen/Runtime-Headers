@interface RemindersUICore.TTRMComponentViewScrollingGroupComponentView : NSView {
    void /* unknown type, empty encoding */ isVerticallyResizable;
    void /* unknown type, empty encoding */ ttriAccessibilityLabel;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ scrollView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ stackView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ scrollViewHeightConstraints;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
