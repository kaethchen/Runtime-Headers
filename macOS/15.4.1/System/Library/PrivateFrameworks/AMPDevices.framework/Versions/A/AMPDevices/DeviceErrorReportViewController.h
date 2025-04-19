@class NSTextField, NSArray, NSScrollView, NSString, NSTableView, NSButton;

@interface DeviceErrorReportViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>

@property (retain, nonatomic) NSArray *errorNodes;
@property (weak, nonatomic) NSTextField *messageTextField;
@property (weak, nonatomic) NSTextField *explanationTextField;
@property (weak, nonatomic) NSTableView *tableView;
@property (weak, nonatomic) NSScrollView *scrollView;
@property (weak, nonatomic) NSButton *saveButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *okButton;
@property (weak, nonatomic) NSButton *disclosureTriangleButton;
@property (weak, nonatomic) NSTextField *numberOfErrorsTextField;
@property (retain, nonatomic) NSString *okButtonTitle;
@property (retain, nonatomic) NSString *cancelButtonTitle;
@property (retain, nonatomic) NSString *windowTitle;
@property (nonatomic) BOOL hideSaveButton;
@property (retain, nonatomic) NSString *defaultFileName;
@property (retain, nonatomic) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)loadModel;
- (void)clickCancelButton:(id)a0;
- (void)clickDisclosureTriangle:(id)a0;
- (void)clickOKButton:(id)a0;
- (void)clickSaveButton:(id)a0;
- (void)configureWindowButtons;
- (id)displayableStringWithNode:(id)a0;
- (id)errorReport;
- (void)returnCode:(long long)a0;
- (void)setupTopFieldsWithRow:(long long)a0;

@end
