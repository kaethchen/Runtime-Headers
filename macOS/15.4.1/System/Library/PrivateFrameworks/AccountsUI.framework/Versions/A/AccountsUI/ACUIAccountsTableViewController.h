@class NSTextField, NSArray, NSString, NSOperationQueue, ACAccountStore, NSTableView, ACAccount;
@protocol ACUIAccountsTableViewControllerDelegate;

@interface ACUIAccountsTableViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate>

@property (retain) NSArray *accountRowItems;
@property (retain) NSOperationQueue *operationQueue;
@property (retain) ACAccountStore *store;
@property (retain) NSTableView *tableview;
@property (retain) NSTextField *noAccountsLabel;
@property (retain, nonatomic) ACAccount *autoSelectAccount;
@property (nonatomic) unsigned long long filteringOption;
@property (weak) id<ACUIAccountsTableViewControllerDelegate> delegate;
@property (readonly) NSArray *accounts;
@property (retain, nonatomic) ACAccount *selectedAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)nibBundle;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)_reloadAccounts:(id)a0;
- (id)_dataclassMatchingFilteringOption;
- (void)_ensureVisibilityOfSelectedRow;
- (BOOL)_shouldUseAccount:(id)a0;
- (id)_sortedAccountRowItemsArray:(id)a0 groupByRMID:(BOOL)a1;

@end
