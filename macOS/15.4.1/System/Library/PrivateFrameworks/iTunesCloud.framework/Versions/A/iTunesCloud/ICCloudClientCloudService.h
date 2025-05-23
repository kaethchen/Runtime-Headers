@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, ICCloudServerListenerEndpointProviding;

@interface ICCloudClientCloudService : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, weak, nonatomic) id<ICCloudServerListenerEndpointProviding> listenerEndpointProvider;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_xpcConnectionWithListenerEndpoint:(id)a0;
- (id)initWithListenerEndpointProvider:(id)a0;

@end
