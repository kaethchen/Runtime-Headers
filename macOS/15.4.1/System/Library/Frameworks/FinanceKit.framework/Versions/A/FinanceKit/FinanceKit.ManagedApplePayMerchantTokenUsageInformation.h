@class _TtC10FinanceKit15LocalizedString, NSString, NSSet, NSDate;

@interface FinanceKit.ManagedApplePayMerchantTokenUsageInformation : NSManagedObject

@property (nonatomic) short decodingVersion;
@property (nonatomic, copy) NSDate *decodingDate;
@property (nonatomic, copy) NSString *merchantTokenIdentifier;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *merchantName;
@property (nonatomic, copy) NSString *merchantLogoName;
@property (nonatomic, retain) NSSet *upcomingPaymentObjects;
@property (nonatomic, retain) NSSet *pastPaymentObjects;
@property (nonatomic, retain) _TtC10FinanceKit15LocalizedString *otherUsageDescription;
@property (nonatomic, copy) NSString *developmentLocalization;
@property (nonatomic, retain) NSSet *resourceObjects;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSDate *expirationDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
