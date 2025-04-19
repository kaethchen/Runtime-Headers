@class NSString, PKPaymentAuthorizationViewController, NSWindow;
@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate;

@interface PKPaymentAuthorizationController : NSObject <PKPaymentAuthorizationViewControllerDelegate> {
    NSWindow *_presentingWindow;
    PKPaymentAuthorizationController *_retainSelf;
}

@property (retain, nonatomic) NSWindow *sheetWindow;
@property (retain, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) PKPaymentAuthorizationViewController *viewController;
@property (weak, nonatomic) id<PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canMakePayments;
+ (void)paymentServicesMerchantURLForAPIType:(long long)a0 completion:(id /* block */)a1;
+ (BOOL)supportsDisbursements;
+ (BOOL)supportsDisbursementsUsingNetworks:(id)a0;
+ (BOOL)supportsDisbursementsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0 capabilities:(unsigned long long)a1;
+ (BOOL)canMakePaymentsUsingNetworks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)presentWithCompletion:(id /* block */)a0;
- (id)initWithPaymentRequest:(id)a0;
- (id)initWithDisbursementRequest:(id)a0;
- (void)paymentAuthorizationViewController:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 didRequestMerchantSessionUpdate:(id /* block */)a1;
- (void)paymentAuthorizationViewController:(id)a0 didRequestMerchantSessionWithURL:(id)a1 merchantSessionUpdate:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 didSelectShippingContact:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewController:(id)a0 didSelectShippingMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationViewControllerDidFinish:(id)a0;
- (void)paymentAuthorizationViewControllerWillAuthorizePayment:(id)a0;

@end
