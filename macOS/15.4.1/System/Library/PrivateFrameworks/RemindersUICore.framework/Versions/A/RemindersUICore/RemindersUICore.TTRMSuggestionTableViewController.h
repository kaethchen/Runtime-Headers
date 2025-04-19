@interface RemindersUICore.TTRMSuggestionTableViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ maxWidth;
    void /* unknown type, empty encoding */ minWidth;
    void /* unknown type, empty encoding */ maxHeight;
    void /* unknown type, empty encoding */ minHeight;
    void /* unknown type, empty encoding */ maxContentSize;
    void /* unknown type, empty encoding */ cellInfoByIdentifier;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ tableView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ tableViewLeadingConstraint;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (void)moveUp:(id)a0;
- (void)insertNewline:(id)a0;
- (void)moveDown:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidAppear;
- (void)viewDidLoad;

@end
