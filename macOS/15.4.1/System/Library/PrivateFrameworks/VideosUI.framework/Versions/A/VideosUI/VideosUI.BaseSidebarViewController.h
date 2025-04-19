@interface VideosUI.BaseSidebarViewController : VideosUI.VUIViewController <NSOutlineViewDelegate, NSOutlineViewDataSource> {
    void /* unknown type, empty encoding */ selectionSubject;
    void /* unknown type, empty encoding */ applySelectionHandler;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ sectionDataSource;
    void /* unknown type, empty encoding */ lastSelectedRow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollableOutlineView;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)outlineView:(id)a0 shouldCollapseItem:(id)a1;
- (double)outlineView:(id)a0 heightOfRowByItem:(id)a1;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldShowOutlineCellForItem:(id)a1;
- (id)outlineView:(id)a0 tintConfigurationForItem:(id)a1;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)vui_viewDidLoad;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;

@end
