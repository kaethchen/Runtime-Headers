@class PIAdjustmentConstants;

@interface PLCompositionHelper : NSObject

@property (class, readonly, nonatomic) PIAdjustmentConstants *adjustmentConstants;

+ (id)activeEffectAdjustmentForCompositionController:(id)a0;
+ (void)compositionController:(id)a0 applyAssetVariation:(unsigned short)a1 withRecipe:(id)a2;
+ (BOOL)compositionController:(id)a0 isCropConstraintEqualToCompositionController:(id)a1;
+ (BOOL)compositionController:(id)a0 isDepthIntensityEqualToCompositionController:(id)a1;
+ (BOOL)compositionController:(id)a0 isEffectFilterEqualToCompositionController:(id)a1;
+ (BOOL)compositionController:(id)a0 isEffectFilterIntensityEqualToCompositionController:(id)a1;
+ (BOOL)compositionController:(id)a0 isGeometryEqualToCompositionController:(id)a1;
+ (BOOL)compositionController:(id)a0 isPortraitEqualToCompositionController:(id)a1;
+ (BOOL)compositionController:(id)a0 isPortraitIntensityEqualToCompositionController:(id)a1;
+ (void)compositionController:(id)a0 setEffectFilterName:(id)a1 version:(long long)a2;
+ (void)compositionController:(id)a0 setInputOrientation:(long long)a1;
+ (BOOL)compositionControllerHasAnyAutoEnhancement:(id)a0;
+ (id)defaultValueForAdjustmentKey:(id)a0 settingKey:(id)a1;
+ (id)identityValueForAdjustmentKey:(id)a0 settingKey:(id)a1;
+ (BOOL)isIdentityCompositionController:(id)a0;
+ (BOOL)isIdentityCompositionController:(id)a0 forKeys:(id)a1;
+ (BOOL)isKeyOnlyAdjustmentForCompositionController:(id)a0 key:(id)a1;
+ (id)maxValueForAdjustmentKey:(id)a0 settingKey:(id)a1;
+ (id)minMaxValueForAdjustmentKey:(id)a0 settingKey:(id)a1;
+ (id)minValueForAdjustmentKey:(id)a0 settingKey:(id)a1;
+ (id)newIdentityCompositionController;
+ (id)photosSchema;
+ (struct CGSize { double x0; double x1; })synchronousInputSizeForCompositionController:(id)a0;
+ (id)validatedCompositionCopyFor:(id)a0;
+ (id)validatedCompositionCopyFor:(id)a0 mediaType:(long long)a1;
+ (id)valueForCompositionController:(id)a0 adjustmentKey:(id)a1 settingKey:(id)a2;
+ (id)valueForType:(long long)a0 adjustmentKey:(id)a1 settingKey:(id)a2;

@end
