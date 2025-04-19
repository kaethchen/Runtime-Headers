@interface PassKitCore.RemoteNetworkPaymentSession : NSObject <PKPaymentAuthorizationCoordinatorDelegate> {
    void /* unknown type, empty encoding */ remoteIdentifier;
    void /* unknown type, empty encoding */ paymentTopicID;
    void /* unknown type, empty encoding */ conversationID;
    void /* unknown type, empty encoding */ requestAPIType;
    void /* unknown type, empty encoding */ paymentRequestReceived;
    void /* unknown type, empty encoding */ paymentSheetPresented;
    void /* unknown type, empty encoding */ paymentSheetStatusReported;
    void /* unknown type, empty encoding */ requestPromiseRejected;
    void /* unknown type, empty encoding */ authCoordinatorPresented;
    void /* unknown type, empty encoding */ walletUninstallDetected;
    void /* unknown type, empty encoding */ pendingUpdateEvents;
    void /* unknown type, empty encoding */ originatingProcess;
    void /* unknown type, empty encoding */ sessionIdentifier;
    void /* unknown type, empty encoding */ initiationType;
    void /* unknown type, empty encoding */ websocket;
    void /* unknown type, empty encoding */ authorizationCoordinator;
    void /* unknown type, empty encoding */ inAppPaymentService;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ state;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didChangeCouponCode:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didRequestMerchantSessionUpdate:(id /* block */)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectShippingAddress:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didSelectShippingMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)a0;

@end
