@class NSString, NSMutableDictionary, IDSXPCDaemonController;

@interface _IDSActivityMonitorXPCConnector : NSObject <IDSXPCActivityMonitorClient>

@property (retain, nonatomic) NSMutableDictionary *listenersByActivity;
@property (retain, nonatomic) IDSXPCDaemonController *daemonController;
@property (retain, nonatomic) IDSXPCDaemonController *syncDaemonController;
@property (copy, nonatomic) id /* block */ syncDaemonControllerBuilder;
@property (copy, nonatomic) id /* block */ daemonControllerBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)weakSharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleInterruption;
- (void)_updateActivity:(id)a0 isSupported:(BOOL)a1;
- (void)addListener:(id)a0 forTopic:(id)a1;
- (void)handleIncomingUpdate:(id)a0 onActivity:(id)a1 completion:(id /* block */)a2;
- (id)initWithSyncDaemonControllerBuilder:(id /* block */)a0 daemonControllerBuilder:(id /* block */)a1;
- (void)performAction:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performSyncAction:(id /* block */)a0;
- (void)removeListener:(id)a0 forTopic:(id)a1;

@end
