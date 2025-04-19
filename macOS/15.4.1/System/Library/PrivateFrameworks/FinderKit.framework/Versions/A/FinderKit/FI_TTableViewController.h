@class NSString, FI_TTableViewDataSource;

@interface FI_TTableViewController : FI_IBaseTableViewController <NSTableViewDelegate>

@property (readonly, retain, nonatomic) FI_TTableViewDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setView:(id)a0;
- (id)tableView;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (void)configureView;
- (Class)dataSourceClass;
- (id)tableViewNoLoad;

@end
