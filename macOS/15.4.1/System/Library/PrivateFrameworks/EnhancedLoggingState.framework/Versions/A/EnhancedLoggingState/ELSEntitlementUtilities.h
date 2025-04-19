@interface ELSEntitlementUtilities : NSObject

+ (BOOL)currentProcessHasEntitlement:(id)a0;
+ (BOOL)auditToken:(struct { unsigned int x0[8]; } *)a0 hasEntitlement:(id)a1;
+ (void)assertCurrentProcessHasEntitlement;
+ (id)entitlementMissingMessage;

@end
