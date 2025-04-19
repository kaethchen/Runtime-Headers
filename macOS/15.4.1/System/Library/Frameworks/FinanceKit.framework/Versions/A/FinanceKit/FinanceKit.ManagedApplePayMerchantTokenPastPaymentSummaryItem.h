@class _TtC10FinanceKit15LocalizedString, NSDecimalNumber, NSString;

@interface FinanceKit.ManagedApplePayMerchantTokenPastPaymentSummaryItem : NSManagedObject

@property (nonatomic) short decodingIndex;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *label;
@property (nonatomic, retain) NSDecimalNumber *amountValue;
@property (nonatomic, copy) NSString *amountCurrencyCode;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
