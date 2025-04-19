@class FSAgentClientDelegate, NSXPCConnection;

@interface FSAgentClient : NSObject

@property (retain) NSXPCConnection *conn;
@property (retain) FSAgentClientDelegate *delegate;
@property (copy) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ instanceDeathHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setupHandlers;
- (void)getNSXPCListenerEndpoint:(id)a0 instanceID:(id)a1 replyHandler:(id /* block */)a2;
- (void)handleInvalidated;
- (id)initToUser:(unsigned int)a0;
- (void)installedExtensions:(id /* block */)a0;
- (void)setEnabledState:(id)a0 newState:(BOOL)a1 replyHandler:(id /* block */)a2;
- (void)startExtension:(id)a0 instanceID:(id)a1 replyHandler:(id /* block */)a2;
- (void)stopExtension:(id)a0 instanceID:(id)a1 replyHandler:(id /* block */)a2;

@end
