@class NSIndexSet, NSArrayController, NSTableView, NSButton, NSMutableArray;

@interface AMGetItemsAction : AMAppleScriptAction

@property (weak, nonatomic) NSArrayController *_itemsController;
@property (weak, nonatomic) NSButton *_addButton;
@property (weak, nonatomic) NSButton *_removeButton;
@property (weak, nonatomic) NSTableView *_itemsTableView;
@property (readonly, weak, nonatomic) NSArrayController *itemsController;
@property (retain) NSMutableArray *items;
@property (retain) NSIndexSet *draggedIndexes;
@property (readonly, weak, nonatomic) NSTableView *itemsTableView;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)addItems:(id)a0;
- (void)awakeFromNib;
- (BOOL)tableView:(id)a0 acceptDrop:(id)a1 row:(long long)a2 dropOperation:(unsigned long long)a3;
- (unsigned long long)tableView:(id)a0 validateDrop:(id)a1 proposedRow:(long long)a2 proposedDropOperation:(unsigned long long)a3;
- (BOOL)tableView:(id)a0 writeRowsWithIndexes:(id)a1 toPasteboard:(id)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)closed;
- (unsigned long long)draggingStatus:(id)a0;
- (id)initWithDefinition:(id)a0 fromArchive:(BOOL)a1;
- (void)_panelDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (id)itemsFromPanelController:(id)a0;
- (id)itemsFromPasteboard:(id)a0 forTypes:(id)a1;
- (Class)itemsPanelControllerClass;
- (id)itemsPanelNibName;
- (id)itemsPasteboardTypes;

@end
