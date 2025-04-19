@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYAddLinkContextClient : NSObject

@property (retain, nonatomic) NSXPCConnection *_connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)userDidRemoveContentItems:(id)a0;
- (void)userEditDidAddContentItems:(id)a0;
- (void)userWillAddLinkWithActivity:(id)a0 completion:(id /* block */)a1;
- (void)_configureConnectionAndResume;
- (void)_createConnectionIfNeeded;
- (void)createConnectionWithEndpoint:(id)a0;

@end
