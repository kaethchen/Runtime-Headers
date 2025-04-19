@class NSString;

@interface STSCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *subIdentifier;
@property (readonly, nonatomic) NSString *secondaryIdentifier;
@property (readonly, nonatomic) NSString *secondarySubIdentifier;
@property (readonly, nonatomic) unsigned char type;

+ (id)credentialWithType:(unsigned char)a0 identifier:(id)a1 subIdentifier:(id)a2;
+ (id)unifiedAccessCredentialWithAID:(id)a0 publicKeyIdentifier:(id)a1;
+ (id)unifiedAccessCredentialWithAIDs:(id)a0 primaryPublicKeyIdentifier:(id)a1 secondaryAid:(id)a2 secondaryPublicKeyIdentifier:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned char)a0 identifier:(id)a1 subIdentifier:(id)a2;
- (struct __SecAccessControl { } *)copyAccessControl;
- (id)initWithType:(unsigned char)a0 identifier:(id)a1 subIdentifier:(id)a2 secondaryIdentifier:(id)a3 secondarySubIdentifier:(id)a4;

@end
