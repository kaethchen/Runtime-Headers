@class NSSet;

@interface HMDXPCiCloudSwitchMessagePolicy : HMFMessagePolicy

@property (readonly, copy) NSSet *bundleIdentifiers;

+ (id)policyWithBundleIdentifiers:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBundleIdentifiers:(id)a0;

@end
