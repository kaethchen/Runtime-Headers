@class PKPaymentSetupProduct;

@interface PKAppleBalanceCredential : PKPaymentCredential

@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (readonly, nonatomic) long long eligibilitySource;
@property (nonatomic) BOOL isFromBackgroundProvisioning;

- (void).cxx_destruct;
- (id)initWithProduct:(id)a0 eligibilitySource:(long long)a1;
- (id)setupProductIdentifier;

@end
