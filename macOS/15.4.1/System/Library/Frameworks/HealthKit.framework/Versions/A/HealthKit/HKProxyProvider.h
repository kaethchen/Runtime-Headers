@class _HKXPCConnection, NSString, NSXPCInterface, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, _HKXPCExportable, HKProxyProviderSource;

@interface HKProxyProvider : NSObject {
    id<HKProxyProviderSource> _source;
    id<HKProxyProviderSource> _weakSource;
    _HKXPCConnection *_connection;
    NSString *_daemonLaunchNotificationName;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteInterface;
    long long _connectionGeneration;
    BOOL _invalidated;
    id /* block */ _lock_automaticProxyReconnectionHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _notifyToken;
    NSMutableArray *_pendingFetchContinuations;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly, weak, nonatomic) id<_HKXPCExportable> exportedObject;
@property (copy) id /* block */ automaticProxyReconnectionHandler;
@property BOOL shouldRetryOnInterruption;

+ (id)_relaunchQueue;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)debugIdentifier;
- (void)_resetConnectionWithGeneration:(long long)a0;
- (id)_fetchConnectionAndGeneration:(long long *)a0 error:(id *)a1;
- (void)_fetchEndpointAndConnectionWithContinuation:(id /* block */)a0;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_fetchRetryingProxyWithErrorCount:(long long)a0 handler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)_getSynchronousProxyWithErrorCount:(long long)a0 handler:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (void)_getSynchronousProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)_handleError:(id)a0 connectionGeneration:(long long)a1;
- (void)_lock_flushContinuationsWithConnection:(id)a0 error:(id)a1;
- (void)_lock_setUpConnectionWithEndpoint:(id)a0;
- (id)_lock_sourceWithError:(id *)a0;
- (void)_serverDidFinishLaunching;
- (id /* block */)clientQueueActionHandlerWithCompletion:(id /* block */)a0;
- (id /* block */)clientQueueDoubleObjectHandlerWithCompletion:(id /* block */)a0;
- (id /* block */)clientQueueErrorHandlerWithCompletion:(id /* block */)a0;
- (id /* block */)clientQueueObjectHandlerWithCompletion:(id /* block */)a0;
- (id /* block */)clientQueueProgressHandlerWithHandler:(id /* block */)a0;
- (void)fetchProxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;
- (void)fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)getSynchronousProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)initWithSource:(id)a0 serviceIdentifier:(id)a1 exportedObject:(id)a2 exportedInterface:(id)a3 remoteInterface:(id)a4;
- (id)proxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 error:(id *)a2;
- (void)referenceSourceWeakly;

@end
