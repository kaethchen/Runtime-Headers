@interface IMTranscriptEffectHelper : NSObject

+ (BOOL)isFeatureEnabled;
+ (void)setFeatureEnabled:(BOOL)a0;
+ (id)replayStringMap;
+ (BOOL)effectIdentifierIsImpactEffect:(id)a0;
+ (id)allEffectIdentifiers;
+ (BOOL)effectIdentifierIsFullScreenMoment:(id)a0;
+ (id)findIdentifierByMathcingPartialSufix:(id)a0;
+ (BOOL)identifierIsEffectIdentifier:(id)a0;
+ (id)identifierNameMap;
+ (id)nameForEffectIdentifier:(id)a0;
+ (id)replayStringForEffectIdentifier:(id)a0;
+ (id)sendWithEffectStringMap;
+ (id)sendWithStringForEffectIdentifier:(id)a0;
+ (BOOL)shouldShowReplayButtonForEffectIdentifier:(id)a0;

@end
