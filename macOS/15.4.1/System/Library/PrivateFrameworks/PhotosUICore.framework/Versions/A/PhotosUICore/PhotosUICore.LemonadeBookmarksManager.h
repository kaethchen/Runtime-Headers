@interface PhotosUICore.LemonadeBookmarksManager : _TtCs12_SwiftObject <PXPreferencesObserver> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ __loadingStatus;
    void /* unknown type, empty encoding */ _bookmarks;
    void /* unknown type, empty encoding */ _showHiddenAlbum;
    void /* unknown type, empty encoding */ _showSharedAlbums;
    void /* unknown type, empty encoding */ _showRecentlyViewedAndSharedAlbum;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sharedAlbumsAvailabilityObserver;
    void /* unknown type, empty encoding */ pendingBookmarksResult;
    void /* unknown type, empty encoding */ _observable;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)preferencesDidChange;

@end
