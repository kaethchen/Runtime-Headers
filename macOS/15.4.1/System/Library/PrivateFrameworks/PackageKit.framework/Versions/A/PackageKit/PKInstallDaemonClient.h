@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface PKInstallDaemonClient : NSObject <PKInstallService, PKInstallServiceClient> {
    int _clientPID;
    struct { unsigned int val[8]; } _clientAuditToken;
    unsigned int _clientUID;
    NSString *_clientPath;
    NSMutableSet *_outstandingInstallTokens;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)addToken:(id)a0 reply:(id /* block */)a1;
- (void)connectionEstablishedWithReply:(id /* block */)a0;
- (BOOL)clientPermitted;
- (void)adoptToken:(id)a0 reply:(id /* block */)a1;
- (void)cancelInstallsWherePossible;
- (void)currentStageStatusOfInstallRequest:(id)a0 calculatePurgeableSize:(BOOL)a1 reply:(id /* block */)a2;
- (void)displayNamesForToken:(id)a0 reply:(id /* block */)a1;
- (void)installDidBeginCommitForToken:(id)a0;
- (void)installDidBeginForToken:(id)a0;
- (void)installDidEndForToken:(id)a0;
- (void)installStatusForToken:(id)a0 reply:(id /* block */)a1;
- (void)installWillProceedForState:(int)a0 withSandbox:(id)a1 withToken:(id)a2 completion:(id /* block */)a3;
- (BOOL)isWatchingInstallWithToken:(id)a0;
- (void)registerAuthorizationFromInstallRequest:(id)a0 reply:(id /* block */)a1;
- (void)tokenForCurrentCommitIgnoringBlockingClients:(BOOL)a0 reply:(id /* block */)a1;
- (void)tokenForInstallRequest:(id)a0 reply:(id /* block */)a1;

@end
