@class NSView, NSImageView, NSLayoutConstraint;

@interface _ASCABLEQRCodeBadgeView : NSView {
    NSView *_platterView;
    NSImageView *_iconView;
    NSLayoutConstraint *_iconOffsetXConstraint;
    NSLayoutConstraint *_iconOffsetYConstraint;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (id)_passkeyIcon;
- (void)_updateLayoutMetricsWithFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
