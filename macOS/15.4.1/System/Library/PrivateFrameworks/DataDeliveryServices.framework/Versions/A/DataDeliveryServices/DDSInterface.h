@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, DDSManaging, DDSManagingDelegate;

@interface DDSInterface : NSObject <DDSManaging, DDSManagingDelegate>

@property (retain, nonatomic) id<DDSManaging> serverOverride;
@property (retain, nonatomic) NSXPCConnection *remoteServer;
@property (readonly, nonatomic) DDSInterface *sharedInstance;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionUsageQueue;
@property (weak) id<DDSManagingDelegate> delegate;
@property (readonly, copy) NSString *xpcServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interface;
+ (unsigned long long)xpcConnectionOptionsForServer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)server;
- (void)triggerUpdate;
- (void)_teardownXPCConnection;
- (void)createConnectionIfNecessary;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (void)fetchAssetUpdateStatusForQuery:(id)a0 callback:(id /* block */)a1;
- (id)initWithXPCServiceName:(id)a0;
- (void)removeAssertionWithID:(id)a0;
- (id)serviceObjectProxy;
- (id)syncServer;
- (id)syncServiceObjectProxy;
- (void)teardownXPCConnection;
- (void)triggerDump;
- (void)updateAssetForQuery:(id)a0 callback:(id /* block */)a1;

@end
