@class NSUUID, NSString, NSData, NSDate;

@interface FinanceKit.ManagedCloudBankCredential : NSManagedObject

@property (nonatomic, copy) NSUUID *credentialIdentifier;
@property (nonatomic, copy) NSData *credentialData;
@property (nonatomic) short credentialTypeValue;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, copy) NSDate *updatedDate;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) short ckSchemaVersion;
@property (nonatomic, copy) NSUUID *keyIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
