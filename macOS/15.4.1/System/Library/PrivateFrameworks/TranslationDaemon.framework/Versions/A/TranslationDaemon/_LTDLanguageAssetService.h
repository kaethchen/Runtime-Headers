@class NSSet, NSArray;

@interface _LTDLanguageAssetService : NSObject

@property (class, readonly) NSSet *_selectedIdentifiers;
@property (class, copy) NSArray *selectedLocales;
@property (class, readonly) BOOL onDeviceModeSupported;

+ (id)queue;
+ (void)addLanguages:(id)a0 useCellular:(BOOL)a1;
+ (void)removeLanguages:(id)a0;
+ (void)_availableAssetsWithCompletion:(id /* block */)a0;
+ (void)_installedAssetsWithCompletion:(id /* block */)a0;
+ (id)_selectedAssets;
+ (id)_complementaryLocaleIfMissingForAssets:(id)a0 preferredComplements:(id)a1;
+ (id)_languageAssetFilterDescription:(unsigned long long)a0;
+ (unsigned long long)_languageAssetFilterFromOptions:(unsigned long long)a0;
+ (id)_languageModelsForLocales:(id)a0 initialState:(long long)a1 error:(id *)a2;
+ (void)_preheatMissingCacheStatesAfter:(long long)a0;
+ (void)_purgeUnusedAssetsWithCompletion:(id /* block */)a0;
+ (void)_selectedAssetsWithCompletion:(id /* block */)a0;
+ (id)_supportedLocalesWithError:(id *)a0;
+ (void)assetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)cancelLanguageStatusSession:(id)a0;
+ (void)setAssets:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)setInstalledLocales:(id)a0 useCellular:(BOOL)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)startLanguageStatusSession:(id)a0 observationType:(unsigned long long)a1 progress:(BOOL)a2 observations:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)syncInstalledLocales;

@end
