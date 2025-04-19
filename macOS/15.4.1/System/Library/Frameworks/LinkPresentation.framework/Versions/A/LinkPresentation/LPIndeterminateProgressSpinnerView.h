@class LPIndeterminateProgressSpinnerPresentationProperties, NSView, LPIndeterminateProgressSpinnerStyle, LPTextView;

@interface LPIndeterminateProgressSpinnerView : LPComponentView {
    NSView *_indicatorView;
    LPTextView *_text;
    LPIndeterminateProgressSpinnerStyle *_style;
    LPIndeterminateProgressSpinnerPresentationProperties *_properties;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)ensureIndicatorView;
- (void)ensureURLLabel;
- (id)initWithHost:(id)a0 style:(id)a1 properties:(id)a2;
- (void)layoutComponentView;

@end
