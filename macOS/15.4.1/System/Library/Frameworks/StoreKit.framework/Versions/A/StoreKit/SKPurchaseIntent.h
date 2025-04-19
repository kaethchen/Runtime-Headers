@class NSString;

@interface SKPurchaseIntent : NSObject {
    void /* unknown type, empty encoding */ bundleID;
    void /* unknown type, empty encoding */ productID;
    void /* unknown type, empty encoding */ appName;
    void /* unknown type, empty encoding */ productName;
    void /* unknown type, empty encoding */ additionalBuyParams;
}

@property (nonatomic, copy) NSString *additionalBuyParams;

- (id)init;
- (void).cxx_destruct;
- (void)send:(void (^)(void))a0;
- (id)initWithBundleId:(id)a0 productIdentifier:(id)a1 appName:(id)a2 productName:(id)a3;

@end
