@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface HCXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue;
@property (nonatomic) unsigned long long requestedUpdates;
@property (readonly, nonatomic) int pid;

+ (id)clientWithConnection:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)setWantsUpdates:(BOOL)a0 forIdentifier:(unsigned long long)a1;
- (BOOL)sendMessage:(id)a0 errorBlock:(id /* block */)a1;
- (void)teardownConnection;
- (BOOL)wantsUpdatesForIdentifier:(unsigned long long)a0;

@end
