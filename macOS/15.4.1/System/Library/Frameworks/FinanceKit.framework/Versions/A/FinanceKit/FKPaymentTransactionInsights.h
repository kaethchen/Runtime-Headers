@class FKApplePayTransactionInsight, FKContactTransactionInsight, FKMapsTransactionInsight, FKBankMerchantInformationInsight;

@interface FKPaymentTransactionInsights : NSObject <NSCopying>

@property (copy, nonatomic) FKApplePayTransactionInsight *applePayInsight;
@property (copy, nonatomic) FKBankMerchantInformationInsight *bankMerchantInformationInsight;
@property (copy, nonatomic) FKMapsTransactionInsight *mapsInsight;
@property (copy, nonatomic) FKContactTransactionInsight *contactInsight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplePayInsight:(id)a0 bankMerchantInformationInsight:(id)a1 mapsInsight:(id)a2 contactInsight:(id)a3;
- (id)initWithApplePayInsight:(id)a0 bankMerchantInformationInsight:(id)a1 mapsInsight:(id)a2;

@end
