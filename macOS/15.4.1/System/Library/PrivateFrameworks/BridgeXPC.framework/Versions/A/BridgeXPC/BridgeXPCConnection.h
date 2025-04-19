@class OS_remote_service, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_tcp_connection;

@interface BridgeXPCConnection : NSObject {
    NSObject<OS_dispatch_queue> *internal_queue;
    NSObject<OS_tcp_connection> *conn;
    unsigned long long BridgeXPCConnectionState;
    unsigned long long state;
    unsigned long long BridgeXPCConnectionType;
    unsigned long long conn_type;
    NSString *conn_host;
    unsigned int conn_port;
    BOOL eos_notifications_registered;
    int conn_eos_service;
    OS_remote_service *conn_remote_service;
    void *conn_multiverse_device;
    NSMutableArray *msg_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy, nonatomic) id /* block */ eventHandler;

+ (void)connectedPair:(id *)a0 :(id *)a1;
+ (id)HELOMessage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)cancel;
- (void)disconnected;
- (void)sendMessage:(id)a0;
- (void)connect;
- (void)write:(id)a0;
- (void)connected;
- (void)send:(id)a0;
- (void)clearQueue;
- (void)enqueueMessage:(id)a0;
- (id)initForRemoteService:(id)a0;
- (void)flushQueue;
- (void)initEOSDeviceNotifications;
- (id)initWithEOSPortNumber:(unsigned int)a0;
- (id)initWithEOSService:(unsigned int)a0;
- (id)initWithFd:(int)a0;
- (id)initWithHost:(id)a0 portNumber:(unsigned int)a1;
- (id)initWithMultiverseDevice:(void *)a0 portNumber:(unsigned int)a1;
- (id)initWithUnacceptedConnection:(id)a0;
- (void)processIncomingMessage:(id)a0;
- (void)readMessage;
- (void)sendBarrier:(id /* block */)a0;
- (void)setupQueues;
- (void)writeBarrier:(id /* block */)a0;
- (void)writeHELO;
- (void)writeHeader:(id)a0 message:(id)a1;

@end
