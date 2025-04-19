@class NSXPCListener, SOAReceiver, NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SOAController : NSObject <NSXPCListenerDelegate, SOAReceiverProtocol>

@property (retain) SOAReceiver *receiver;
@property (retain) NSXPCListener *listener;
@property (retain) NSMutableArray *connections;
@property (retain) NSString *name;
@property (retain) NSMutableDictionary *controllerProperties;
@property BOOL markedForDestruction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *controllerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)receiverProtocol;
+ (id)remoteReceiverProtocol;
+ (Class)receiverClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)bundleIdentifier;
- (id)initWithXPCListener:(id)a0;
- (BOOL)isPersistent;
- (void)setupComplete;
- (void)addDefaultsObject:(id)a0 toCollection:(id)a1 completionBlock:(id /* block */)a2;
- (id)defaultsObjectForKey:(id)a0;
- (void)removeDefaultsObject:(id)a0 fromCollection:(id)a1 completionBlock:(id /* block */)a2;
- (void)removeDefaultsObjectForKey:(id)a0 inCollection:(id)a1 completionBlock:(id /* block */)a2;
- (void)setDefaultsObject:(id)a0 forKey:(id)a1 completionBlock:(id /* block */)a2;
- (void)setDefaultsObject:(id)a0 forKey:(id)a1 inCollection:(id)a2 completionBlock:(id /* block */)a3;
- (void)setValue:(id)a0 forControllerKey:(id)a1;
- (void)connectionDied:(id)a0;
- (void)connectionAdded:(id)a0;
- (void)mainInvalidate;
- (BOOL)persistsWithoutAccounts;
- (void)suspendConnections;
- (id)userDefaultsDictionary;

@end
