@class NSString, NSXPCConnection, NSLock, NSMutableArray;

@interface AWDLServiceDiscoveryManager : NSObject <AWDLServiceDiscoveryManagerXPCDelegate> {
    NSLock *_lock;
    NSXPCConnection *_xpcConnection;
    int _notifyToken;
    BOOL _attemptedReconnect;
    NSMutableArray *_activeTrafficRegistrations;
    long long _suspendCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)clearTrafficRegistration:(id)a0 error:(id *)a1;
- (BOOL)setTrafficRegistration:(id)a0 error:(id *)a1;
- (void)connectionInvalidated;
- (BOOL)performRealtimeConnectivityCheckWithConfiguration:(id)a0 error:(id *)a1;
- (void)_destroyConnection;
- (void)_removeFirstTrafficRegistrationMatching:(id)a0;
- (BOOL)_requiresConnection;
- (void)_retryConnection;
- (BOOL)_usingAWDLDiscoveryManagerProxy:(id /* block */)a0 onSuccess:(id /* block */)a1 error:(id *)a2;
- (BOOL)getActiveTrafficRegistrationWithCompletionHandler:(id /* block */)a0;
- (void)invalidatedActiveTrafficRegistration:(id)a0;
- (BOOL)queryAirPlayConnectivityWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)resumeAWDLWithError:(id *)a0;
- (BOOL)setTrafficRegistration:(id)a0 onInvalidationHandler:(id /* block */)a1 error:(id *)a2;
- (BOOL)suspendAWDLWithError:(id *)a0;

@end
