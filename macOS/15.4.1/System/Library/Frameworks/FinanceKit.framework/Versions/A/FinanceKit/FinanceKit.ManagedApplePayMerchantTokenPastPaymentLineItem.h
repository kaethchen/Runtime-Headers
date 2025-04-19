@class _TtC10FinanceKit15LocalizedString, NSString, NSDecimalNumber;

@interface FinanceKit.ManagedApplePayMerchantTokenPastPaymentLineItem : NSManagedObject

@property (nonatomic) short decodingIndex;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *label;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, retain) NSDecimalNumber *amountValue;
@property (nonatomic, copy) NSString *amountCurrencyCode;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
