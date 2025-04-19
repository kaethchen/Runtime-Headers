@class NSNotificationCenter, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSEngagementConnection : NSObject <AMSEngagementClientProtocol, AMSEngagementServiceProtocol>

@property (retain) NSXPCConnection *connection;
@property (retain) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ errorHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNotificationCenter:(id)a0;
- (id)proxy;
- (id)_newRemoteConnection;
- (void)treatmentStoreServiceWithReply:(id /* block */)a0;
- (id)_makeExportedClientConnectionInterface;
- (id)_makeRemoteConnectionInterface;
- (void)_removeRemoteConnection;
- (void)beginObservingMessages;
- (void)contentInfoForApp:(id)a0 cacheKey:(id)a1 version:(id)a2 reply:(id /* block */)a3;
- (void)enqueueWithRequest:(id)a0 completion:(id /* block */)a1;
- (oneway void)fetchMetricsIdentifiers;
- (void)handlePushedEvent:(id)a0;
- (void)manualSyncMetricsIdentifiers;
- (void)notifyBlockedMessages:(id)a0;
- (oneway void)syncMetricsIdentifiers;
- (void)syncWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)treatmentsDidSyncronize;

@end
