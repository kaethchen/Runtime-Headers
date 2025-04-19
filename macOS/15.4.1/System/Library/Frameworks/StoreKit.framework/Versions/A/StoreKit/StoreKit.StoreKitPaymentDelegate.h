@interface StoreKit.StoreKitPaymentDelegate : SwiftNativeNSObject <SKPaymentDelegateProtocol> {
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ uiAnchor;
}

- (id)init;
- (void)handleEngagementRequest:(id)a0 replyBlock:(id /* block */)a1;
- (void)handlePaymentSheetRequest:(id)a0 replyBlock:(id /* block */)a1;
- (void)shouldContinueTransactionWithNewStorefront:(id)a0 replyBlock:(id /* block */)a1;

@end
