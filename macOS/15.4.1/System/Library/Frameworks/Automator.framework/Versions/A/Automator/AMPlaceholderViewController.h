@class NSTextField, NSString, AMWorkflow, NSDictionary, NSError, NSView, NSButton;

@interface AMPlaceholderViewController : NSViewController

@property (retain, nonatomic) AMWorkflow *_workflow;
@property (copy, nonatomic) NSString *_name;
@property (retain, nonatomic) NSError *_loadingError;
@property (copy, nonatomic) NSDictionary *_actionDictionary;
@property (retain, nonatomic) NSTextField *_descriptionTextField;
@property (retain, nonatomic) NSTextField *_errorRecoveryTextField;
@property (retain, nonatomic) NSView *_placeHolderView;
@property (retain, nonatomic) NSButton *_openSecurityPrefButton;
@property (retain, nonatomic) NSButton *_approveActionButton;
@property (retain, nonatomic) NSButton *_okQuarantineButton;
@property (retain, nonatomic) NSButton *_thirdPartyActionsButton;
@property (retain, nonatomic) AMWorkflow *workflow;

+ (id)actionRunErrorForLoadingError:(id)a0 name:(id)a1;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLayout;
- (void)_reloadAction;
- (void)_removeQuarantineAndReloadAction;
- (void)displayGatekeeperApprovalActionSheet:(id)a0;
- (id)initWithLoadingError:(id)a0 actionDictionary:(id)a1 name:(id)a2 workflow:(id)a3;
- (void)openSecurityPref:(id)a0;
- (void)removeQuarantineAndReloadAction:(id)a0;
- (void)showThirdPartyActionsAndReloadAction:(id)a0;

@end
