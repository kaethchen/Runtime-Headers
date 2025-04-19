@class NSString;

@interface _HKSPDarwinNotificationHeartbeatGenerator : NSObject <HKSPXPCHeartbeatGenerator>

@property (readonly, nonatomic) NSString *lifecycleNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sendHeartbeat;
- (id)initWithLifecycleNotification:(id)a0;

@end
