@interface VideosUI.LibHomeSharingSource : VideosUI.LibMPSource {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ sourceTypeName;
    void /* unknown type, empty encoding */ _menuItems;
    void /* unknown type, empty encoding */ phoneRecentlyPurchasedMenuItems;
    void /* unknown type, empty encoding */ shouldShowConnectionErrorMessage;
    void /* unknown type, empty encoding */ mediaLibrary;
    void /* unknown type, empty encoding */ libraryConnectionQueue;
    void /* unknown type, empty encoding */ menuItemUpdateSubject;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)mpMediaLibraryStatusChanged;

@end
