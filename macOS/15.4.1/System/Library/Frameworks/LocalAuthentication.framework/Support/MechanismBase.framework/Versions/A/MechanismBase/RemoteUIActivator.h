@class NSString, NSXPCListener, NSXPCConnection;
@protocol RemoteUIActivatorDelegate, LADaemonXPC;

@interface RemoteUIActivator : NSObject <RemoteUIActivating> {
    NSXPCConnection *_agentConnection;
    NSXPCListener *_agentListener;
}

@property (class, retain, nonatomic) id<LADaemonXPC> daemon;

@property (weak, nonatomic) id<RemoteUIActivatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)invalidated;
- (id)_connectToUIAgent:(id)a0;
- (void)_disconnectFromUIAgent;
- (id)_prepareUIAgentListener;
- (BOOL)activateUIWithParams:(id)a0;

@end
