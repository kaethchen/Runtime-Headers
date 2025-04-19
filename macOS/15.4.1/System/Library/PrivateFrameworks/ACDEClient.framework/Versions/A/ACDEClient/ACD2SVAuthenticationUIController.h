@class ACC2SVTrustedDeviceObject, ACDVerifyCodeViewController, ACFMessage, ACDStateManager, NSString, ACDDeviceListViewController;
@protocol ACC2SVAuthenticationUIControllerDelegate;

@interface ACD2SVAuthenticationUIController : NSObject <ACM2SVTrustedDevicesViewControllerDelegate, ACD2SVCodeVerificationViewControllerDelegate, ACC2SVAuthenticationUIControllerProtocol>

@property (readonly, nonatomic) ACC2SVTrustedDeviceObject *selectedTrustedDevice;
@property (retain, nonatomic) ACDDeviceListViewController *trustedDevicesViewController;
@property (retain, nonatomic) ACDVerifyCodeViewController *codeVerificationViewController;
@property (nonatomic) ACDStateManager *stateManager;
@property (retain, nonatomic) ACFMessage *currentRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<ACC2SVAuthenticationUIControllerDelegate> delegate;

- (void)dealloc;
- (void)cancelInProgressImageDownloads;
- (void)chooseTrustedDeviceWithDeviceList:(id)a0 completion:(id /* block */)a1;
- (void)codeVerificationViewControllerNeedsResendCode:(id)a0;
- (void)downloadImageWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)enterVerificationCodeWithLength:(unsigned long long)a0 forDevice:(id)a1 completion:(id /* block */)a2;
- (void)handleFailoverWithCompletion:(id /* block */)a0;
- (void)hideUIAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)resetCodeVerificationViewController;
- (void)resetTrustedDevicesViewControllerWithDeviceList:(id)a0;
- (id)selectedTrustedDeviceName;
- (void)showAlertWithError:(id)a0 completion:(id /* block */)a1;
- (void)trustedDevicesViewControllerDidSelectUnableReceiveMessages:(id)a0;
- (void)trustedDevicesViewControllerNeedsRefresh:(id)a0;

@end
