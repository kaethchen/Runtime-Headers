@interface VideosUI.SidebarViewController : VideosUI.BaseSidebarViewController {
    void /* unknown type, empty encoding */ librarySideBarManager;
    void /* unknown type, empty encoding */ reloadSharingHandler;
    void /* unknown type, empty encoding */ hasContentDisplayed;
    void /* unknown type, empty encoding */ searchSidebarItem;
    void /* unknown type, empty encoding */ searchDetailsViewController;
    void /* unknown type, empty encoding */ searchField;
    void /* unknown type, empty encoding */ searchFieldDelegator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_accountSettingsView;
    void /* unknown type, empty encoding */ remoteSections;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)outlineView:(id)a0 acceptDrop:(id)a1 item:(id)a2 childIndex:(long long)a3;
- (void)outlineView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItems:(id)a3;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (id)outlineView:(id)a0 pasteboardWriterForItem:(id)a1;
- (unsigned long long)outlineView:(id)a0 validateDrop:(id)a1 proposedItem:(id)a2 proposedChildIndex:(long long)a3;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewItemDidExpand:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_viewDidLayoutSubviews;

@end
