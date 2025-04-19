@class NSMutableDictionary;

@interface CDMAssetSetToFactorsConfig : NSObject {
    NSMutableDictionary *_assetSetToFactorsMapping;
}

- (id)init;
- (void).cxx_destruct;
- (id)getAllAssetSets;
- (id)getAllFactors;
- (id)getAssetSetToFactorsConfigMapping;
- (id)getCDMFactorConfigForAssetSet:(long long)a0;
- (BOOL)hasAssetSetToFactorsMapping;
- (void)setCDMAssetsFactorConfig:(id)a0 forAssetSet:(long long)a1;

@end
