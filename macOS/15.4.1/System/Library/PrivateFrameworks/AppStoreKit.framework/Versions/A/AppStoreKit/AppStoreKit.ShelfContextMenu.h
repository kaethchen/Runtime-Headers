@interface AppStoreKit.ShelfContextMenu : NSObject <NSMenuDelegate> {
    void /* unknown type, empty encoding */ menu;
    void /* unknown type, empty encoding */ actionRunner;
    void /* unknown type, empty encoding */ onMenuOpen;
    void /* unknown type, empty encoding */ onMenuClose;
}

- (id)init;
- (void).cxx_destruct;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;

@end
