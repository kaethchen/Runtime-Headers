@class NSTextField, NSString, NSArray, NSPopUpButton, WBSPerSitePreference, NSLayoutConstraint, NSImageView, WBSFaviconRequestsController;

@interface WebExtensionWebsitePermissionsEditor : SheetWithTableController <TableViewPlusDataSource, TableViewPlusDelegate> {
    WBSPerSitePreference *_preference;
    NSArray *_openDomains;
    NSArray *_configuredDomains;
    BOOL _shouldSuppressDynamicPreferenceRefresh;
    BOOL _didAwakeFromNib;
    WBSFaviconRequestsController *_requestsController;
}

@property (weak) NSTextField *descriptionLabel;
@property (weak) NSTextField *emptyTablePlaceholderText;
@property (weak) NSTextField *policyWarningLabel;
@property (weak) NSImageView *policyWarningIcon;
@property (weak) NSPopUpButton *defaultPolicyPopUpButton;
@property (weak) NSTextField *defaultPolicyPreferencesLabel;
@property (weak) NSLayoutConstraint *policyWarningIconWidthConstraint;
@property (weak) NSLayoutConstraint *policyWarningIconHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)_updateDefaultPolicyButtonState;
- (void)reloadTableData;
- (id)_domainsForCurrentlyOpenTabs;
- (void)_getCurrentlyOpenAndConfiguredDomainsForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (id)_headerViewForSection:(long long)a0;
- (id)_informationForPreference:(id)a0;
- (void)_setUpPolicyPopUpButtonIfNecessary:(id)a0;
- (void)_updateVisibilityOfPlaceholderText;
- (void)_updateWarningState;
- (void)defaultPolicyDidChange:(id)a0;
- (void)policyDidChange:(id)a0;
- (void)showSheetInWindow:(id)a0 forPreference:(id)a1;

@end
