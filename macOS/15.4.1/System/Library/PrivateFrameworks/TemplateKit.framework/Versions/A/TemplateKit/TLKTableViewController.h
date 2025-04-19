@class NSTableView, NSString;

@interface TLKTableViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, NSScrollViewDelegate>

@property (retain, nonatomic) NSTableView *tableView;
@property (readonly) unsigned long long numberOfRows;
@property (readonly) long long selectedRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (setter=_setWantsPageAlignedHorizontalAxis:) BOOL _wantsPageAlignedHorizontalAxis;
@property (setter=_setWantsPageAlignedVerticalAxis:) BOOL _wantsPageAlignedVerticalAxis;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)reloadData;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)selectRow:(long long)a0;
- (id)cellViewForRow:(unsigned long long)a0;
- (id)rowViewForRow:(unsigned long long)a0;
- (void)selectionDidChangeToRow:(long long)a0;

@end
