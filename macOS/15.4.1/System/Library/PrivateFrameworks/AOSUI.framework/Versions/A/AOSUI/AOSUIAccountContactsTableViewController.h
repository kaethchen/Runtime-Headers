@class NSTextField, NSString, NSScrollView, AOSUIAccountRecoveryContext, NSArray, iCloudAccountDetailsWebTabView, NSButton, NSTableView;

@interface AOSUIAccountContactsTableViewController : AOSUISpyglassBaseViewController <iCloudWebViewDelegate>

@property (weak) NSTextField *tableTitleTextField;
@property (weak) NSTextField *tableDetailTextField;
@property (weak) NSScrollView *tableViewContainer;
@property (weak) NSTableView *tableView;
@property (weak) NSButton *addButton;
@property (weak) NSButton *plusButton;
@property (retain) AOSUIAccountRecoveryContext *context;
@property BOOL appleDataRecoveryEnabled;
@property (retain) iCloudAccountDetailsWebTabView *webView;
@property (copy) NSString *tableTitle;
@property (copy) NSString *tableDetailText;
@property (copy) NSString *linkLabel;
@property (copy) NSString *linkURL;
@property (copy) NSString *addButtonTitle;
@property BOOL shouldHideTableIfEmpty;
@property BOOL shouldHideAddButton;
@property BOOL shouldHidePlusButton;
@property (copy) id /* block */ addAction;
@property (retain) NSArray *contacts;
@property long long contactTypeForDetailView;
@property (nonatomic) BOOL shouldShowDetailsButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)reloadData;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 rowViewForRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (id)_appleAccount;
- (void)endWebView:(id)a0;
- (void)resizeModalSheet:(struct CGSize { double x0; double x1; })a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)addButtonAction:(id)a0;
- (id)initWithAccountManager:(id)a0 context:(id)a1;
- (void)loadFailed:(id)a0;
- (void)contactDetailButtonPressed:(id)a0;
- (void)refreshContactsViews;
- (void)updateContactForTableRow:(id)a0 contact:(id)a1;

@end
