@interface UAOnboardingFeatureCursorSize : UAOnboardingSelectFromOptionsFeature

@property (nonatomic) double _smallestCursorSize;
@property (nonatomic) double _smallCursorSize;
@property (nonatomic) double _bigCursorSize;
@property (nonatomic) double _biggestCursorSize;

- (id)init;
- (long long)getSelectedOptionFromSystemSettings;
- (void)updateSystemSettingWithSelectedOption:(long long)a0;

@end
