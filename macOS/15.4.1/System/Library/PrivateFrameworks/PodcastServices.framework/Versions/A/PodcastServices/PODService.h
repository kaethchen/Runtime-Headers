@class NSMutableDictionary, NSXPCConnection, NSObject, PODServiceConfiguration;
@protocol OS_os_log;

@interface PODService : NSObject

@property (readonly, nonatomic) NSMutableDictionary *inflightXPCInvalidationHandlers;
@property (readonly, nonatomic) NSXPCConnection *serviceConnection;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly, nonatomic) PODServiceConfiguration *serviceConfiguration;
@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithConfiguration:(id)a0;
- (void)_serviceConnectionDidInvalidate;
- (void)_invalidateServiceConnection;
- (void)_invokeMessageSendingInvalidationHandlers;
- (void)_withProxy:(id /* block */)a0;
- (void)_withProxyForwardingForMessage:(SEL)a0 perform:(id /* block */)a1 errorHandler:(id /* block */)a2;
- (id)addInflightXPCInvalidationHandler:(id /* block */)a0;
- (void)connectToService;
- (void)removeInflightXPCInvalidationHandler:(id)a0;

@end
