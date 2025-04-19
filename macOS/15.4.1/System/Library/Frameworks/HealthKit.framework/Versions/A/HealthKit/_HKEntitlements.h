@class NSDictionary, NSString;

@interface _HKEntitlements : NSObject {
    NSString *_applicationIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *entitlementValues;

+ (id)entitlementsForCurrentTaskWithError:(id *)a0;
+ (id)entitlementsWithConnection:(id)a0 error:(id *)a1;
+ (void)_setEntitlementsForCurrentTask:(id)a0;
+ (id)_allowedEntitlementsSet;
+ (id)_containerAppExtensionEntitlementsForCurrentTask;
+ (id)_entitlementsWithSecTask:(struct __SecTask { } *)a0 valueOverrides:(id)a1 error:(id *)a2;
+ (id)entitlementsWithApplicationIdentifier:(id)a0;
+ (id)entitlementsWithDictionary:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)valueForEntitlement:(id)a0;
- (BOOL)hasEntitlement:(id)a0;
- (id)stringForEntitlement:(id)a0;
- (id)typesForReadAuthorizationBypass;
- (id)_initWithEntitlementValues:(id)a0;
- (id)_typesFromIdentifierArray:(id)a0;
- (BOOL)arrayEntitlement:(id)a0 containsString:(id)a1;
- (BOOL)hasAccessEntitlementWithIdentifier:(id)a0;
- (BOOL)hasBackgroundDeliveryAPIAccess;
- (BOOL)hasPrivateAccessEntitlementWithIdentifier:(id)a0;
- (BOOL)hasPrivateMetadataAccess;
- (id)typesForReadAuthorizationOverride;
- (id)typesForWriteAuthorizationOverride;

@end
