@class NSTimer, NSMapTable, NSXPCConnection;

@interface SOHelperCenter : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSTimer *reconnectionTimer;
@property (retain) NSMapTable *nameToWeakControllerMap;

+ (id)sharedInstance;
+ (void)lastPlugInUnloaded;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reconnect;
- (void)_initializeConnection;
- (void)_accountConfigurationChanged:(id)a0;
- (void)_reconnectNow:(id)a0;
- (void)loadPlugIn:(id)a0 forController:(id)a1;
- (void)unloadPlugIn:(id)a0;

@end
