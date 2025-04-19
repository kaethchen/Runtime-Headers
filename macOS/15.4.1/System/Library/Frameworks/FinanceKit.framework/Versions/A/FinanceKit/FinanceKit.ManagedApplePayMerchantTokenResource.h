@class NSString, NSData;

@interface FinanceKit.ManagedApplePayMerchantTokenResource : NSManagedObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *localization;
@property (nonatomic, copy) NSData *data;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
