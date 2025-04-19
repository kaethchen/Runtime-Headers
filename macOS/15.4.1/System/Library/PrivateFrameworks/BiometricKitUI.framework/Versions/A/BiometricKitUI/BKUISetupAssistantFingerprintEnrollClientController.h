@class OBTemplateView, NSString, NSObject;
@protocol OS_os_log;

@interface BKUISetupAssistantFingerprintEnrollClientController : BKUIFingerprintEnrollViewController <BKUITouchBarDelegate> {
    NSObject<OS_os_log> *bkui_controller_log_subsystem;
}

@property (retain) OBTemplateView *tutorialTemplateView;
@property (retain) OBTemplateView *enrollTemplateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (void)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)commitEditingAndReturnError:(id *)a0;
- (void)loadView;
- (id)templateView;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillDisappear;
- (void)_postAccessibilityNotificationWithMessage:(id)a0;
- (void)_startTutorial:(BOOL)a0;
- (void)_failEnroll;
- (void)_sendEnrollResult:(int)a0 identity:(id)a1;
- (void)_setCurrentPrompt:(id)a0;
- (void)_setCurrentTitle:(id)a0;
- (void)_setTutorHidden:(BOOL)a0;
- (void)displaySecureIntentView:(id)a0;
- (void)removeSecureIntentView:(id)a0 didSucceed:(BOOL)a1 wasCancelled:(BOOL)a2;
- (id)securePairingStateObserver;
- (void)setupEnrollTemplateForBuddy;
- (void)touchBarButtonPressed:(int)a0;

@end
