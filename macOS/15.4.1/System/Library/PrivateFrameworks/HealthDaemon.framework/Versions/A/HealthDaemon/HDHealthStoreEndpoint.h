@class HKProfileIdentifier, NSString, NSObject, NSMutableArray, HDHealthStoreServer, HDXPCClient, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDHealthStoreEndpoint : NSObject <HDProfileReadyObserver, HKHealthStoreEndpointInterface, _HKXPCExportable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableArray *_serverCompletionsAwaitingProfileReady;
}

@property (readonly, weak, nonatomic) HDDaemon *daemon;
@property (readonly, nonatomic) HDXPCClient *client;
@property (readonly, nonatomic) HDHealthStoreServer *server;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endpointWithClient:(id)a0 healthDaemon:(id)a1;

- (void).cxx_destruct;
- (void)invalidate;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)connectionConfigured;
- (void)remote_serverForConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)initWithClient:(id)a0 daemon:(id)a1;
- (void)profileDidBecomeReady:(id)a0;

@end
