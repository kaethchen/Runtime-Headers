@class NSArray, _HMFCFHTTPServer, NSString, HMFNetManager, HMFMutableNetService, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMFHTTPServerDelegate;

@interface HMFHTTPServer : HMFObject <_HMFCFHTTPServerDelegate, HMFHTTPClientConnectionDelegate, HMFLogging, HMFDumpState> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_requestHandlers;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) _HMFCFHTTPServer *internal;
@property (readonly, nonatomic) HMFNetManager *netManager;
@property (weak) id<HMFHTTPServerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long port;
@property (readonly, nonatomic) unsigned long long options;
@property double connectionIdleTimeout;
@property (readonly, nonatomic) HMFMutableNetService *netService;
@property (readonly, copy) NSMutableArray *connections;
@property (readonly, copy) NSArray *requestHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)shortDescription;
- (void)removeConnection:(id)a0;
- (void)addConnection:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)connection:(id)a0 didReceiveRequest:(id)a1;
- (id)logIdentifier;
- (void)serverDidInvalidate:(id)a0;
- (void)_stopWithError:(id)a0;
- (void)_handleClosedConnection:(id)a0;
- (void)_handleOpenedConnection:(id)a0;
- (void)_handleReceivedRequest:(id)a0 connection:(id)a1;
- (id)attributeDescriptions;
- (id)dumpState;
- (id)initWithServiceType:(id)a0 name:(id)a1 port:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)initWithServiceType:(id)a0 name:(id)a1 port:(unsigned long long)a2 options:(unsigned long long)a3 netManager:(id)a4;
- (void)registerRequestHandler:(id)a0;
- (void)server:(id)a0 didCloseConnection:(id)a1;
- (void)server:(id)a0 didOpenConnection:(id)a1;
- (void)stopWithError:(id)a0;
- (void)unregisterRequestHandler:(id)a0;

@end
