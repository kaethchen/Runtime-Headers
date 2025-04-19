@class CDMAssetSetToFactorsConfig, NSMutableDictionary, NSString;

@interface CDMAssetsInfo : NSObject {
    NSMutableDictionary *_assetSetToUsagesMapping;
    CDMAssetSetToFactorsConfig *_cdmAssetSetToFactorsConfig;
    NSString *_graphName;
}

- (id)init;
- (void).cxx_destruct;
- (id)getAllAssetSets;
- (id)getCDMAssetsFactorConfigCDMAssetSet:(long long)a0;
- (id)getCDMAssetsUsagesForCDMAssetSet:(long long)a0;
- (id)getGraphName;
- (id)initWithGraphName:(id)a0;
- (void)setAssetsUsages:(id)a0 withCDMAssetsFactorConfig:(id)a1 forCDMAssetSet:(long long)a2;

@end
