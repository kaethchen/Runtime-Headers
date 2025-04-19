@class NSMutableDictionary;

@interface MREffectManager : NSObject {
    NSMutableDictionary *mEffectSets;
    NSMutableDictionary *mEffectPools;
    NSMutableDictionary *mFontRepository;
}

+ (void)initialize;
+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (void)releaseResources;
- (double)defaultMainDurationForEffectID:(id)a0;
- (id)attributeDescriptionForEffectID:(id)a0 andKey:(id)a1;
- (Class)classForEffectID:(id)a0;
- (id)customTimingWithEffectID:(id)a0 effectAttributes:(id)a1 slideInformation:(id)a2 textInformation:(id)a3 inAspectRatio:(double)a4;
- (id)defaultEffectAttributesWithEffectID:(id)a0 andSlideInformation:(id)a1;
- (double)defaultPhaseInDurationForEffectID:(id)a0;
- (double)defaultPhaseOutDurationForEffectID:(id)a0;
- (id)descriptionForEffectID:(id)a0;
- (id)effectWithEffectID:(id)a0;
- (BOOL)hasCustomTimingForEffectID:(id)a0;
- (BOOL)hasMultiImageInputForEffectID:(id)a0;
- (id)imageInputInfosForEffectID:(id)a0;
- (id)imageProviderInfosForEffectID:(id)a0;
- (BOOL)isOpaqueForEffectID:(id)a0;
- (double)lineSpacingFactorForTextInEffectID:(id)a0 presetID:(id)a1 atIndex:(long long)a2;
- (void)recycleEffect:(id)a0;
- (id)resourcePathForEffectID:(id)a0 andResource:(id)a1;
- (id)sizeScriptForEffectID:(id)a0 andKey:(id)a1;

@end
