@class PKDaemonClient;
@protocol PKExternalProviders;

@interface PKManager : NSObject

@property (retain) PKDaemonClient *client;
@property (readonly) id<PKExternalProviders> external;

+ (id)defaultManager;
+ (id)managerForUser:(unsigned int)a0;

- (void).cxx_destruct;
- (id)initForService:(const char *)a0;
- (id)initWithDaemon:(id)a0;
- (void)registerPlugInsInBundle:(id)a0 result:(id /* block */)a1;
- (BOOL)terminatePlugInAtURL:(id)a0 withError:(id *)a1;
- (id)containingAppForExtensionProperties:(id)a0;
- (id)containingAppForPlugInConnectedTo:(id)a0;
- (id)containingAppForPlugInWithPid:(int)a0;
- (void)forceHoldPlugIn:(id)a0 result:(id /* block */)a1;
- (id)forceHoldPlugIn:(id)a0 withError:(id *)a1;
- (void)holdPlugInsInApplication:(id)a0 result:(id /* block */)a1;
- (id)holdPlugInsInApplication:(id)a0 withError:(id *)a1;
- (id)holdPlugInsWithExtensionPointName:(id)a0 error:(id *)a1;
- (id)holdPlugInsWithExtensionPointName:(id)a0 platforms:(id)a1 terminate:(BOOL)a2 error:(id *)a3;
- (void)holdPlugInsWithExtensionPointName:(id)a0 platforms:(id)a1 terminate:(BOOL)a2 result:(id /* block */)a3;
- (void)holdPlugInsWithExtensionPointName:(id)a0 result:(id /* block */)a1;
- (void)holdRequest:(id)a0 extensionPointName:(id)a1 platforms:(id)a2 flags:(unsigned long long)a3 result:(id /* block */)a4;
- (void)holdRequest:(id)a0 flags:(unsigned long long)a1 result:(id /* block */)a2;
- (id)informationForPlugInWithPid:(int)a0;
- (id)initForUser:(unsigned int)a0;
- (id)initWithDaemon:(id)a0 externalProviders:(id)a1;
- (id)initWithExternalProviders:(id)a0;
- (void)registerPlugInAtURL:(id)a0 result:(id /* block */)a1;
- (void)releaseHold:(id)a0;
- (BOOL)releaseHold:(id)a0 flags:(unsigned long long)a1 withError:(id *)a2;
- (void)releaseHold:(id)a0 reply:(id /* block */)a1;
- (BOOL)releaseHold:(id)a0 withError:(id *)a1;
- (void)terminatePlugInsInApplication:(id)a0 options:(long long)a1 result:(id /* block */)a2;
- (id)terminatePlugInsInApplication:(id)a0 options:(long long)a1 withError:(id *)a2;
- (void)unregisterPlugInAtURL:(id)a0 result:(id /* block */)a1;
- (void)unregisterPlugInsInBundle:(id)a0 result:(id /* block */)a1;
- (void)updateExtensionStatesForPlugIns:(id)a0 result:(id /* block */)a1;

@end
