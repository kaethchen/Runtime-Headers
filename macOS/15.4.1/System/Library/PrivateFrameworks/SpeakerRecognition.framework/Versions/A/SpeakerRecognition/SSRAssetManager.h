@class NSArray, NSString, NSMutableSet, CSOnDeviceCompilationHandler, NSObject;
@protocol OS_dispatch_queue, SSRAssetManagerDelegate, SSRAssetProviding;

@interface SSRAssetManager : NSObject <CSLanguageCodeUpdateMonitorDelegate>

@property (retain, nonatomic) NSArray *assetProviders;
@property (retain, nonatomic) NSString *currentLanguageCode;
@property (retain, nonatomic) CSOnDeviceCompilationHandler *onDeviceCompilationHandler;
@property (retain, nonatomic) NSMutableSet *compiledAssets;
@property (retain, nonatomic) id<SSRAssetProviding> mobileAssetProvider;
@property (retain, nonatomic) id<SSRAssetProviding> uafAssetProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SSRAssetManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)sharedManagerOnDeviceCompilationDisable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)CSLanguageCodeUpdateMonitor:(id)a0 didReceiveLanguageCodeChanged:(id)a1;
- (id)allInstalledSpeakerRecognitionAssetsForLanguage:(id)a0;
- (void)getSpeakerRecognitionAssetWithLanguage:(id)a0 completion:(id /* block */)a1;
- (id)installedSpeakerRecognitionAssetForLanguage:(id)a0;
- (void)_compileCurrentInstalledAssets:(id)a0;
- (id)_compileAssets:(id)a0;
- (id)_allInstalledSpeakerRecognitionAssetsForLanguage:(id)a0;
- (float)_convertVersionStringToFloat:(id)a0;
- (id)_getSSRAssetFromMAProviderWithLanguage:(id)a0;
- (id)_getSpeakerRecognitionOverrideAsset;
- (void)_loadUAFAssetsIfNecessary;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 forLanguage:(id)a1;
- (id)initWithOnDeviceCompilationDisable:(BOOL)a0;
- (id)installedAssetOfType:(unsigned long long)a0 forLanguage:(id)a1;
- (void)releaseAssetsLocksIfNecessary;

@end
