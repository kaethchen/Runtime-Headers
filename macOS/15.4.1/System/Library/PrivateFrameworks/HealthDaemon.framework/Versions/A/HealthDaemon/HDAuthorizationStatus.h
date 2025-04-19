@interface HDAuthorizationStatus : NSObject

+ (id)authorizationStatusForRecordForObjectType:(id)a0 authorizationStatusRecord:(id)a1 clientEntitlements:(id)a2;
+ (id)authorizationStatusForTypes:(id)a0 bundleIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)isAuthorizedForObjectType:(id)a0 authorizationStatus:(id)a1 clientEntitlements:(id)a2 sharing:(BOOL)a3 error:(id *)a4;

@end
