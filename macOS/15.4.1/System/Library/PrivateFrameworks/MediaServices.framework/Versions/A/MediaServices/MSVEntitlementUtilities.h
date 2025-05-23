@interface MSVEntitlementUtilities : NSObject

+ (BOOL)hasBoolEntitlement:(id)a0 shouldLogForMissingEntitlement:(BOOL)a1;
+ (id)_checkArrayEntitlement:(id)a0 group:(id)a1 task:(struct __SecTask { } *)a2;
+ (id)_checkBooleanEntitlement:(id)a0 task:(struct __SecTask { } *)a1;
+ (BOOL)_checkEntitlement:(id)a0 inGroup:(id)a1 shouldLogForMissingEntitlement:(BOOL)a2;
+ (void)_logForMissingEntitlementWithResult:(id)a0;
+ (BOOL)hasBoolEntitlement:(id)a0;
+ (BOOL)hasEntitlement:(id)a0 inGroup:(id)a1;
+ (BOOL)hasEntitlement:(id)a0 inGroup:(id)a1 shouldLogForMissingEntitlement:(BOOL)a2;

@end
