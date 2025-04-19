@class NSLayoutConstraint, NSTextField;

@interface VTUIPagedLabel : NSView {
    NSTextField *_leadingLabel;
    NSTextField *_trailingLabel;
    NSLayoutConstraint *_leadingLabelVisibleConstraint;
    NSLayoutConstraint *_trailingLabelVisibleConstraint;
}

- (void).cxx_destruct;
- (void)setAlignment:(long long)a0;
- (void)clear;
- (double)firstBaselineOffsetFromTop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFont:(id)a0;
- (void)setTextColor:(id)a0;
- (void)setText:(id)a0;
- (void)setupViews;
- (void)slideInText:(id)a0 afterDelay:(double)a1 completion:(id /* block */)a2;

@end
