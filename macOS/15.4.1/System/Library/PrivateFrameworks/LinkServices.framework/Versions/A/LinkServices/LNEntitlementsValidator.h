@class NSString;

@interface LNEntitlementsValidator : NSObject

@property (class, readonly, copy, nonatomic) NSString *bundleIdentifierForCurrentProcess;

+ (id)bundleIdentifierForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (BOOL)currentProcessHasMachLookup:(id)a0;
+ (BOOL)validateEntitlement:(id)a0 forCurrentTaskWithValidator:(id /* block */)a1;
+ (id)valueForEntitlement:(id)a0 secTaskRef:(struct __SecTask { } *)a1;
+ (id)valueForEntitlement:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1;
+ (BOOL)validateEntitlement:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 validator:(id /* block */)a2;
+ (BOOL)validateEntitlement:(id)a0 secTaskRef:(struct __SecTask { } *)a1 validator:(id /* block */)a2;

@end
