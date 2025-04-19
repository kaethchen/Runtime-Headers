@class _TtC10FinanceKit15LocalizedString, NSString, _TtC10FinanceKit51ManagedApplePayMerchantTokenRecurringPaymentDetails, _TtC10FinanceKit57ManagedApplePayMerchantTokenAutomaticReloadPaymentDetails, _TtC10FinanceKit50ManagedApplePayMerchantTokenDeferredPaymentDetails;

@interface FinanceKit.ManagedApplePayMerchantTokenUpcomingPayment : NSManagedObject

@property (nonatomic) short decodingIndex;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *label;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *paymentTypeValue;
@property (nonatomic, retain) _TtC10FinanceKit51ManagedApplePayMerchantTokenRecurringPaymentDetails *recurringPaymentDetails;
@property (nonatomic, retain) _TtC10FinanceKit50ManagedApplePayMerchantTokenDeferredPaymentDetails *deferredPaymentDetails;
@property (nonatomic, retain) _TtC10FinanceKit57ManagedApplePayMerchantTokenAutomaticReloadPaymentDetails *automaticReloadPaymentDetails;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (BOOL)validateForInsert:(id *)a0;

@end
