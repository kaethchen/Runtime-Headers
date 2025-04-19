@interface PCStatusConditionsImpl : NSObject <APStatusConditions_XPC>

- (id)_setupXPCConnection;
- (void)isStatusConditionRegistered:(id)a0 bundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)operationWithCondition:(id)a0 forType:(long long)a1;
- (void)cleanupExpiredConditionsInBuffer;
- (void)clearStatusCondition:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isConditionRateLimited:(id)a0 onOperation:(long long)a1;
- (void)setStatusCondition:(id)a0 completionHandler:(id /* block */)a1;

@end
