@class NSXPCConnection, NSString, NSTimer, PKInAppPaymentService, PKPaymentAuthorizationCoordinatorExportedObject, PKPaymentRequest, NSObject, BSProcessHandle, NSXPCListener;
@protocol PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationHostProtocol, OS_dispatch_queue, PKPaymentPresenter;

@interface PKPaymentAuthorizationCoordinator : NSObject <NSXPCListenerDelegate>

@property (nonatomic) BOOL didPresent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (retain, nonatomic) NSString *hostIdentifier;
@property (retain, nonatomic) PKPaymentAuthorizationCoordinatorExportedObject *exportedObject;
@property (copy, nonatomic) id /* block */ presentationCompletionBlock;
@property (nonatomic) BOOL remotePaymentRequestPromised;
@property (copy, nonatomic) id /* block */ remoteRequestPromisePresentationCompletionBlock;
@property (retain, nonatomic) id<PKPaymentPresenter> presenter;
@property (retain, nonatomic) PKInAppPaymentService *inAppPaymentService;
@property (retain, nonatomic) NSXPCListener *listener;
@property (nonatomic) double connectionTimeout;
@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;
@property (weak, nonatomic, setter=_setPrivateDelegate:) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> _privateDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;
@property (readonly) id<PKPaymentAuthorizationHostProtocol> hostDelegate;
@property (weak, nonatomic) id presentationWindow;
@property (retain, nonatomic) BSProcessHandle *remoteNetworkPaymentInvokingProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canMakePayments;
+ (BOOL)_canMakePaymentsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1 webDomain:(id)a2 paymentRequestType:(id)a3;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1 webDomain:(id)a2;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 webDomain:(id)a1;
+ (BOOL)supportsDisbursements;
+ (BOOL)supportsDisbursementsUsingNetworks:(id)a0;
+ (BOOL)supportsDisbursementsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dismissWithCompletion:(id /* block */)a0;
- (id)_remoteObjectProxy;
- (void)presentWithCompletion:(id /* block */)a0;
- (id)initWithPaymentRequest:(id)a0;
- (void)_invokeCallbackWithSuccess:(BOOL)a0;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)_viewServiceTimerFired:(id)a0;
- (void)fulfillRemotePaymentRequestPromise:(id)a0 completion:(id /* block */)a1;
- (id)initWithDisbursementRequest:(id)a0;
- (id)initWithPaymentRequest:(id)a0 remotePaymentRequestPromised:(BOOL)a1;
- (id)initWithRemotePaymentRequestPromised;
- (void)presentWithOrientation:(id)a0 completion:(id /* block */)a1;
- (void)rejectRemotePaymentRequestPromiseWithFailure:(unsigned long long)a0;

@end
