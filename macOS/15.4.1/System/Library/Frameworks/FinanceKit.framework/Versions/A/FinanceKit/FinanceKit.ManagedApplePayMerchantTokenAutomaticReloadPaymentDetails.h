@class NSDecimalNumber, NSString;

@interface FinanceKit.ManagedApplePayMerchantTokenAutomaticReloadPaymentDetails : NSManagedObject

@property (nonatomic, retain) NSDecimalNumber *amountValue;
@property (nonatomic, copy) NSString *amountCurrencyCode;
@property (nonatomic, retain) NSDecimalNumber *thresholdAmountValue;
@property (nonatomic, copy) NSString *thresholdAmountCurrencyCode;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
