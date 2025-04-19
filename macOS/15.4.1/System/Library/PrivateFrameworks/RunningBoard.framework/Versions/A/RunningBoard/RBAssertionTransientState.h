@class NSMutableSet, NSMutableDictionary;

@interface RBAssertionTransientState : NSObject <NSCopying> {
    NSMutableDictionary *_cpuUsageViolationPoliciesByRole;
}

@property (readonly, nonatomic) NSMutableSet *tags;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addTag:(id)a0;
- (unsigned long long)maxCPUUsageViolationPolicyForRole:(unsigned char)a0;
- (void)setMaxCPUUsageViolationPolicy:(unsigned long long)a0 forRole:(unsigned char)a1;
- (void)unionState:(id)a0;

@end
