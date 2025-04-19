@class NSString, UAOnboardingAccessibilitySettingsManager;

@interface UAOnboardingFeature : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *buddyTitle;
@property (copy, nonatomic) NSString *buddyDescription;
@property (retain, nonatomic) UAOnboardingAccessibilitySettingsManager *accessibilitySettingsManager;

- (void).cxx_destruct;
- (void)updateFeatureImageWithSettings:(struct UAOnboardingAccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (id)createFeatureImageStringFromSettings:(struct UAOnboardingAccessibilitySettings { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 description:(id)a2;

@end
