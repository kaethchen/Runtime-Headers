@interface TCPowerLog : NSObject

- (void)logSmartReplyQueryWithEventType:(long long)a0 withApp:(long long)a1 withQueryType:(long long)a2 withInputTokenCount:(unsigned long long)a3 withOutputTokenCount:(unsigned long long)a4;
- (BOOL)processHasPerfPowerServicesEntitlement;

@end
