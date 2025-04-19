@class NSLayoutConstraint;

@interface QLPreviewTitleBarView : NSStackView

@property (retain) NSLayoutConstraint *titleBaselineOffsetConstraint;

- (void).cxx_destruct;
- (double)minimumWidth;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWindowButtons;

@end
