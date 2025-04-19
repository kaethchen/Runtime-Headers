@class SRTrialConfiguration, NSString, NSHashTable, NSMutableDictionary, SRAssetConfiguration, NSBundle, NSMutableSet, NSObject, SRLanguageConfiguration;
@protocol OS_dispatch_queue;

@interface SRDefaultsManager : NSObject <DDSAssetCenterDelegate> {
    SRAssetConfiguration *_assetConfig;
    SRTrialConfiguration *_trialConfig;
    SRLanguageConfiguration *_langConfig;
    NSMutableDictionary *_assets;
    NSMutableDictionary *_parameters;
    NSMutableSet *_fetchedLanguages;
    BOOL _fetchedRoot;
    NSHashTable *_delegates;
    NSMutableDictionary *_loadedContentVersions;
    BOOL _ignoreOTAEmbeddings;
}

@property (readonly, nonatomic) NSBundle *customBundle;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ddsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *defaultsQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegatesQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) NSMutableSet *cachedOTALanguages;
@property (readonly, nonatomic) NSMutableSet *requestedOTALanguages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (long long)version;
+ (void)removeKey:(id)a0;
+ (id)userDefaults;
+ (id)defaultProperties;
+ (id)sharedDefaultsManager;
+ (unsigned long long)lastLoadedContentVersion;
+ (id)defaultValueWithKey:(id)a0;
+ (void)removeDefaults;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;
+ (void)setVersionWithValue:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerDelegate:(id)a0;
- (void)unregisterDelegate:(id)a0;
- (id)resourceBundle;
- (void)didUpdateAssetsWithType:(id)a0;
- (id)trialConfigDump;
- (id)allLoadedAssets;
- (id)assetConfigDump;
- (void)_loadAssets:(id)a0 shouldUpdate:(BOOL)a1;
- (void)_unloadAssetsForLocale:(id)a0;
- (void)addFetchForLanguage:(id)a0;
- (id)assetBundleForLocale:(id)a0 client:(id)a1 force:(BOOL)a2;
- (id)assetConfig;
- (id)currentAssetTypes;
- (id)currentNamespaceDescription;
- (id)currentNamespaces;
- (id)currentNamespacesForClient:(id)a0;
- (BOOL)didFetchForLanguage:(id)a0;
- (void)didUpdateTrialNamespace:(id)a0;
- (id)fetchedLanguages;
- (id)loadDefaultsForLocale:(id)a0 reload:(BOOL)a1 force:(BOOL)a2;
- (void)loadDefaultsFromDefaultAssets:(id)a0;
- (void)loadFactorsAtPath:(id)a0 namespaceId:(id)a1;
- (id)loadOTAAssetsForLanguage:(id)a0 reload:(BOOL)a1 assetTypes:(id)a2 force:(BOOL)a3;
- (void)loadSystemAssetsForLanguage:(id)a0 assetTypes:(id)a1;
- (void)loadTestAssetsForLanguage:(id)a0 assetTypes:(id)a1;
- (void)notifyObserversWithLanguage:(id)a0 contentVersions:(id)a1;
- (id)parametersOfNamespaceWithName:(id)a0;
- (id)parametersOfNamespaceWithName:(id)a0 client:(id)a1;
- (void)refreshCacheForLanguages:(id)a0 completion:(id /* block */)a1;
- (void)removeFetchForLanguage:(id)a0;
- (void)requestAssetsForLanguages:(id)a0;
- (BOOL)shouldReloadLanguage:(id)a0 forContentVersions:(id)a1;
- (void)unloadDefaultsForLocale:(id)a0;
- (void)updateContentVersions:(id)a0 forLanguage:(id)a1;
- (void)updateFetchedLanguages:(id)a0;
- (void)updateParameter:(id)a0 inNamespace:(id)a1 withValue:(id)a2;

@end
