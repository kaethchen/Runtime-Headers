@class NSLock, NSXPCConnection;

@interface NBStateController : NSObject <NBStateDaemonProtocol>

@property (retain) NSXPCConnection *serviceConnection;
@property (retain) NSLock *connectionLock;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_xpcConnection;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)deleteLocalStateForNoticeboardNotificationIdentifier:(id)a0;
- (void)markNotificationAsFinishedForIdentifier:(id)a0;
- (void)resetNoticeboardCatalogCheckTimestamp;
- (void)setLocalState:(id)a0 forNoticeboardNotificationIdentifier:(id)a1;

@end
