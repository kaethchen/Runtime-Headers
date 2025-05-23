@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying>

@property BOOL requiresSecureMessage;
@property BOOL allowsAnonymousMessage;
@property BOOL requiresAccountMessage;
@property unsigned long long transportRestriction;
@property unsigned long long roles;

+ (id)defaultPolicy;
+ (id)defaultSecurePolicy;
+ (id)defaultSecurePrimaryResidentPolicy;
+ (id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)a0 allowsAnonymousMessage:(BOOL)a1 requiresAccountMessage:(BOOL)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)__initWithRequiresSecureMessage:(BOOL)a0 allowsAnonymousMessage:(BOOL)a1 requiresAccountMessage:(BOOL)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;

@end
