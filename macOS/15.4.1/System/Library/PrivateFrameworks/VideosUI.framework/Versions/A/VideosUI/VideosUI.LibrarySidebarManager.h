@interface VideosUI.LibrarySidebarManager : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sidebarProvider;
    void /* unknown type, empty encoding */ localSideBarModel;
    void /* unknown type, empty encoding */ cachedItunesSideBarItems;
    void /* unknown type, empty encoding */ cachedDeviceSideBarItems;
    void /* unknown type, empty encoding */ genres;
    void /* unknown type, empty encoding */ familyMembers;
    void /* unknown type, empty encoding */ homeSharingDevices;
    void /* unknown type, empty encoding */ publicSharingDevices;
    void /* unknown type, empty encoding */ dataFetchingWorkItem;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didSelectMenuItem:(id)a0;
- (void)fetchConnectedDeviceList;
- (void)fetchHomeSharingList;
- (void)fetchPlaylistSidebarItems;
- (void)fetchPublicSharingList;
- (void)handleAccountStoreChange;
- (void)libraryContentDidChange:(id)a0;
- (void)updateLibraryItem:(id)a0;

@end
