@interface UAOnboardingFeatureClosedCaptions : UAOnboardingImageEnableFeature

- (id)init;
- (BOOL)isFeatureEnabled;
- (void)disableFeature;
- (void)enableFeature;

@end
