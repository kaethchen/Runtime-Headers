@interface AppleMediaServicesUI.PurchaseViewModel : NSObject {
    void /* unknown type, empty encoding */ bagWrapper;
    void /* unknown type, empty encoding */ delegateWrapper;
    void /* unknown type, empty encoding */ _accounts;
    void /* unknown type, empty encoding */ accountStoreObserver;
    void /* unknown type, empty encoding */ mediaTypes;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchAccounts;
- (void)handleAccountDidChange:(id)a0;

@end
