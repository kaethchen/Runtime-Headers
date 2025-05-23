@class NSString, _IDSActivityMonitorXPCConnector, NSArray, NSObject;
@protocol OS_dispatch_queue, IDSActivityMonitorListenerDelegate;

@interface IDSActivityMonitor : NSObject <_IDSActivityMonitorXPCConnectorXPCListener>

@property (retain, nonatomic) _IDSActivityMonitorXPCConnector *XPCConnector;
@property (retain, nonatomic) NSString *activityIdentifier;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IDSActivityMonitorListenerDelegate> delegate;
@property (readonly, nonatomic) NSArray *subscriptions;
@property (readonly, nonatomic) NSString *activity;
@property (nonatomic) BOOL listeningForUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)beginBroadcastingWithInfo:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleIncomingUpdate:(id)a0 onActivity:(id)a1 completion:(id /* block */)a2;
- (id)initWithActivity:(id)a0 serviceIdentifier:(id)a1;
- (id)initWithActivity:(id)a0 serviceIdentifier:(id)a1 queue:(id)a2;
- (id)initWithActivity:(id)a0 serviceIdentifier:(id)a1 queue:(id)a2 xpcConnector:(id)a3;
- (void)stopBroadcastingForSubActivity:(id)a0 withCompletion:(id /* block */)a1;

@end
