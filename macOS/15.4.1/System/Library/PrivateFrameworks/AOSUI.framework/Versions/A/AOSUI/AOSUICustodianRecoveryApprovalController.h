@class NSString, NSWindow;

@interface AOSUICustodianRecoveryApprovalController : NSObject

@property (retain) NSWindow *hostWindow;
@property (retain) NSString *recoverySessionID;
@property (retain) NSWindow *modalWindow;
@property (nonatomic) BOOL isResetEligible;

+ (id)approvalControllerWithHostWindow:(id)a0 recoverySessionID:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)validateRecoveryCodeWithCompletionHandler:(id /* block */)a0;
- (void)_promptForRecoveryCodeWithCompletion:(id /* block */)a0;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)_validateRecoveryCode:(id)a0 withCompletion:(id /* block */)a1;

@end
