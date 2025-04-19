@class NSCell, NSString, NSView, NSTableView, NSMutableArray, NSTextView;

@interface GFNodeManagerView : NSView {
    NSView *_insideView;
    NSString *_namespace;
    NSString *_filterString;
    NSMutableArray *_nodeNames;
    NSTableView *_tableView;
    NSTextView *_textView;
    NSCell *_defaultDataCell;
    void *_unused[4];
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_finishInitialization;
- (id)filterString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)setFilterString:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 sortDescriptorsDidChange:(id)a1;
- (BOOL)tableView:(id)a0 writeRows:(id)a1 toPasteboard:(id)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)_addColumnWithIdentifier:(id)a0 title:(id)a1 dataCell:(id)a2 sortable:(BOOL)a3;
- (id)_columns;
- (long long)_compareNode:(id)a0 withNode:(id)a1 usingColumnIdentifier:(id)a2 ascending:(BOOL)a3;
- (id)_descriptionForNode:(id)a0;
- (id)_cellContentForNode:(id)a0 columnIdentifier:(id)a1;
- (id)_filterStringsForNode:(id)a0;
- (void)_refreshList:(id)a0;
- (void)_removeAllColumns;
- (void)_removeColumnWithIdentifier:(id)a0;
- (void)_selectRow:(unsigned long long)a0;
- (void)_sortByIdentifiers:(id)a0;
- (void)_tableViewDoubleClick;
- (id)nodeNamespace;
- (void)setNodeNamespace:(id)a0;

@end
