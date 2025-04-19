@class NSUUID, PKExtensionRemoteViewController, NSString, PKExtensionHostContext, PKMacSharedPaymentAuthorizationHostProtocolHandler, PKPaymentRequest, PKExtension, NSWindow;
@protocol PKPaymentAuthorizationViewControllerDelegate, PKPaymentAuthorizationViewControllerPrivateDelegate;

@interface PKPaymentAuthorizationViewController : NSViewController <PKExtensionRemoteViewControllerDelegate>

@property (retain, nonatomic) PKExtensionRemoteViewController *remoteViewController;
@property (retain, nonatomic) PKExtensionHostContext *paymentAuthorizationHostContext;
@property (retain, nonatomic) PKExtension *hostExtension;
@property (retain, nonatomic) NSUUID *serviceIdentifier;
@property (retain, nonatomic) PKMacSharedPaymentAuthorizationHostProtocolHandler *hostProtocolHandler;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSWindow *sheetWindow;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canMakePayments;
+ (void)paymentServicesMerchantURLForAPIType:(long long)a0 completion:(id /* block */)a1;
+ (BOOL)supportsDisbursements;
+ (BOOL)supportsDisbursementsUsingNetworks:(id)a0;
+ (BOOL)supportsDisbursementsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1;
+ (void)requestViewControllerWithPaymentRequest:(id)a0 completion:(id /* block */)a1;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0;
+ (void)paymentServicesMerchantURL:(id /* block */)a0;
+ (void)requestViewControllerWithPaymentRequest:(id)a0 viewController:(id)a1 completion:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)initWithPaymentRequest:(id)a0;
- (id)initWithDisbursementRequest:(id)a0;
- (void)extensionRemoteViewController:(id)a0 didTerminateWithError:(id)a1;

@end
