@class NSTimer, NSMutableDictionary, BiometricAutoBugCapture;

@interface EntitlementABCIssueReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *issues;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) BiometricAutoBugCapture *biometricABC;

- (void).cxx_destruct;
- (void)addIssue:(id)a0;
- (void)rescheduleTimer;
- (id)initWithBiometricABC:(id)a0;
- (id)issueForTag:(id)a0;
- (void)reportGraylistedClient:(id)a0 withProcessName:(id)a1;
- (void)reportLegacyClient:(id)a0 withProcessName:(id)a1;
- (void)reportMissingPermission:(int)a0 forClientName:(id)a1 processName:(id)a2;
- (void)rescheduleTimerMain;

@end
