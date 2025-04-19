@class NSUUID, PKExtensionRemoteViewController, NSString, PKExtensionHostContext, PKMacSharedPaymentAuthorizationHostProtocolHandler, PKExtension, PKPaymentAuthorizationViewController, PKPaymentAuthorizationCoordinator;
@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate, PKPaymentAuthorizationHostProtocol;

@interface PKCatalystPaymentAuthorizationViewController : NSViewController <PKExtensionRemoteViewControllerDelegate>

@property (retain, nonatomic) PKExtensionRemoteViewController *remoteViewController;
@property (retain, nonatomic) PKMacSharedPaymentAuthorizationHostProtocolHandler *hostProtocolHandler;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> hostProtocolDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;
@property (retain, nonatomic) PKExtensionHostContext *paymentAuthorizationHostContext;
@property (retain, nonatomic) PKExtension *hostExtension;
@property (retain, nonatomic) NSUUID *serviceIdentifier;
@property (weak, nonatomic) PKPaymentAuthorizationViewController *uiKitDelegate;
@property (weak, nonatomic) PKPaymentAuthorizationCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestViewControllerWithPaymentRequest:(id)a0 uiKitDelegate:(id)a1 coordinator:(id)a2 completion:(id /* block */)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)initWithPaymentRequest:(id)a0;
- (void)extensionRemoteViewController:(id)a0 didTerminateWithError:(id)a1;

@end
