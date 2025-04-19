@class NSTextField, NSView, SFAutoFillOneTimeCode, NSLayoutConstraint;

@interface OneTimeCodeAutoFillCellView : BiometricPromptCellView {
    NSView *_iconView;
    NSTextField *_primaryLabelTextField;
    NSTextField *_secondaryLabelTextField;
    NSLayoutConstraint *_iconViewWidthContstraint;
}

@property (retain, nonatomic) SFAutoFillOneTimeCode *oneTimeCode;

+ (struct CGSize { double x0; double x1; })sizeWithOneTimeCode:(id)a0;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (BOOL)wantsUpdateLayer;
- (void)_updateMessagesColor;
- (void)configureWithOneTimeCode:(id)a0 formURL:(id)a1;

@end
