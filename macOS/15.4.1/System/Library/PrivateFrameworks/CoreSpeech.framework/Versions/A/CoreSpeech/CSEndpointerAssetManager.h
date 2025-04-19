@class CSAsset, NSString, NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSEndpointerAssetManager : NSObject <CSAssetManagerDelegate> {
    NSMutableDictionary *_tokenForAssetUpdateNotification;
}

@property (retain, nonatomic) CSAsset *currentHEPAsset;
@property (retain, nonatomic) CSAsset *currentOEPAsset;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)_getFakeEndpointAsset;
+ (id)_getOEPAssetWithLanguage:(id)a0;
+ (id)_getOEPVersionFromPath:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)CSAssetManagerDidDownloadNewAsset:(id)a0;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (void)_notifyAssetsUpdateForObserver:(id)a0;
- (void)_updateEndpointerAssetsIfNeeded;
- (id)_fetchEndpointMobileAssetWithLanguage:(id)a0;
- (id)_getCurrentHEPAsset;
- (id)_getModelPathFromInstallationStatusString:(id)a0;
- (BOOL)_isOSDIncludedInAsset:(id)a0;
- (void)_notifyAssetsUpdate;
- (void)_registerForAssetUpdateNotifications;
- (void)_updateAssetWithCurrentLanguageForAssetType:(unsigned long long)a0;
- (void)_updateAssetWithLanguage:(id)a0 assetType:(unsigned long long)a1;
- (id)getCurrentEndpointerAsset;
- (id)getCurrentOSDAsset;

@end
