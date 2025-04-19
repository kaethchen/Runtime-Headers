@class NSString, NSTableView, NSButton;

@interface SheetWithTableController : NSWindowController <NSWindowDelegate> {
    NSTableView *tableView;
    NSButton *removeButton;
    NSButton *removeAllButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)delete:(id)a0;
- (void)hideSheet:(id)a0;
- (void)outlineViewSelectionDidChange:(id)a0;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)windowDidLoad;
- (void)reloadTableData;
- (void)removeAllItems:(id)a0;
- (BOOL)canRemoveAllItems;
- (BOOL)canRemoveSelectedItems;
- (BOOL)outlineView:(id)a0 keyDown:(id)a1;
- (void)removeSelectedItems:(id)a0;
- (void)showSheetInWindow:(id)a0;
- (BOOL)tableView:(id)a0 keyDown:(id)a1;
- (void)updateRemoveButtons;

@end
