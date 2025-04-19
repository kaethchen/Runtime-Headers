@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SOAPlugInController : NSObject <SOAPlugInControllerProtocol, NSXPCListenerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *pluginControllerQueue;
@property (retain) NSMutableDictionary *plugInNameToBundle;
@property (retain) NSMutableDictionary *plugInNameToController;
@property (retain) NSMutableArray *loadedConnections;
@property BOOL isSuspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeConnection:(id)a0;
- (void)reconnect;
- (oneway void)connectPlugIn:(id)a0 withConnectionHandler:(id /* block */)a1;
- (void)_exitCleanly;
- (BOOL)_isAppRunning;
- (void)_lastConnectionDied:(id)a0;
- (void)suspendConnections;

@end
