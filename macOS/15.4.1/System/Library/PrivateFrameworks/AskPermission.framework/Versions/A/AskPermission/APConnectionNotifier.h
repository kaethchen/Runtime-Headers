@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, ConnectionProtocol;

@interface APConnectionNotifier : NSObject

@property (class, readonly) APConnectionNotifier *sharedNotifier;

@property (readonly) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain) NSXPCConnection *underlyingRemoteConnection;
@property (readonly) id<ConnectionProtocol> remoteObjectProxy;

- (id)init;
- (void).cxx_destruct;
- (id)_newRemoteConnection;
- (id)_remoteConnection;

@end
