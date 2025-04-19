@class TUINetworkMonitor, TUIKTStateManager, AIDAAccountManager, NSButton, TUIOptInFlowControllerImpl, NSBox, NSProgressIndicator, NSString, KTOptInManager, NSSwitch, NSView, ACAccountStore, NSTextField, NSAlert;
@protocol TUIOptInFlowControllerDelegate;

@interface TUIKTOptInStatusViewController : NSViewController <TUIOptInFlowControllerDelegate, TUINetworkMonitorDelegate> {
    BOOL _hasActiveConnection;
    BOOL _manateeRepairUIAutoDisplayed;
}

@property (retain, nonatomic) TUIOptInFlowControllerImpl *optInFlowController;
@property (retain, nonatomic) NSView *buttonDividerLine;
@property (retain, nonatomic) NSButton *reportToAppleButton;
@property (retain, nonatomic) NSButton *turnOffButton;
@property (retain, nonatomic) NSButton *updateAppleIDButton;
@property (retain, nonatomic) NSButton *resetButton;
@property (retain, nonatomic) NSTextField *resetDetailTextField;
@property (retain, nonatomic) NSButton *messagesSettingsButton;
@property (retain, nonatomic) NSTextField *titleTextField;
@property (retain, nonatomic) NSTextField *detailTextField;
@property (retain, nonatomic) NSTextField *errorTextField;
@property (retain, nonatomic) NSSwitch *optInSwitch;
@property (retain, nonatomic) NSBox *resetBox;
@property (retain, nonatomic) NSProgressIndicator *progressIndicator;
@property (retain, nonatomic) TUINetworkMonitor *networkMonitor;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) KTOptInManager *optInManager;
@property (retain, nonatomic) TUIKTStateManager *stateManager;
@property (retain, nonatomic) NSAlert *alert;
@property (weak, nonatomic) id<TUIOptInFlowControllerDelegate> delegate;
@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (id)_appleAccount;
- (void)_changeOptInState:(unsigned long long)a0;
- (void)_dismissPendingAlert;
- (id)_errorTitle;
- (void)_maybeRefreshMonitorStateInBackground;
- (void)_messagesSettingsButtonPressed;
- (void)_optInSwitchToggled;
- (void)_reportToAppleButtonPressed;
- (BOOL)_reportableFailureFound;
- (void)_resetButtonPressed;
- (BOOL)_shouldShowErrorUI;
- (void)_showMessagesSettings;
- (void)_showOptOutConfirmationAlertWithCompletion:(id /* block */)a0;
- (void)_showProgressIndicator;
- (void)_showResetConfirmationAlertWithCompletion:(id /* block */)a0;
- (void)_turnOffButtonPressed;
- (void)_updateAppleID;
- (void)_updateAppleIDButtonPressed;
- (void)activeConnectionChanged;
- (void)configureStatusViewForErrorState;
- (void)configureStatusViewForHappyState;
- (void)configureStatusViewForWaitingState;
- (void)dismissPendingPopupUI;
- (id)initWithAccountManager:(id)a0 stateManager:(id)a1;
- (void)optInFlowResultWithStateUpdate;
- (void)processOptInStateChange;

@end
