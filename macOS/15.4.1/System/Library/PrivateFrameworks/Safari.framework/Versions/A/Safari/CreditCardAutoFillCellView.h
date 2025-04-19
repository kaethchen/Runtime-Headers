@class NSTextField, NSImageView, NSLayoutConstraint, NSStackView, WBSCreditCardData;

@interface CreditCardAutoFillCellView : BiometricPromptCellView {
    NSImageView *_biometricPromptView;
    NSImageView *_walletIconView;
    NSImageView *_checkmarkImageView;
}

@property (weak, nonatomic) NSTextField *cardNameLabel;
@property (weak, nonatomic) NSTextField *cardDescriptionLabel;
@property (weak, nonatomic) NSStackView *topLevelHorizontalStackView;
@property (weak, nonatomic) NSStackView *detailStackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (retain, nonatomic) WBSCreditCardData *cardData;

+ (id)cardDescription:(id)a0;
+ (struct CGSize { double x0; double x1; })sizeForCreditCardData:(id)a0 biometricPolicy:(long long)a1;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_updateViews;
- (id)_checkmarkImageWithColor:(id)a0;
- (void)_setUpBiometricPrompt;
- (void)_updateBiometricPrompt;
- (void)performBiometricPromptShakeAnimation;
- (void)updateCheckmarkVisibilityWithLastFilledCard:(id)a0;
- (void)updateImageViewsWhenTextFieldsAreSetToDefaultColor;
- (void)updateImageViewsWhenTextFieldsAreSetToWhite;

@end
