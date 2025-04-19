@class NSDecimalNumber, NSString, NSNumber;

@interface FinanceKit.ManagedApplePayMerchantTokenDeferredPaymentDetails : NSManagedObject

@property (nonatomic, retain) NSDecimalNumber *amountValue;
@property (nonatomic, copy) NSString *amountCurrencyCode;
@property (nonatomic, retain) NSNumber *paymentYear;
@property (nonatomic, retain) NSNumber *paymentMonth;
@property (nonatomic, retain) NSNumber *paymentDay;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
