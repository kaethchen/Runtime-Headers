@interface EXAuditToken : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct { unsigned int val[8]; } auditToken;

+ (struct { unsigned int x0[8]; })auditTokenForCurrentProcess;
+ (id)auditToken:(const struct { unsigned int x0[8]; } *)a0 entitlementValue:(id)a1 ofClass:(Class)a2;
+ (BOOL)auditToken:(const struct { unsigned int x0[8]; } *)a0 hasRequiredEntitlements:(id)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end
