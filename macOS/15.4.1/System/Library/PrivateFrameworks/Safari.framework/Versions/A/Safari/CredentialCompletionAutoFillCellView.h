@class NSTextField, NSString, NSView, NSImageView, NSLayoutConstraint, NSStackView;

@interface CredentialCompletionAutoFillCellView : BiometricPromptCellView <TouchIconAndBadgeConfigurable> {
    NSImageView *_trailingImageView;
    NSStackView *_stackView;
    NSView *_imageViewContainerView;
    NSImageView *_badgeView;
}

@property (weak, nonatomic) NSTextField *userNameDescriptionLabel;
@property (weak, nonatomic) NSTextField *credentialOriginDescriptionLabel;
@property (weak, nonatomic) NSView *trailingView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (weak, nonatomic) NSLayoutConstraint *leadingImageWidthConstraint;
@property (weak, nonatomic) NSLayoutConstraint *leadingImageHeightConstraint;
@property (copy, nonatomic) NSString *userNameDescription;
@property (copy, nonatomic) NSString *credentialOriginDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForOneTimeCode:(id)a0 biometricPolicy:(long long)a1;
+ (struct CGSize { double x0; double x1; })sizeWithUserNameDescription:(id)a0 origin:(id)a1 biometricPolicy:(long long)a2;
+ (struct CGSize { double x0; double x1; })sizeWithUserNameDescription:(id)a0 origin:(id)a1 biometricPolicy:(long long)a2 forPasskey:(BOOL)a3;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_updateLabelWithBiometricPrompt;
- (void)_setUpBiometricPrompt;
- (void)_updateBiometricPrompt;
- (void)configureForPasskeySymbol;
- (void)configureWithAppIcon:(id)a0 badge:(id)a1;
- (void)configureWithOneTimeCode:(id)a0 formURL:(id)a1;
- (void)configureWithOneTimeCodeCredentialIdentity:(id)a0;
- (void)performBiometricPromptShakeAnimation;

@end
