@class NSTextField, NSArray, NSString, NSTableView;

@interface NSDebugResponderChainViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>

@property (retain) NSTableView *tableView;
@property (retain) NSTextField *actionSelectorTextField;
@property (copy) NSArray *displayedItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_addressForDisplayedItem:(id)a0;
- (id)_descriptionForDisplayedItem:(id)a0 forConsole:(BOOL)a1;
- (void)loadView;
- (void)logBasicChainToConsole:(id)a0;
- (void)logDisplayedItemsToConsole:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidAppear;
- (void)viewWillDisappear;

@end
