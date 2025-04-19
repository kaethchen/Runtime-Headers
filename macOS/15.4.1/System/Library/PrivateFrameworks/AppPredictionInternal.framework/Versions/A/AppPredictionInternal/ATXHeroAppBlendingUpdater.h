@interface ATXHeroAppBlendingUpdater : NSObject

+ (id)clientModelForHeroAppPredictions;
+ (id)clientModelSpecForHeroAppPredictions;
+ (id)nonBlacklistedPredictionsFrom:(id)a0;
+ (void)updateBlendingLayerWithHeroAppPredictions:(id)a0 currentLocation:(id)a1;

@end
