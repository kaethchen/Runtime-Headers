@interface PhotosUICore.SharedAlbumsActivityEntryItemListManager : NSObject <PXSharedAlbumsActivityEntryRepositoryDelegate, PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ _itemList;
    void /* unknown type, empty encoding */ _fetching;
    void /* unknown type, empty encoding */ _canFetchMoreItems;
    void /* unknown type, empty encoding */ activityEntries;
    void /* unknown type, empty encoding */ _observedOids;
    void /* unknown type, empty encoding */ reverseSortOrder;
    void /* unknown type, empty encoding */ _batchFetchLimit;
    void /* unknown type, empty encoding */ highPriorityFetching;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ changeDetailsRepository;
    void /* unknown type, empty encoding */ observable;
    void /* unknown type, empty encoding */ activityEntryRepository;
    void /* unknown type, empty encoding */ unreadOnly;
    void /* unknown type, empty encoding */ __cachedLastSeenUnreadDate;
    void /* unknown type, empty encoding */ __lastSeenNotificationObserver;
    void /* unknown type, empty encoding */ displayUseCase;
    void /* unknown type, empty encoding */ sharedAlbumsAvailabilityObserver;
    void /* unknown type, empty encoding */ logIdentifier;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)activityEntryRepositoryDidChange:(id)a0;

@end
