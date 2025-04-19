@interface UAOnboardingFeatureIncreaseContrast : UAOnboardingSelectFromOptionsFeature

- (id)init;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (id)_setupIncreaseContrastLocalizedImageViewWithImage:(id)a0 bundle:(id)a1 increaseContrastEnabled:(BOOL)a2;
- (long long)getSelectedOptionFromSystemSettings;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;

@end
