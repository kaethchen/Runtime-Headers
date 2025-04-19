@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)connectionForMachService:(id)a0;
+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;
+ (id)connectionFor:(id)a0;
+ (void)removeSharedConnectionForMachService:(id)a0;
+ (id)sharedConnectionFor:(id)a0;
+ (id)sharedConnections;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)connectionInterrupted;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)connectionInvalidated;
- (void)decreaseConnectionCount;
- (void)increaseConnectionCount;
- (void)invalidateForDelegate:(id)a0;

@end
