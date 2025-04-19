@interface AccountsUISettings.AccountsUIModel : NSObject <Settings.SettingsProtocol, ACMonitoredAccountStoreDelegateProtocol> {
    void /* unknown type, empty encoding */ _selectedAccount;
    void /* unknown type, empty encoding */ toDeleteAccount;
    void /* unknown type, empty encoding */ _addAccountShown;
    void /* unknown type, empty encoding */ _addOtherShown;
    void /* unknown type, empty encoding */ _deleteAccountShown;
    void /* unknown type, empty encoding */ _contactMergeAlertShown;
    void /* unknown type, empty encoding */ _detailsPaneShown;
    void /* unknown type, empty encoding */ _accountSetupView;
    void /* unknown type, empty encoding */ _persistentDetailModel;
    void /* unknown type, empty encoding */ _accountView;
    void /* unknown type, empty encoding */ _showsAccountFooterView;
    void /* unknown type, empty encoding */ _accountGroups;
    void /* unknown type, empty encoding */ _accountPath;
    void /* unknown type, empty encoding */ accountInstalledByProfile;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_suggestionStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_monitoredStore;
    void /* unknown type, empty encoding */ _accounts;
    void /* unknown type, empty encoding */ _filteredAccounts;
    void /* unknown type, empty encoding */ pluginManager;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ settingsHost;

- (id)init;
- (void).cxx_destruct;
- (void)accountCredentialChanged:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)accountWasModified:(id)a0;
- (void)accountWasRemoved:(id)a0;
- (void)didUnselect;
- (void)willSelect:(id /* block */)a0;
- (void)revealElementForKey:(id)a0;

@end
