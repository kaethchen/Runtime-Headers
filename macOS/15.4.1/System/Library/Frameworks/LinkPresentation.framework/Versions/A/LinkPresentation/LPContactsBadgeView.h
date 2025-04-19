@class NSImageView, LPContactsBadgeStyle, NSView, CAShapeLayer;

@interface LPContactsBadgeView : LPComponentView {
    LPContactsBadgeStyle *_style;
    NSView *_avatarView;
    NSImageView *_highlightIndicatorView;
    NSView *_highlightShadowView;
    CAShapeLayer *_maskLayer;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (id)initWithHost:(id)a0 contacts:(id)a1 highlighted:(BOOL)a2 style:(id)a3;
- (void)layoutComponentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutExclusionRect;

@end
