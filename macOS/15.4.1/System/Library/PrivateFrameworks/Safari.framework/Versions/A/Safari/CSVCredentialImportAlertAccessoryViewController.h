@class NSAlert, NSString, NSScrollView, NSArrayController, NSArray, NSStackView, NSLayoutConstraint, NSButton, TableViewPlus;

@interface CSVCredentialImportAlertAccessoryViewController : NSViewController <TableViewPlusDelegate>

@property (retain, nonatomic) NSArrayController *alertCredentialsNotImportedArrayController;
@property (retain, nonatomic) NSStackView *alertVerticalStackView;
@property (retain, nonatomic) NSScrollView *alertScrollView;
@property (retain, nonatomic) TableViewPlus *alertTableView;
@property (retain, nonatomic) NSButton *alertDisclosureTriangle;
@property (retain, nonatomic) NSLayoutConstraint *alertTableViewHeightConstraint;
@property (copy, nonatomic) NSArray *credentialsWithConflicts;
@property (copy, nonatomic) NSArray *credentialsWithErrors;
@property (weak, nonatomic) NSAlert *parentAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)copy:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_makeScrollViewContentsVisible:(BOOL)a0;
- (void)_configureAlertConstraints;
- (void)_configureTableViewFrame;
- (id)_identifierForImportedCredential:(id)a0;
- (id)_stringForCredentialWithConflict:(id)a0;
- (id)_stringForCredentialWithError:(id)a0;
- (void)_toggleScrollViewContents:(id)a0;
- (double)_widestRowWidthInTableView;
- (id)tableView:(id)a0 menuForEvent:(id)a1 inRow:(long long)a2 tableColumn:(id)a3;
- (void)tableViewCopy:(id)a0;

@end
