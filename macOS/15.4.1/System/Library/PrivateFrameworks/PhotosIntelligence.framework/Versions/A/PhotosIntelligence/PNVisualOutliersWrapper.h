@interface PNVisualOutliersWrapper : NSObject

+ (BOOL)isAsset:(id)a0 similarToAnyAssets:(id)a1 withinThresholdType:(long long)a2;
+ (id)requiredFetchPropertySets;
+ (id)assetsDistancesSummary:(id)a0 inAssets:(id)a1 withinThresholdType:(long long)a2;
+ (id)outlierScoresForAssets:(id)a0;

@end
