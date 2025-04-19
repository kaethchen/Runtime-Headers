@class NSString;

@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allEntitlements;
- (id)entitlementsForProcess:(id)a0;
- (void)purgeEntitlementsForProcess:(id)a0;
- (BOOL)rb_hasEntitlement:(id)a0;
- (BOOL)rb_hasEntitlementDomain:(unsigned long long)a0;

@end
