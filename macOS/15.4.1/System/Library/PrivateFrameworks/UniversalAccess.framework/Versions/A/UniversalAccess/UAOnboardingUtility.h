@interface UAOnboardingUtility : NSObject

+ (float)_RGBValueFromAlpha:(float)a0 overlay:(float)a1 background:(float)a2;
+ (BOOL)appearanceIsDark;
+ (id)buttonBackgroundColorForEffectiveAppearance;
+ (id)buttonPressColorForEffectiveAppearance;
+ (id)buttonRolloverColorForEffectiveAppearance;
+ (id)buttonShadowColorForEffectiveAppearance;
+ (id)localizedCurrentCategoryName:(id)a0;

@end
