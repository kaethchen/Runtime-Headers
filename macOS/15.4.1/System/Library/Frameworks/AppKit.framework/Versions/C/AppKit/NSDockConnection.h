@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NSDockConnection : NSObject {
    BOOL _started;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    int _pid;
    id /* block */ _receiveHandler;
}

@property (readonly, copy) NSString *serviceName;

+ (id)allConnections;
+ (id)_nameToConnectionMap;
+ (id)connectionWithServiceName:(id)a0;

- (void)dealloc;
- (id)init;
- (void)sendMessage:(id)a0;
- (void)reactToDockDied;
- (void)startConnection;
- (void)_makeConnectionIfNeeded;
- (void)_makeConnectionIfNeededWithRetryInterval:(double)a0 onDemand:(BOOL)a1;
- (void)_processEvent:(id)a0;
- (id)initWithServiceName:(id)a0 receiveHandler:(id /* block */)a1;
- (void)reactToDockAlive;
- (int)remotePid;
- (void)sendMessage:(id)a0 synchronous:(BOOL)a1 replyHandler:(id /* block */)a2;

@end
