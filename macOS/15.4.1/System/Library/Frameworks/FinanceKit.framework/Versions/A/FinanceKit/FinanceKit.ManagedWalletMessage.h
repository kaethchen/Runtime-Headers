@class NSString, NSDate;

@interface FinanceKit.ManagedWalletMessage : NSManagedObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) long long priority;
@property (nonatomic) short messageTypeValue;
@property (nonatomic, copy) NSString *termsAndConditionsID;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSString *orderFulfillmentIdentifier;
@property (nonatomic, copy) NSString *orderReturnIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)didSave;

@end
