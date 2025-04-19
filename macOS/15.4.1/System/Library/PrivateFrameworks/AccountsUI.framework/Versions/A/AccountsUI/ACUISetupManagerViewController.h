@class NSProgressIndicator, ACAccountType, NSArray, ACUIAccountTypeRowRadio, NSString, ACUIAccountSetupViewController, NSLayoutConstraint, NSButton, NSWindow;

@interface ACUISetupManagerViewController : NSViewController <NSTableViewDataSource>

@property (retain) NSProgressIndicator *spinner;
@property (retain) NSButton *continueButton;
@property (retain) NSWindow *window;
@property (retain) NSWindow *sheet;
@property (retain) NSArray *accountTypes;
@property (retain) NSLayoutConstraint *providerTableHeightConstraint;
@property (retain) NSButton *cancelButton;
@property (retain) ACAccountType *otherAccountsType;
@property (retain) ACUIAccountSetupViewController *setupViewController;
@property (copy) id /* block */ completion;
@property (retain, nonatomic) ACUIAccountTypeRowRadio *selectedRow;
@property (retain) NSString *username;
@property (retain) ACAccountType *accountType;
@property (retain) NSWindow *safariConfirmSheet;
@property (retain) NSString *password;
@property (retain) ACUISetupManagerViewController *strongSelf;
@property (retain) NSString *dataclassFilter;
@property BOOL cancelWillQuit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_readDefaultForSkipAccountSetup;
+ (void)_setDefaultToSkipSetupForAccountType:(id)a0;
+ (BOOL)shouldOfferAccountSetupForAccountType:(id)a0 username:(id)a1;

- (void).cxx_destruct;
- (void)cancel:(id)a0;
- (id)nibBundle;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)help:(id)a0;
- (void)continueButton:(id)a0;
- (id)_accountTypeIdentifierForDataclass:(id)a0;
- (void)_allowAction:(id)a0;
- (void)_getSetupViewController;
- (void)_loadAccountTypes;
- (void)_notNowAction:(id)a0;
- (id)currentApplicationName;
- (id)otherAccountsLabel;
- (void)startSetupInWindow:(id)a0 accountType:(id)a1 username:(id)a2 password:(id)a3 completion:(id /* block */)a4;
- (void)startSetupInWindow:(id)a0 completion:(id /* block */)a1;

@end
