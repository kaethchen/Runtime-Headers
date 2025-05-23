@interface AppStoreKit.ArcadeSubscriptionManager : NSObject <SKPaymentTransactionObserver, SKPaymentQueueClientDelegate> {
    void /* unknown type, empty encoding */ paymentQueue;
    void /* unknown type, empty encoding */ dialogHandler;
    void /* unknown type, empty encoding */ activeStoreAccountProvider;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ stateLock;
    void /* unknown type, empty encoding */ arcadeSubscriptionFamilyId;
    void /* unknown type, empty encoding */ subscriptionEntitlements;
    void /* unknown type, empty encoding */ subscriptionState;
    void /* unknown type, empty encoding */ paymentCallbacks;
    void /* unknown type, empty encoding */ logger;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)handleEngagementRequest:(id)a0 resultHandler:(id /* block */)a1;
- (void)entitlementsDidChange;
- (void)paymentQueue:(id)a0 updatedTransactions:(id)a1;

@end
