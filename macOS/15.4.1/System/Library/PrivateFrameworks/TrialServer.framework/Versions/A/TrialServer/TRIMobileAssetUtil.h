@interface TRIMobileAssetUtil : NSObject

+ (id)_getCurrentPallasAudienceForAssetType:(id)a0;
+ (id)_getCurrentPallasURLForAssetType:(id)a0;
+ (void)_setAllAssetsToAudience:(id)a0 siriAudience:(id)a1 assetURL:(id)a2 siriAssetURL:(id)a3;
+ (void)_setPallasAudience:(id)a0 forAssetType:(id)a1;
+ (void)_setPallasURL:(id)a0 forAssetType:(id)a1;
+ (void)configureMobileAssetForTrialEnvironment:(long long)a0;
+ (id)eliminableAssetTypes;

@end
