@class NSString, PKServiceProviderPurchase, PKPaymentSetupProduct;

@interface PKPaymentPurchasedProductCredential : PKPaymentCredential

@property (retain, nonatomic) PKPaymentSetupProduct *product;
@property (copy, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) PKServiceProviderPurchase *purchase;
@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id)detailDescriptionWithEnvironment:(unsigned long long)a0;
- (id)initWithPaymentSetupProduct:(id)a0 purchase:(id)a1;
- (BOOL)isEqualToPaymentPurchasedProductCredential:(id)a0;
- (id)setupProductIdentifier;

@end
