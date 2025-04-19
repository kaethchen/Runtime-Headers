@interface VideosUI.LibDataSourceManager : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _isLoading;
    void /* unknown type, empty encoding */ _showHomeSharingLibraryUnavailableAlert;
    void /* unknown type, empty encoding */ _isOffline;
    void /* unknown type, empty encoding */ _hasExecutedMenuFetchOnce;
    void /* unknown type, empty encoding */ _selectedMenuItem;
    void /* unknown type, empty encoding */ _resolvedMenuItems;
    void /* unknown type, empty encoding */ _isLibraryOnlyCountry;
    void /* unknown type, empty encoding */ _isLibraryOnlyMode;
    void /* unknown type, empty encoding */ adamIDToCanonicalIDMap;
    void /* unknown type, empty encoding */ isMPLibraryUpdateInProgress;
    void /* unknown type, empty encoding */ activeSources;
    void /* unknown type, empty encoding */ availableSources;
    void /* unknown type, empty encoding */ availableSourceChangeSubject;
    void /* unknown type, empty encoding */ shelvedMenuTypesNotOnPhoneRootPage;
    void /* unknown type, empty encoding */ menuDataCache;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)handleAccountChanges;
- (void)handleHomeSharingUpdates;
- (void)handleNetworkChanges;
- (void)isLibraryOnlyCountryChanged:(id)a0;

@end
