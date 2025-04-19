@class SiriSharedUIContentPlatterSeparatorView, NSAttributedString, NSTextField;

@interface SiriSharedUIAlternateUserUtteranceCellView : SiriSharedUIStandardView {
    SiriSharedUIContentPlatterSeparatorView *_separator;
    NSTextField *_textField;
}

@property (retain, nonatomic) NSAttributedString *alternativeUtterance;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (void)_adjustCompositeFilterForCurrentAppearance;

@end
