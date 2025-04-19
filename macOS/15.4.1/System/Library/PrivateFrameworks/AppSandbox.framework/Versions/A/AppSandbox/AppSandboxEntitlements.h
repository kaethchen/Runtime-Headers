@class NSDictionary, NSString;

@interface AppSandboxEntitlements : NSObject {
    NSDictionary *_entitlements;
    NSString *_signingIdentifier;
    BOOL _appSandboxOnce;
    BOOL _requestsAppSandbox;
    BOOL _requestsInheritance;
}

+ (id)entitlementsForCodeIdentity:(id)a0 error:(id *)a1;
+ (id)entitlementsForCodeAtURL:(id)a0 error:(id *)a1;
+ (id)entitlementsWithDictionary:(id)a0 forAppWithSigningIdentifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)arrayValueForEntitlement:(id)a0;
- (BOOL)__requestsInheritanceOfSandbox:(id *)a0;
- (id)allEntitlements;
- (id)arrayValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)__requestsAppSandbox:(id *)a0;
- (BOOL)boolValueForEntitlement:(id)a0;
- (BOOL)boolValueForEntitlement:(id)a0 error:(id *)a1;
- (BOOL)hasEntitlement:(id)a0 ofType:(Class)a1 value:(id *)a2 error:(id *)a3;
- (BOOL)hasEntitlement:(id)a0 value:(id *)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 forAppWithSigningIdentifier:(id)a1 error:(id *)a2;
- (BOOL)requestsAppSandbox:(id *)a0;
- (BOOL)requestsAppSandboxWithInheritance:(BOOL *)a0 error:(id *)a1;

@end
