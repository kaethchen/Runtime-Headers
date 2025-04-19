@class NSImageView, NSTextField, NSData, NSButton;
@protocol CPUI_EnrollmentHostUIDelegate;

@interface CPUI_PromptForUserConsentForProfile : NSViewController

@property (retain) NSTextField *initialPromptField;
@property (retain) NSTextField *orgNameField;
@property (retain) NSTextField *urlField;
@property (retain) NSImageView *warningIcon;
@property (retain) NSTextField *managementConsentField;
@property (retain) NSButton *managementDetailsButton;
@property (retain) id<CPUI_EnrollmentHostUIDelegate> uiDelegate;
@property (retain) NSData *profileData;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)buttonClicked:(id)a0;

@end
