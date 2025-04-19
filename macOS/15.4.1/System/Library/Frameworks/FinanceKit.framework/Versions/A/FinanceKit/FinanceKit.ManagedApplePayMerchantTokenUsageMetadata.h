@class _TtC10FinanceKit51ManagedApplePayMerchantTokenUsageInformationPackage, _TtC10FinanceKit44ManagedApplePayMerchantTokenUsageInformation, NSDate;

@interface FinanceKit.ManagedApplePayMerchantTokenUsageMetadata : NSManagedObject

@property (nonatomic) long long updateSequenceNumber;
@property (nonatomic, copy) NSDate *updateDate;
@property (nonatomic, retain) _TtC10FinanceKit44ManagedApplePayMerchantTokenUsageInformation *usageInformation;
@property (nonatomic, retain) _TtC10FinanceKit51ManagedApplePayMerchantTokenUsageInformationPackage *usageInformationPackage;
@property (nonatomic, copy) NSDate *defaultExpirationDate;
@property (nonatomic, copy) NSDate *maximumExpirationDate;
@property (nonatomic, copy) NSDate *effectiveExpirationDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)willSave;

@end
