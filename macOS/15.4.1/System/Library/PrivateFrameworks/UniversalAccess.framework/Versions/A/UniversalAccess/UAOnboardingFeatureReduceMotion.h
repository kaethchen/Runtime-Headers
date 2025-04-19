@interface UAOnboardingFeatureReduceMotion : UAOnboardingSelectFromOptionsFeature

- (id)init;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (long long)getSelectedOptionFromSystemSettings;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;

@end
