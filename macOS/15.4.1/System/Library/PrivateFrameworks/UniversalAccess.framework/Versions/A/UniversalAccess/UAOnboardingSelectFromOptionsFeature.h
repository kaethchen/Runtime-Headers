@class NSArray;

@interface UAOnboardingSelectFromOptionsFeature : UAOnboardingFeature

@property (retain, nonatomic) NSArray *options;

- (void).cxx_destruct;
- (long long)getSelectedOptionFromSystemSettings;
- (id)initWithIdentifier:(id)a0 title:(id)a1 description:(id)a2;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;

@end
