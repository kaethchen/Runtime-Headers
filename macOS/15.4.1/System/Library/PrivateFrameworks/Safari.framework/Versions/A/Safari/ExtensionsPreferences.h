@class NSStackView, NSMapTable, NSButton, SafariAppExtensionsController, NSImageView, SafariWebExtensionsController, ExtensionDropView, NSMutableArray, NSBox, NSTableView, NSString, NSLayoutConstraint, AuthorizationRequest, WKWebView, ExtensionWrapper, WebExtensionWebsitePermissionsEditor, NSArray, NSView, SFContentBlockerManager, NSTextField;

@interface ExtensionsPreferences : SecurePreferencesModule <ExtensionDropViewDelegate, WKScriptMessageHandlerWithReply, NSTableViewDataSource, NSTableViewDelegate> {
    NSBox *_listBox;
    NSTableView *_listTableView;
    NSBox *_detailsBox;
    NSBox *_emptyBox;
    NSBox *_detailsSeperator;
    NSImageView *_detailsIconView;
    NSTextField *_detailsNameLabel;
    NSTextField *_detailsDescriptionLabel;
    NSButton *_uninstallButton;
    NSButton *_preferencesButton;
    NSView *_permissionsContainer;
    NSButton *_moreExtensionsButton;
    NSView *_extensionsEnabledView;
    NSButton *_extensionsOptionCheckbox;
    ExtensionDropView *_extensionDropView;
    NSButton *_reloadButton;
    NSButton *_showInFinderButton;
    NSMutableArray *_orderedUnpackedExtensions;
    WKWebView *_permissionsWebView;
    BOOL _permissionsWebViewLoaded;
    NSButton *_manageStorageButton;
    BOOL _failedToCalculateAllExtensionStorage;
    BOOL _updatingManageStorageVisibility;
    double _storageSize;
    NSMapTable *_dataRecords;
    NSMutableArray *_orderedExtensions;
    BOOL _waitingForLockupViews;
    NSArray *_orderedExtensionAppLockupViews;
    BOOL _didAwakeFromNib;
    BOOL _dontRememberExtensionSelectionChanges;
    double _previousEnabledHeight;
    NSLayoutConstraint *_heightConstraint;
    AuthorizationRequest *_authorizationRequestToEnableExtensionInPrivateBrowsing;
    ExtensionWrapper *_extensionShownInAuthorizationRequest;
    WebExtensionWebsitePermissionsEditor *_websitePermissionsEditor;
    SafariAppExtensionsController *_appExtensionsController;
    SafariWebExtensionsController *_webExtensionsController;
    SFContentBlockerManager *_contentBlockerManager;
}

@property (weak, nonatomic) NSStackView *extensionDetailsButtonsStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willBeDisplayed;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1 replyHandler:(id /* block */)a2;
- (long long)_controlStateValueForExtension:(id)a0;
- (void)_manageProfiles;
- (void)_toggleAllowUnsignedExtensions:(id)a0;
- (void)_updatePermissionsAndErrorsSoon;
- (void)toggleExtensionsOptionCheckbox:(id)a0;
- (void)_allowOnAllWebsites;
- (void)_allowUnsignedExtensionsDidTimeout:(id)a0;
- (void)_appExtensionPermissionDidChange:(id)a0;
- (void)_cloudExtensionStateDidChange:(id)a0;
- (void)_configureLockupView:(id)a0;
- (void)_didToggleAllowUnsignedExtensions:(BOOL)a0;
- (void)_dismissPrivateBrowsingAuthorizationViewIfNeeded;
- (void)_editWebsites;
- (void)_extensionEnabledStateDidChange:(id)a0;
- (void)_extensionErrorOccurred:(id)a0;
- (void)_extensionPermissionDidChange:(id)a0;
- (void)_extensionWasAdded:(id)a0;
- (void)_extensionWasRemoved:(id)a0;
- (BOOL)_hasSectionHeaders;
- (id)_iconImageModifiedForDarkModeIfNeeded:(id)a0;
- (void)_launchFinderAndShowUnpackedExtension:(id)a0;
- (void)_loadExtensionsIfNeeded;
- (void)_manageExtensionStorage:(id)a0;
- (void)_managedExtensionsStateDidChange:(id)a0;
- (long long)_numberOfSectionHeaders;
- (void)_reloadListTableViewMaintainingSelection;
- (void)_safariSyncStatusMayHaveChanged:(id)a0;
- (id)_selectedExtensionWrapper;
- (void)_setAllowedInPrivateBrowsing:(BOOL)a0;
- (void)_showEditWebsitesSheetForPreference:(id)a0;
- (void)_toggleShareAcrossDevicesCheckbox:(id)a0;
- (void)_updateCloudExtensionTableRowsIfNecessary;
- (void)_updateErrorsWithCompletionHandler:(id /* block */)a0;
- (void)_updatePermissionsAndErrorsWithCompletionHandler:(id /* block */)a0;
- (void)_updatePermissionsWithCompletionHandler:(id /* block */)a0;
- (void)_updateShareAcrossDevicesCheckboxVisibility;
- (void)_updateVisibilityOfButtons;
- (void)_updateWebAppAllowUnsignedExtensionsCheckbox;
- (void)_windowDidBecomeMain:(id)a0;
- (BOOL)extensionDropView:(id)a0 didDropWebExtensionAtURL:(id)a1;
- (id)extensionWrapperForTableViewRow:(long long)a0;
- (void)openExtensionsGallery:(id)a0;
- (void)reloadUnpackedExtension;
- (id)safariHelpAnchor;
- (void)selectExtensionWithIdentifier:(id)a0;
- (void)showPreferencesPage:(id)a0;
- (long long)tableViewRowForExtensionWithIdentifier:(id)a0;
- (void)toggleExtensionEnabled:(id)a0;
- (void)uninstallExtension:(id)a0;

@end
