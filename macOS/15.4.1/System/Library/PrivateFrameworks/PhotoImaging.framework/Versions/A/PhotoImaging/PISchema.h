@class NUIdentifier;

@interface PISchema : NSObject

@property (class, readonly) NUIdentifier *identifier;

+ (id)photosSchema;
+ (id)semanticEnhance;
+ (id)smartToneSchema;
+ (id)apertureRedEyeSchema;
+ (id)autoLoopSchema;
+ (id)cinematicAudioSchema;
+ (id)cropSchema;
+ (id)curvesSchema;
+ (id)debugSchema;
+ (id)definitionSchema;
+ (id)depthEffectSchema;
+ (id)effect3DSchema;
+ (id)effectSchema;
+ (id)grainSchema;
+ (id)highResFusionSchema;
+ (id)inpaintMasksSchema;
+ (id)inpaintSchema;
+ (id)levelsSchema;
+ (id)livePhotoKeyFrameSchema;
+ (id)muteSchema;
+ (id)noiseReductionSchema;
+ (id)orientationSchema;
+ (id)photosCompositionSchema;
+ (id)portraitEffectSchema;
+ (id)portraitVideoSchema;
+ (id)rawNoiseReductionSchema;
+ (id)rawSchema;
+ (id)redEyeSchema;
+ (id)registerPhotosSchema;
+ (id)registeredPhotosSchemaIdentifier;
+ (id)retouchSchema;
+ (id)selectiveColorSchema;
+ (id)semanticStyleSchema;
+ (id)sharpenSchema;
+ (id)slomoSchema;
+ (id)smartBlackAndWhiteSchema;
+ (id)smartColorSchema;
+ (id)trimSchema;
+ (id)videoCrossfadeLoopSchema;
+ (id)videoPosterFrameSchema;
+ (id)videoStabilizeSchema;
+ (id)vignetteSchema;
+ (id)whiteBalanceSchema;

@end
