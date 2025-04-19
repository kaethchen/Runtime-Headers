@class NSString, NSSet;

@interface RBEntitlements : NSObject <RBEntitlementPossessing> {
    NSSet *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithEntitlements:(id)a0;
- (BOOL)rb_hasEntitlement:(id)a0;
- (BOOL)rb_hasEntitlementDomain:(unsigned long long)a0;

@end
