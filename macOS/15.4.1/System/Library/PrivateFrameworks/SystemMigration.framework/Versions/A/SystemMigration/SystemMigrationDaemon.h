@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SystemMigrationDaemon : NSObject <NSXPCListenerDelegate, SMSystemScannerDaemonClient>

@property (retain) NSMutableArray *clientConnections;
@property (retain) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain) NSMutableArray *daemonAdditions;
@property unsigned long long requestedDaemonScannerState;
@property (retain) NSObject<OS_dispatch_source> *shutdownTimer;
@property struct __IPConfigurationService { } *thunderboltIPService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedDaemon;
+ (id)loghandle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startListeningForConnections;
- (void)attemptIdleExit;
- (void)performOnServiceQueue:(id /* block */)a0 blocking:(BOOL)a1;
- (void)addConnectionObservers:(id)a0;
- (BOOL)daemonIsIdle;
- (void)doIdleCheck;
- (void)performOnServiceQueue:(id /* block */)a0;
- (void)registerDaemonAddition:(id)a0;
- (void)removeConnectionObservers:(id)a0;
- (void)updateRequestedScannerState;
- (void)updateServicesStateAfterRemoval:(id)a0;

@end
