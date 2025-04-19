@interface FCKeyValueStoreSavePolicy : NSObject

+ (id)defaultPolicy;
+ (id)appBackgroundPolicyWithActivityMonitor:(id)a0 backgroundTaskable:(id)a1;
+ (id)throttlePolicyWithDelay:(double)a0;
+ (id)unthrottledPolicy;

- (void)scheduleSaveOnQueue:(id)a0 handler:(id /* block */)a1;

@end
