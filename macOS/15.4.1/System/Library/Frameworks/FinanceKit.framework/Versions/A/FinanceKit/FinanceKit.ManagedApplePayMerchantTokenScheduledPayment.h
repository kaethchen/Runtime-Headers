@class NSDecimalNumber, NSString;

@interface FinanceKit.ManagedApplePayMerchantTokenScheduledPayment : NSManagedObject

@property (nonatomic) short decodingIndex;
@property (nonatomic, retain) NSDecimalNumber *amountValue;
@property (nonatomic, copy) NSString *amountCurrencyCode;
@property (nonatomic) short paymentYear;
@property (nonatomic) short paymentMonth;
@property (nonatomic) short paymentDay;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
