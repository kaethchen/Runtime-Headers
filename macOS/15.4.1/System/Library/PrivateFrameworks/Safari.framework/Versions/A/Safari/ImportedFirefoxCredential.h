@class NSString, NSData;

@interface ImportedFirefoxCredential : WBSPasswordImportedCredential

@property (readonly, copy, nonatomic) NSString *base64EncodedEncryptedUsername;
@property (readonly, copy, nonatomic) NSString *base64EncodedEncryptedPassword;
@property (readonly, copy, nonatomic) NSData *encryptedUsername;
@property (readonly, copy, nonatomic) NSData *encryptedPassword;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)a0;
- (id)initWithBase64EncodedEncryptedUsername:(id)a0 base64EncodedEncryptedPassword:(id)a1 url:(id)a2;

@end
