@class NSTextField, NSGridView, AcceptedSiteDataSheetController, AuthorizationRequest, NSGridRow, NSButton, NSPopUpButton;

@interface PrivacyPreferences : PreferencesModule {
    AuthorizationRequest *_lockPrivateBrowsingAuthorizationRequest;
}

@property (weak, nonatomic) NSGridView *contentGridView;
@property (weak, nonatomic) NSGridRow *websiteTrackingRow;
@property (weak, nonatomic) NSGridRow *hideInternetAddressRow;
@property (weak, nonatomic) NSGridRow *hideInternetAddressSubtextRow;
@property (weak, nonatomic) NSGridRow *manageWebsiteDataRow;
@property (weak, nonatomic) NSGridRow *lockPrivateBrowsingRow;
@property (weak, nonatomic) NSButton *policyEnabledButton;
@property (weak, nonatomic) NSButton *hideInternetAddressCheckbox;
@property (weak, nonatomic) NSTextField *hideInternetAddressSubtext;
@property (weak, nonatomic) NSPopUpButton *hideInternetAddressState;
@property (weak, nonatomic) NSButton *manageWebsiteDataButton;
@property (retain, nonatomic) AcceptedSiteDataSheetController *siteDataEditor;
@property (weak, nonatomic) NSButton *lockPrivateBrowsingCheckbox;

- (void).cxx_destruct;
- (void)willBeDisplayed;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (int)_currentBlockStoragePolicy;
- (void)_updateBlockStoragePolicyIfNeeded;
- (void)_updateHideInternetAddressPreference;
- (void)_updateHideInternetAddressSubtextField;
- (void)_updateLockPrivateBrowsingPreference;
- (void)_updateStoragePolicyButtons;
- (void)goToAdvancedSettings:(id)a0;
- (void)openAboutSafariAndPrivacy:(id)a0;
- (id)safariHelpAnchor;
- (void)showWebsiteDataDetails:(id)a0;
- (void)takeHideInternetAddressPolicyFrom:(id)a0;
- (void)takeHideInternetAddressStateFrom:(id)a0;
- (void)takeLockPrivateBrowsingFrom:(id)a0;
- (void)takeStoragePolicyFrom:(id)a0;

@end
