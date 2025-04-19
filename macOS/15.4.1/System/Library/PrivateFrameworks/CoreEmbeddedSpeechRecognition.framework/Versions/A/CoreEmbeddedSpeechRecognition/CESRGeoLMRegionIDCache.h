@class NSUserDefaults;

@interface CESRGeoLMRegionIDCache : NSObject {
    NSUserDefaults *_userDefaults;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (id)_geoLMAssetsInfoDictForLanguage:(id)a0;
- (void)_updateUserDefaultsWithGeoLMAssetsInfoDict:(id)a0 language:(id)a1;
- (id)_userDefaultsGeoLMAssetsInfoDictKeyForLanguage:(id)a0;
- (id)lastUsedGeoLMRegionIdForLanguage:(id)a0;
- (id)purgeUnusedGeoLMRegionIdFromCacheForLanguage:(id)a0;
- (void)purgeUserDefaultsGeoLMAssetsInfoDictForLanguages:(id)a0;
- (void)updateGeoLMAssetsInfoDictWithRegionId:(id)a0 language:(id)a1;

@end
