@interface KNAnimationUtils : NSObject

@property (class, readonly, nonatomic) BOOL isRandomNumberSeedAlwaysRandom;
@property (class, readonly, nonatomic) BOOL isRandomNumberSeedAlwaysZero;
@property (class, readonly, nonatomic) BOOL shouldEnableAnimationPluginDevelopment;

+ (void)initialize;
+ (id)CAAccelerationFromSFXActionAcceleration:(unsigned long long)a0;
+ (BOOL)isDiscreteGPUAquisitionDisabled;
+ (unsigned long long)randomDirection;
+ (BOOL)shouldForceDisplayPreferredMode;
+ (BOOL)allowBlendingMotionBackgroundsDefaultValue;
+ (id)customAttributesArrayWithDeliveryOptions:(id)a0;
+ (id)customAttributesArrayWithJiggleIntensityOptions:(id)a0;
+ (id)customAttributesArrayWithTextDeliveryOptions:(id)a0;
+ (unsigned long long)directionFromCustomAttributesDeliveryOption:(unsigned long long)a0;
+ (void)getRecommendedPosition:(struct CGPoint { double x0; double x1; } *)a0 andTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a1 toFitLayer:(id)a2 inContainerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 contentsScale:(double)a4;
+ (void)hitPreviewButtonIfExists;
+ (BOOL)isCustomEffectTimingCurveEditingEnabled;
+ (BOOL)isDisplayLoggingEnabled;
+ (BOOL)isFPSLoggingEnabled;
+ (BOOL)isMotionBlurCapableWithAnimationContext:(id)a0;
+ (BOOL)isRandomNumberSeedInspectionEnabled;
+ (BOOL)isRenderingLocal;
+ (BOOL)isResponsivenessLoggingEnabled;
+ (BOOL)isTexturePreCachingDisabled;
+ (unsigned long long)randomBasicDirection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedLayerBoundsForNaturalPlaybackSize:(struct CGSize { double x0; double x1; })a0 inContainerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentsScale:(double)a2 isExternalDisplay:(BOOL)a3;
+ (void)roundMovieDecimalTime:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } *)a0 scale:(long long)a1 result:(struct { unsigned char x0 : 8; unsigned char x1 : 4; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 18; unsigned short x5[8]; } *)a2;
+ (BOOL)shouldBadgeMetalRendering;
+ (BOOL)shouldDisableViewScaling;
+ (BOOL)shouldEnableDynamicBackgroundMultisampling;
+ (BOOL)shouldEnableFullSpeedDynamicBackgrounds;
+ (id)timingsArrayWithDirection:(unsigned long long)a0 duration:(double)a1 count:(unsigned long long)a2 chunkDuration:(double)a3 randomness:(double)a4 randomGenerator:(id)a5;
+ (void)updateDefaultsValues;
+ (id)videoControllerSignpostLog;
+ (BOOL)willPluginClassAllowBlendingMotionBackgrounds:(Class)a0;

@end
