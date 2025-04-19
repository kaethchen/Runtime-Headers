@interface DynamicCodeIdentity : CodeIdentity {
    struct { unsigned int val[8]; } _token;
}

+ (id)currentApplication;
+ (id)dynamicCodeIdentityForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)dynamicCodeIdentityForAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
+ (id)dynamicCodeIdentityForProcessIdentifier:(int)a0;
+ (id)dynamicCodeIdentityForProcessIdentifier:(int)a0 error:(id *)a1;
+ (id)signingRoot;

- (id)description;
- (BOOL)isAppSandboxed;
- (unsigned int)codeStatusFlags;
- (id)guestWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)guestWithAuditToken:(struct { unsigned int x0[8]; })a0 error:(id *)a1;
- (BOOL)iOSPlatform;
- (id)initWithSecCodeRef:(struct __SecCode { } *)a0;
- (id)initWithSecCodeRef:(struct __SecCode { } *)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (id)staticCodeIdentity;
- (BOOL)validateWithFlags:(unsigned int)a0 additionalRequirement:(id)a1 error:(id *)a2;

@end
