@class NSData, NSDate;

@interface FinanceKit.ManagedPendingApplePayTransactionRegistration : NSManagedObject {
    void /* unknown type, empty encoding */ transactionIdentifierKey;
    void /* unknown type, empty encoding */ privateKeyKey;
}

@property (nonatomic, copy) NSData *primitivePrivateKey;
@property (nonatomic) long long registrationAttemptCount;
@property (nonatomic, copy) NSDate *lastRegistrationAttemptDate;
@property (nonatomic, copy) NSDate *creationDate;

- (void).cxx_destruct;
- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)awakeFromInsert;

@end
