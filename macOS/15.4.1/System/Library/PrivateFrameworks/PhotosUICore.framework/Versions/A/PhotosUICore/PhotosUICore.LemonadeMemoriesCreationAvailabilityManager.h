@interface PhotosUICore.LemonadeMemoriesCreationAvailabilityManager : _TtCs12_SwiftObject <PXPreferencesObserver> {
    void /* unknown type, empty encoding */ __availabilityState;
    void /* unknown type, empty encoding */ _featureAvailabilityMonitorState;
    void /* unknown type, empty encoding */ __cardVisibilityState;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ _didStartPolling;
    void /* unknown type, empty encoding */ sharedLibraryStatusProvider;
    void /* unknown type, empty encoding */ sharedLibraryFilterState;
    void /* unknown type, empty encoding */ _sharedLibraryStatusObservation;
    void /* unknown type, empty encoding */ _sharedLibraryFilterStateObservation;
    void /* unknown type, empty encoding */ _sharedLibraryViewMode;
    void /* unknown type, empty encoding */ _featureAvailabilityMonitor;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)preferencesDidChange;

@end
