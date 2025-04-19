@class NSString, LAContext, BKUIAlertView, NSView, NSObject, NSWindow;
@protocol BKSecureIntentDisplayHost, OS_os_log, SecureIntentClientView;

@interface BKMesaSecureIntentProvider : NSObject <LAUIDelegate> {
    NSObject<OS_os_log> *authManagerLogs;
    BOOL _authParamActive;
    BOOL _pushCredentialPresent;
    BOOL _hasAttemptedCrossMatch;
    BOOL _inBuddy;
    BOOL _touchIDMatch;
    unsigned long long _touchIDMatchAttemptCount;
    struct __IOHIDEventSystemClient { } *_hidClient;
}

@property (retain, nonatomic) NSString *credential;
@property (retain, nonatomic) LAContext *context;
@property (retain) BKUIAlertView *alertView;
@property (retain) BKUIAlertView *wrongButtonAlertView;
@property (retain, nonatomic) NSView<SecureIntentClientView> *presentingView;
@property (weak, nonatomic) NSWindow *alertWindow;
@property (nonatomic) BOOL inDemo;
@property (weak, nonatomic) id<BKSecureIntentDisplayHost> displayHost;

- (void).cxx_destruct;
- (void)reset;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)_getSecureIntentForAccessory:(id)a0 enrollmentOperation:(id)a1 showErrorToRetry:(BOOL)a2 withCompletionHandler:(id /* block */)a3;
- (void)_handleTouchIDEventWithParameters:(id)a0;
- (BOOL)_isMonitoringPowerButton;
- (void)_startMonitoringPowerButton;
- (void)_stopMonitoringPowerButton;
- (void)configureIntentView;
- (void)dismissSecureIntentViewForUserInteraction;
- (void)getSecureIntentForAccessory:(id)a0 enrollmentOperation:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)hasFingergprintsEnrolled;
- (id)initWithAlertWindow:(id)a0 inBuddy:(BOOL)a1;
- (void)invalidateAuthContext;
- (BOOL)needsToDisplayUI;
- (void)showAlert:(id)a0 detailedText:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)updateDFRWithFunctionBarController:(id)a0;

@end
