@interface HMDXPCMessagePolicy : HMFMessagePolicy

@property (readonly) unsigned long long entitlements;

+ (id)defaultPolicy;
+ (id)policyWithEntitlements:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)__initWithEntitlements:(unsigned long long)a0;

@end
