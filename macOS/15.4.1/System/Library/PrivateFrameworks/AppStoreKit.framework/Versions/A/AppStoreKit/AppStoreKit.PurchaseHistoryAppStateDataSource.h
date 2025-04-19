@interface AppStoreKit.PurchaseHistoryAppStateDataSource : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ callbackQueue;
    void /* unknown type, empty encoding */ expectedAppStates;
    void /* unknown type, empty encoding */ lastAccountId;
    void /* unknown type, empty encoding */ additionalFamilyMembers;
    void /* unknown type, empty encoding */ purchaseHistory;
    void /* unknown type, empty encoding */ hasRequestedPurchaseHistoryUpdate;
    void /* unknown type, empty encoding */ initialPurchaseHistoryContext;
    void /* unknown type, empty encoding */ purchaseHistoryContext;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ hostBundleId;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accountsDidChange;
- (void)hostBundleIdDidChange:(id)a0;
- (void)purchaseHistoryUpdated:(id)a0;

@end
