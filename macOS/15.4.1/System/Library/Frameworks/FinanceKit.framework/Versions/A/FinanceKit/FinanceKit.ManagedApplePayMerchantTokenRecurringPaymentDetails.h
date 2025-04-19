@class NSString, NSSet;

@interface FinanceKit.ManagedApplePayMerchantTokenRecurringPaymentDetails : NSManagedObject

@property (nonatomic, copy) NSString *recurringPaymentTypeValue;
@property (nonatomic, copy) NSString *intervalUnitValue;
@property (nonatomic) short intervalCount;
@property (nonatomic, retain) NSSet *scheduledPaymentObjects;
@property (nonatomic) BOOL endsAfterLastPayment;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
