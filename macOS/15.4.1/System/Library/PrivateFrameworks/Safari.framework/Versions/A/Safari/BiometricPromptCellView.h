@interface BiometricPromptCellView : ColorInvertingTableCellView

@property (nonatomic) long long biometricPolicy;

+ (id)biometricPromptImage;

- (void)_performBiometricPromptShakeAnimationOnView:(id)a0;
- (void)_updateBiometricPrompt;
- (void)performBiometricPromptShakeAnimation;

@end
