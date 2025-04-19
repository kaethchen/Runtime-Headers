@class NSTextField, NSString, NSTouchBar, ACAccountStore, iCloudTouchBarController, NSMutableArray, ACAccount, NSButton, NSWindow, NSTableView;

@interface MMSignoutSheetController : NSObject <NSTableViewDataSource, NSTableViewDelegate, NSTouchBarProvider> {
    ACAccountStore *_accountStore;
}

@property (weak) NSWindow *signoutSheet;
@property (weak) NSTableView *serviceTable;
@property (weak) NSTextField *messageText;
@property (weak) NSButton *continueButton;
@property (weak) NSButton *cancelButton;
@property (retain) NSMutableArray *serviceInfoList;
@property NSWindow *parentWindow;
@property (retain) iCloudTouchBarController *touchBarController;
@property (readonly, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (id)initWithAccount:(id)a0;
- (void)checkboxClicked:(id)a0;
- (id)enabledServices;
- (void)continueButtonPressed:(id)a0;
- (long long)countOfEnabledCheckboxes;
- (void)showSignoutSheetForDataclassActions:(id)a0 usingWindow:(id)a1 completionHandler:(id /* block */)a2;

@end
