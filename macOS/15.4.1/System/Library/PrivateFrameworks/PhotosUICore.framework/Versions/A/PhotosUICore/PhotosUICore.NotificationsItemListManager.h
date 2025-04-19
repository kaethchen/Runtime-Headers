@interface PhotosUICore.NotificationsItemListManager : _TtCs12_SwiftObject <PXPreferencesObserver> {
    void /* unknown type, empty encoding */ currentCombinedNotifications;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ dismissalController;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ dismissalObservation;
    void /* unknown type, empty encoding */ cloudQuotaNotificationInfo;
    void /* unknown type, empty encoding */ underlyingItemListManager;
    void /* unknown type, empty encoding */ composedItemListManagers;
}

- (void)preferencesDidChange;

@end
