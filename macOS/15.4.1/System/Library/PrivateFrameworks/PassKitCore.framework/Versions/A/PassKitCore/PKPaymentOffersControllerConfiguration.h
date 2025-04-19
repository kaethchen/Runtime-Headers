@class NSDecimalNumber, NSString, NSArray, NSNumber;

@interface PKPaymentOffersControllerConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *merchantCountryCode;
@property (readonly, copy, nonatomic) NSArray *supportedNetworks;
@property (readonly, nonatomic) unsigned long long merchantCapabilities;
@property (readonly, nonatomic) long long payLaterSuppressionMode;
@property (readonly, copy, nonatomic) NSString *merchantIdentifier;
@property (readonly, copy, nonatomic) NSString *originURL;
@property (readonly, copy, nonatomic) NSString *webMerchantIdentifier;
@property (readonly, copy, nonatomic) NSString *webMerchantName;
@property (readonly, copy, nonatomic) NSString *merchantName;
@property (readonly, copy, nonatomic) NSNumber *adamIdentifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly, copy, nonatomic) NSString *currencyCode;

- (void).cxx_destruct;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 merchantCountryCode:(id)a2 merchantIdentifier:(id)a3 originURL:(id)a4 webMerchantIdentifier:(id)a5 webMerchantName:(id)a6 merchantName:(id)a7 adamIdentifier:(id)a8 supportedNetworks:(id)a9 merchantCapabilities:(unsigned long long)a10 payLaterSuppressionMode:(long long)a11 options:(unsigned long long)a12;
- (void)updateMerchantIdentifier:(id)a0 originURL:(id)a1 webMerchantIdentifier:(id)a2 webMerchantName:(id)a3;
- (void)updateTransactionAmount:(id)a0;

@end
