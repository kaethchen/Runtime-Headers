@class NSDictionary, NSString;
@protocol KHStoreBridgeDelegate;

@interface KHStoreBridge : NSObject

@property (weak, nonatomic) id<KHStoreBridgeDelegate> delegate;
@property (readonly, nonatomic) BOOL storeIsAvailable;
@property (readonly, nonatomic) BOOL cartNeedsReset;
@property (readonly, nonatomic) BOOL shouldDisplayShippingCosts;
@property (readonly, nonatomic) BOOL shouldConfirmStoreCountry;
@property (readonly, nonatomic) NSDictionary *countries;
@property (copy, nonatomic) NSString *selectedCountryCode;

+ (id)defaultBridge;

- (void).cxx_destruct;
- (id)learnMoreURL;
- (void)requestCheckoutForProjectBundleController:(id)a0 completion:(id /* block */)a1 dismissal:(id /* block */)a2;
- (void)addPrintLayout:(id)a0 toCart:(id)a1;
- (void)checkAddressBookAuthorization:(id /* block */)a0;
- (id)createCartWithRecipientsFromCart:(id)a0;
- (void)fillUpCountryPickerMenu:(id)a0;
- (void)loadProducts:(id /* block */)a0;
- (void)loadProductsForContext:(id)a0 completion:(id /* block */)a1;
- (void)requestCheckoutForProject:(id)a0 cart:(id)a1 completion:(id /* block */)a2 dismissal:(id /* block */)a3;
- (void)setNeedsLoadProducts;
- (void)updateCart:(id)a0 withProject:(id)a1;

@end
