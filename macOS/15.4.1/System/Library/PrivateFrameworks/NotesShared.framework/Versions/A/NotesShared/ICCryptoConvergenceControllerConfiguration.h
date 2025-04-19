@class NSString, ICEncryptionKey;

@interface ICCryptoConvergenceControllerConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *passphrase;
@property (copy, nonatomic) ICEncryptionKey *v1MainKey;
@property (copy, nonatomic) ICEncryptionKey *v1NeoMainKey;
@property (copy, nonatomic) NSString *divergedPassphrase;
@property (copy, nonatomic) ICEncryptionKey *divergedV1MainKey;
@property (copy, nonatomic) ICEncryptionKey *divergedV1NeoMainKey;
@property (nonatomic) BOOL includeAllAuthenticatedObjects;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldConvergeObject:(id)a0;

@end
