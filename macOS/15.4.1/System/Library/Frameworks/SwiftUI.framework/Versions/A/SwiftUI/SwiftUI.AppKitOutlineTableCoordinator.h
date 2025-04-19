@interface SwiftUI.AppKitOutlineTableCoordinator : SwiftUI.PlatformViewCoordinator <NSOutlineViewDelegate, NSOutlineViewDataSource, NSOutlineViewDelegatePrivate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ sortOrder;
    void /* unknown type, empty encoding */ columnCustomization;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ lastEnvironment;
    void /* unknown type, empty encoding */ acceptedDragTypes;
    void /* unknown type, empty encoding */ selectionStorage;
    void /* unknown type, empty encoding */ preferenceBridge;
    void /* unknown type, empty encoding */ clientBackgroundColor;
    void /* unknown type, empty encoding */ headersVisibility;
    void /* unknown type, empty encoding */ headerBezelVisibility;
    void /* unknown type, empty encoding */ defaultMinRowHeight;
    void /* unknown type, empty encoding */ installObservation;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ selectionGuardReason;
    void /* unknown type, empty encoding */ isUpdatingTableColumns;
    void /* unknown type, empty encoding */ rootItem;
    void /* unknown type, empty encoding */ typeSelectHosts;
    void /* unknown type, empty encoding */ appIntentsDataSourcePayloadProvider;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)a0 acceptDrop:(id)a1 item:(id)a2 childIndex:(long long)a3;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (void)outlineView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (void)outlineView:(id)a0 didRemoveRowView:(id)a1 forRow:(long long)a2;
- (void)outlineView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItems:(id)a3;
- (BOOL)outlineView:(id)a0 isGroupItem:(id)a1;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 pasteboardWriterForItem:(id)a1;
- (id)outlineView:(id)a0 rowViewForItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldReorderColumn:(long long)a1 toColumn:(long long)a2;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (void)outlineView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (id)outlineView:(id)a0 typeSelectStringForTableColumn:(id)a1 item:(id)a2;
- (void)outlineView:(id)a0 updateDraggingItemsForDrag:(id)a1;
- (BOOL)outlineView:(id)a0 userCanChangeVisibilityOfTableColumn:(id)a1;
- (void)outlineView:(id)a0 userDidChangeVisibilityOfTableColumns:(id)a1;
- (unsigned long long)outlineView:(id)a0 validateDrop:(id)a1 proposedItem:(id)a2 proposedChildIndex:(long long)a3;
- (id)outlineView:(id)a0 viewForTableColumn:(id)a1 item:(id)a2;
- (void)outlineViewColumnDidMove:(id)a0;
- (void)outlineViewColumnDidResize:(id)a0;
- (void)outlineViewItemDidCollapse:(id)a0;
- (void)outlineViewItemDidExpand:(id)a0;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)onDoubleAction:(id)a0;

@end
