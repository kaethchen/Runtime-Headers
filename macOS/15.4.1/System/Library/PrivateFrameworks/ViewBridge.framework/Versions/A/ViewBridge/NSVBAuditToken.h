@interface NSVBAuditToken : NSObject <NSCopying>

@property (readonly) struct { unsigned int val[8]; } auditToken;

+ (id)auditTokenWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (BOOL)token:(struct { unsigned int x0[8]; })a0 isEqualToToken:(struct { unsigned int x0[8]; })a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)tokenAsData;

@end
