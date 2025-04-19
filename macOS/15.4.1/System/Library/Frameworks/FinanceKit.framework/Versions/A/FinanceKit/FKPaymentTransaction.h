@class NSDate, NSString, FKContactTransactionInsight, FKPaymentTransactionInsights, FKApplePayTransactionInsight, FKMapsTransactionInsight, NSDecimalNumber, FKAmount;

@interface FKPaymentTransaction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *transactionId;
@property (readonly, copy, nonatomic) FKAmount *amount;
@property (readonly, copy, nonatomic) FKAmount *foreignAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *foreignCurrencyExchangeRate;
@property (readonly, copy, nonatomic) NSDate *transactionDate;
@property (readonly, copy, nonatomic) NSDate *transactionStatusChangedDate;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSString *transactionDescription;
@property (readonly, copy, nonatomic) NSString *originalTransactionDescription;
@property (readonly, copy, nonatomic) NSString *localizedTypeDescription;
@property (readonly, nonatomic) long long merchantCategoryCode;
@property (readonly, copy, nonatomic) NSString *paymentHash;
@property (readonly, nonatomic) BOOL hasNotificationServiceData;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) FKPaymentTransactionInsights *insights;
@property (readonly, nonatomic) FKMapsTransactionInsight *mapsInsight;
@property (readonly, nonatomic) FKApplePayTransactionInsight *applePayInsight;
@property (readonly, nonatomic) FKContactTransactionInsight *contactInsight;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransactionIdentifier:(id)a0 amount:(id)a1 foreignAmount:(id)a2 foreignCurrencyExchangeRate:(id)a3 transactionDate:(id)a4 transactionStatusChangedDate:(id)a5 type:(unsigned long long)a6 status:(long long)a7 transactionDescription:(id)a8 originalTransactionDescription:(id)a9 localizedTypeDescription:(id)a10 merchantCategoryCode:(long long)a11 hasNotificationServiceData:(BOOL)a12 paymentHash:(id)a13 altDSID:(id)a14 insights:(id)a15 serviceIdentifier:(id)a16;
- (id)initWithTransactionIdentifier:(id)a0 amount:(id)a1 foreignAmount:(id)a2 foreignCurrencyExchangeRate:(id)a3 transactionDate:(id)a4 transactionStatusChangedDate:(id)a5 type:(unsigned long long)a6 status:(long long)a7 transactionDescription:(id)a8 originalTransactionDescription:(id)a9 localizedTypeDescription:(id)a10 merchantCategoryCode:(long long)a11 hasNotificationServiceData:(BOOL)a12 paymentHash:(id)a13 altDSID:(id)a14 insights:(id)a15;

@end
