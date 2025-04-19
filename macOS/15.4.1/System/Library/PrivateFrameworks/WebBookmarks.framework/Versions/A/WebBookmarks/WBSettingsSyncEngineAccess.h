@class NSArray, NSString;

@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess>

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_deviceClass;
- (BOOL)syncEnabled;
- (void)deleteBackgroundImageDirectory;
- (void)_attemptUpdatingSavingPerSiteSettingsWithRecord:(id)a0;
- (void)_installMobileAssetIfApplicableWithURL:(id)a0;
- (BOOL)_isKnownPerSiteSetting:(id)a0;
- (id)_perSitePreferencesStore;
- (long long)_settingForValue:(id)a0;
- (void)_updatePerSiteSettingsWithRecord:(id)a0;
- (void)_updatePerSiteSettingsWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (void)_updateStartPageCloudTabsConsent:(id)a0;
- (void)didDeleteRemoteRecordWithID:(id)a0;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)a0;
- (BOOL)_isShowBackgroundImageEnabled;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)a0 record:(id)a1;

@end
