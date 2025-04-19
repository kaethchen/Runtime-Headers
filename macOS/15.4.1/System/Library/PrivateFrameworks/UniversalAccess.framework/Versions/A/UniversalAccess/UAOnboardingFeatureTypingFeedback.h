@class NSImageView;

@interface UAOnboardingFeatureTypingFeedback : UAOnboardingImageEnableFeature

@property (retain, nonatomic) NSImageView *_speechBubbleView;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFeatureEnabled;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (void)_setupLocalizedText;
- (void)disableFeature;
- (void)enableFeature;

@end
