@class NSArray, NSString, NSTableView, NSLayoutConstraint;
@protocol TGoToItemProtocol;

@interface FI_TGoToItemsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {
    NSArray *_dataSource;
    NSTableView *_tableView;
    NSLayoutConstraint *_tableViewHeightMin;
    NSLayoutConstraint *_tableViewHeightMax;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) id<TGoToItemProtocol> relativeToItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didAddRowView:(id)a1 forRow:(long long)a2;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)selectedItem;
- (id)tableView;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (long long)lastRowIndex;
- (void)selectRow:(struct optional<long> { union { char x0; long long x1; } x0; BOOL x1; })a0;
- (struct TFENode { struct OpaqueNodeRef *x0; })selectedNode;
- (void)selectPreviousRow;
- (void)updateIconForNameCellView:(id)a0 item:(id)a1;
- (void)emphasizeAvailableRowViews;
- (id)perfectlyMatchedItem;
- (void)selectNextRow;
- (id)suggestedItemForRow:(long long)a0;
- (id)suggestedItemHeaderForRow:(long long)a0;

@end
