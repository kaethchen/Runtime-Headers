@interface CBUserIdentity : CBIdentity <NSCoding, NSCopying>

@property (readonly, nonatomic) unsigned int posixUID;
@property (readonly, nonatomic) struct __SecCertificate { } *certificate;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (id)userIdentityWithPosixUID:(unsigned int)a0 authority:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)authenticateWithPassword:(id)a0;
- (id)initUserWithName:(id)a0 authority:(id)a1;

@end
