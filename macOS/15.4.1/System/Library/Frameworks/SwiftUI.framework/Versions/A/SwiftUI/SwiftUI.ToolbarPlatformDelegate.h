@interface SwiftUI.ToolbarPlatformDelegate : NSObject <NSLocalTitlebarToolbarRenameSessionDelegate, NSTouchBarDelegate, NSToolbarDelegate> {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (BOOL)toolbar:(id)a0 itemIdentifier:(id)a1 canBeInsertedAtIndex:(long long)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (void)toolbarDidRemoveItem:(id)a0;
- (void)toolbarDidReorderItem:(id)a0;
- (id)toolbarImmovableItemIdentifiers:(id)a0;
- (id)toolbarSelectableItemIdentifiers:(id)a0;
- (void)toolbarWillAddItem:(id)a0;
- (void)updateSelection:(id)a0;

@end
