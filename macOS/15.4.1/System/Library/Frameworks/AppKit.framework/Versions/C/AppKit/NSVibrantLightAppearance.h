@interface NSVibrantLightAppearance : NSBuiltinAppearance

- (id)_appearanceForNonVibrantContent;
- (id)_appearanceForVibrantContent;
- (BOOL)_usesMetricsAppearance;

@end
