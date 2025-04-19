@class NSArray, ACUIAccountTypesCellView, NSString, NSTableView;
@protocol ACUIAccountTypesViewControllerDelegate;

@interface ACUIAccountTypesViewController : NSViewController <NSTableViewDataSource>

@property (retain) NSArray *accountTypes;
@property (weak) ACUIAccountTypesCellView *lastHighlightedCell;
@property BOOL isDisplayingOtherAccounts;
@property (retain) NSTableView *tableView;
@property (weak) id<ACUIAccountTypesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)nibBundle;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)_mainAccountTypes;
- (id)_otherAccountTypes;
- (void)showOtherAccountTypes;

@end
