@interface ASKOutlineViewEventHandlerDataSource : ASKEventHandlerDataSource

- (BOOL)outlineView:(id)a0 acceptDrop:(id)a1 item:(id)a2 childIndex:(long long)a3;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (void)outlineView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 byItem:(id)a3;
- (unsigned long long)outlineView:(id)a0 validateDrop:(id)a1 proposedItem:(id)a2 proposedChildIndex:(long long)a3;
- (BOOL)outlineView:(id)a0 writeItems:(id)a1 toPasteboard:(id)a2;

@end
