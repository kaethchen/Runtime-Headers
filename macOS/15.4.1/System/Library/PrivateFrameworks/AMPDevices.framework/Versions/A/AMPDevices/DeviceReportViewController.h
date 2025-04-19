@class NSTextField, NSString, NSDictionary, NSData, NSTextView, NSButton, NSStackView;

@interface DeviceReportViewController : NSViewController

@property (weak, nonatomic) NSTextField *safetyInfoTitleTextField;
@property (weak, nonatomic) NSTextField *safetyInfoTextField;
@property (weak, nonatomic) NSTextView *textView;
@property (weak, nonatomic) NSButton *okButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *saveButton;
@property (weak, nonatomic) NSStackView *safetyInfoStackView;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSString *okButtonTitle;
@property (retain, nonatomic) NSString *cancelButtonTitle;
@property (retain, nonatomic) NSString *windowTitle;
@property (retain, nonatomic) NSData *richTextData;
@property (retain, nonatomic) NSString *safetyInfo;
@property (retain, nonatomic) NSString *defaultFileName;
@property (nonatomic) BOOL hideSaveButton;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)clickCancelButton:(id)a0;
- (void)clickOKButton:(id)a0;
- (void)clickSaveButton:(id)a0;
- (void)configureWindowButtons;
- (void)returnCode:(long long)a0;

@end
