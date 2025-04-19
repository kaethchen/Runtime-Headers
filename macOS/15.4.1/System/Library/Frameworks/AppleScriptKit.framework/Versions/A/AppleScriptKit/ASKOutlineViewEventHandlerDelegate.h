@interface ASKOutlineViewEventHandlerDelegate : ASKEventHandlerDelegate

- (BOOL)outlineView:(id)a0 shouldCollapseItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldEditTableColumn:(id)a1 item:(id)a2;
- (BOOL)outlineView:(id)a0 shouldExpandItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (BOOL)outlineView:(id)a0 shouldSelectTableColumn:(id)a1;
- (void)outlineView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 item:(id)a3;
- (void)outlineView:(id)a0 willDisplayOutlineCell:(id)a1 forTableColumn:(id)a2 item:(id)a3;
- (BOOL)selectionShouldChangeInOutlineView:(id)a0;

@end
