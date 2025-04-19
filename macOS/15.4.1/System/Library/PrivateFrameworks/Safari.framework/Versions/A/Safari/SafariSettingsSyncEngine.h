@class NSArray, WBSStartPageSectionManager;

@interface SafariSettingsSyncEngine : WBSSafariSettingsSyncEngine {
    WBSStartPageSectionManager *_startPageSectionManager;
    NSArray *_currentStartPageSections;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)syncEnabled;
- (id)_secureDefaults;
- (void)_backgroundImageChanged:(id)a0;
- (void)_cloudBackgroundImageDidUpdateOnServer:(id)a0;
- (void)_cloudBackgroundImageWasDeletedOnServer:(id)a0;
- (void)_cloudSettingsDidUpdateOnServer:(id)a0;
- (void)_customizationToggleWasDismissed:(id)a0;
- (void)_didUpdateBackgroundImageVisibility:(id)a0;
- (void)_didUpdateCloudTabsOnStartPageConsent:(id)a0;
- (void)_didUpdateStartPageSectionOrderOrVisibility:(id)a0;
- (void)_didUpdateTabGroupFavoritesVisibility:(id)a0;
- (void)_saveStartPageSection:(id)a0 isVisible:(BOOL)a1;

@end
