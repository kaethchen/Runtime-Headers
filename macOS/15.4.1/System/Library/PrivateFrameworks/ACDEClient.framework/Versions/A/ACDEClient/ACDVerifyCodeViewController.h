@class NSTextField, NSImageView, NSButton, ACUIPasscodeControl;
@protocol ACD2SVCodeVerificationViewControllerDelegate;

@interface ACDVerifyCodeViewController : ACDBaseViewController <ACUIPasscodeControlDelegate>

@property (nonatomic) NSTextField *titleField;
@property (nonatomic) ACUIPasscodeControl *passcodeControl;
@property (nonatomic) NSButton *sendAnotherCodeButton;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) NSButton *continueButton;
@property (nonatomic) NSButton *goBackButton;
@property (nonatomic) NSImageView *logoImageView;
@property (copy, nonatomic) id /* block */ failoverBlock;
@property (nonatomic) id<ACD2SVCodeVerificationViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long passcodeLength;
@property (nonatomic) BOOL canResendTheCode;

- (void)dealloc;
- (void)reset;
- (void)focus;
- (void)goBack:(id)a0;
- (void)didBecomeActive;
- (void)didResignActive;
- (void)willResignActive;
- (void)disableControls:(BOOL)a0;
- (void)handleFailoverWithCompletion:(id /* block */)a0;
- (void)hideAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (double)messageZeroConstrain;
- (void)pascodeControlDidChangeValue:(id)a0;
- (void)presentWithParentWindow:(id)a0 completion:(id /* block */)a1;
- (void)sendAnotherCode:(id)a0;
- (void)setMessage:(id)a0 type:(unsigned long long)a1;
- (void)updateReadinessState;
- (void)userDidEnterCode:(id)a0;
- (void)validateCode:(id)a0;
- (void)verifyCode:(id)a0;

@end
