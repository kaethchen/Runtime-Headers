@interface VirtualDisplayServer : NSObject {
    unsigned int _serverRPC_port;
}

- (void)dealloc;
- (id)init;
- (void)close;
- (int)spawnProxyWithOptions:(id)a0 clientHandler_port:(unsigned int)a1 proxyRPC_port:(unsigned int *)a2 displayID:(unsigned int *)a3;

@end
