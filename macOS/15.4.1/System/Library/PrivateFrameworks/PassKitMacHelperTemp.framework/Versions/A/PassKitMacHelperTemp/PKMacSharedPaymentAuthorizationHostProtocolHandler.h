@class NSString;
@protocol PKPaymentAuthorizationViewControllerPrivateDelegate, PKExtensionVendorContextProtocol, PKPaymentAuthorizationViewControllerDelegate;

@interface PKMacSharedPaymentAuthorizationHostProtocolHandler : NSObject <PKPaymentAuthorizationHostProtocol>

@property (weak, nonatomic) id viewController;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationViewControllerPrivateDelegate> privateDelegate;
@property (retain, nonatomic) id<PKExtensionVendorContextProtocol> paymentAuthorizationVendorContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationWillStart;
- (void)handleConnectionDidOpenWithCompletion:(id /* block */)a0;

@end
