@class MSPMapsPushDaemonRemoteProxy;

@interface MSPMapsPushDaemonRemoteXPCProxy : NSObject <MSPMapsPushDaemonProxyObserver>

@property (weak, nonatomic) MSPMapsPushDaemonRemoteProxy *target;

- (void).cxx_destruct;
- (id)initWithObserver:(id)a0;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;

@end
