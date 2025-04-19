@class NSXPCListenerEndpoint, NSHashTable, NSXPCConnection;

@interface TKTokenConfigurationConnection : NSObject {
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    NSHashTable *_configurationConnections;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (void)registerForConfigurationChange:(id)a0;
- (id)configurationProtocol;
- (void)tokenConfigurationChanged:(id)a0;

@end
