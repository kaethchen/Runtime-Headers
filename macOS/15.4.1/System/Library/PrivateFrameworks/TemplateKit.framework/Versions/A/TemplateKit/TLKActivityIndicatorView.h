@class NSProgressIndicator, TLKLabel, TLKMultilineText;

@interface TLKActivityIndicatorView : TLKView

@property (retain, nonatomic) NSProgressIndicator *activityIndicator;
@property (retain, nonatomic) TLKLabel *subtitleLabel;
@property (retain, nonatomic) TLKMultilineText *subtitle;

- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)observedPropertiesChanged;
- (id)setupContentView;
- (id)subtitleLabelText;
- (void)tlk_updateForAppearance:(id)a0;
- (BOOL)usesDefaultLayoutMargins;

@end
