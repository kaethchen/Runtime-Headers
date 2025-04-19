@class NSWindow, ACDSignInViewController, ACDVerifyCodeViewController, NSString, ACDStateManager, NSImage, ACDDeviceListViewController;
@protocol ACDEUIControllerDelegate, ACDEAuthenticationRequest;

@interface ACDUIController : NSObject <ACDESignInDialogDelegate, ACDEUIControllerProtocol>

@property (retain, nonatomic) NSWindow *window;
@property (retain, nonatomic) NSWindow *parentWindow;
@property (retain, nonatomic) ACDSignInViewController *signInViewController;
@property (retain, nonatomic) ACDDeviceListViewController *deviceListViewController;
@property (retain, nonatomic) ACDVerifyCodeViewController *verifyCodeViewController;
@property (nonatomic) struct _NSModalSession { } *modalSession;
@property (retain, nonatomic) ACDStateManager *stateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<ACDEUIControllerDelegate> delegate;
@property (retain, nonatomic) id<ACDEAuthenticationRequest> request;
@property (retain, nonatomic) NSImage *logoImage;
@property (retain, nonatomic) NSString *signInDialogTitle;
@property (retain, nonatomic) NSString *signInDialogDescription;
@property (readonly, nonatomic) BOOL isWidgetShown;
@property (nonatomic) NSString *password;

- (void)dealloc;
- (void)onSignInCancel:(id)a0;
- (void)hideSignInWidgetWithCompletion:(id /* block */)a0;
- (void)onCreateAppleID:(id)a0;
- (void)onForgotAppleID:(id)a0;
- (void)onForgotPassword:(id)a0;
- (void)onManageAppleID:(id)a0;
- (void)onShowHelp:(id)a0;
- (void)onSignIn:(id)a0;
- (void)showAlertMessage:(id)a0 errorTag:(long long)a1;
- (void)showSignInWidgetWithParentWindow:(id)a0 completion:(id /* block */)a1;

@end
