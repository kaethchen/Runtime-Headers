@interface PasswordManagerUI.PMPasswordManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ accountsState;
    void /* unknown type, empty encoding */ lastAddedAccountID;
    void /* unknown type, empty encoding */ lastModifiedAccounts;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ queueForLoadingAccounts;
    void /* unknown type, empty encoding */ autoFillQuirksManager;
    void /* unknown type, empty encoding */ passwordWarningManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_knownWebBrowserManager;
    void /* unknown type, empty encoding */ isIgnoringAccountStoreChangeNotifications;
    void /* unknown type, empty encoding */ cachedSavedAccounts;
    void /* unknown type, empty encoding */ cachedAccountsWithNeverSaveMarker;
    void /* unknown type, empty encoding */ cachedWarnings;
    void /* unknown type, empty encoding */ cachedRecentlyDeletedSavedAccounts;
    void /* unknown type, empty encoding */ cachedAccountsWithTOTPGenerators;
}

- (void)accountStoreDidChange;

@end
