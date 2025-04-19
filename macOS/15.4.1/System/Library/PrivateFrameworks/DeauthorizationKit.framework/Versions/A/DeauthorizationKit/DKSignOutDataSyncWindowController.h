@class NSTableView, NSWindow, NSArray;

@interface DKSignOutDataSyncWindowController : NSWindowController

@property (weak) NSTableView *tableView;
@property (retain) NSWindow *parentWindow;
@property (retain) NSArray *stillSyncingApps;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)windowDidLoad;
- (void)cancelAction:(id)a0;
- (void)continueAction:(id)a0;
- (void)endProgressSpinner;
- (void)startProgressSpinner;

@end
