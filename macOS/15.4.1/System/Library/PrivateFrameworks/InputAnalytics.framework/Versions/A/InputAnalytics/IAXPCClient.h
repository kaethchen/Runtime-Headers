@class NSXPCConnection, IAXPCProtocolObject;

@interface IAXPCClient : NSObject {
    NSXPCConnection *_connection;
    IAXPCProtocolObject *_serverInstance;
}

@property (readonly) IAXPCProtocolObject *server;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (void)logMessage:(id)a0;
- (void)invalidateConnection;

@end
