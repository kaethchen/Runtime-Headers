@class NSString;

@interface SSRMobileAssetProvider : NSObject <SSRAssetProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_findLatestInstalledAsset:(id)a0;
- (id)installedSpeakerRecognitionAssetForLanguage:(id)a0;
- (id)_getVoiceTriggerAssetTypeString;
- (id)_buildAssetQueryForAssetType:(unsigned long long)a0;
- (id)_filteredAssets:(id)a0 forLanguage:(id)a1;
- (unsigned long long)_getEndpointAssetCurrentCompatibilityVersion;
- (id)_getEndpointAssetTypeString;
- (unsigned long long)_getSSRAssetCurrentCompatibilityVersion;
- (id)_getSSRAssetTypeString;
- (id)_getVTRepromptListAssetTypeString;
- (unsigned long long)_getVTRepromptListCurrentCompatibilityVersion;
- (unsigned long long)_getVoiceTriggerAssetCurrentCompatibilityVersion;
- (id)_installedMobileAssetOfType:(unsigned long long)a0 forLanguage:(id)a1;
- (id)_installedMobileAssetOfType:(unsigned long long)a0 forLanguage:(id)a1 ofType:(long long)a2;
- (id)_queryMAAssetsForAssetType:(unsigned long long)a0 Language:(id)a1;
- (id)allInstalledAssetsOfType:(unsigned long long)a0 forLanguage:(id)a1;
- (id)allInstalledSpeakerRecognitionAssetForLanguage:(id)a0;
- (unsigned long long)getAssetProviderType;
- (id)installedAssetOfType:(unsigned long long)a0 forLanguageCode:(id)a1;

@end
