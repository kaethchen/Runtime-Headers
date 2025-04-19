@interface ADStatusConditionsImpl : NSObject <ADStatusConditions_XPC>

- (id)setupXPCConnection;
- (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)operationWithCondition:(id)a0 forType:(long long)a1;
- (id)capped:(id)a0 to:(unsigned long long)a1;
- (void)cleanupExpiredConditionsInBuffer;
- (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (void)initializeRateLimitingBuffer;
- (BOOL)isConditionRateLimited:(id)a0 onOperation:(long long)a1;
- (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;

@end
