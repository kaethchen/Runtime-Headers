@class FSClientTaskUpdateHandler, NSXPCConnection;

@interface FSClient : NSObject {
    NSXPCConnection *_conn;
}

@property (class, readonly) FSClient *sharedInstance;

@property (retain) FSClientTaskUpdateHandler *fsClientTaskUpdateHandler;

+ (id)new;
+ (void)initialize;
+ (id)installedExtensionsWithError:(id *)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setupConnection;
- (void)installedExtensionsSync:(id /* block */)a0;
- (void)validateVolumeName:(id)a0 usingBundle:(id)a1 volumeID:(id)a2 replyHandler:(id /* block */)a3;
- (void)setupHandlers;
- (void)activateVolume:(id)a0 shortName:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)activateVolume:(id)a0 usingBundle:(id)a1 options:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 replyHandler:(id /* block */)a4;
- (void)activateVolume:(id)a0 usingBundle:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)cancelTask:(id)a0 replyHandler:(id /* block */)a1;
- (void)checkResource:(id)a0 usingBundle:(id)a1 options:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 connection:(id)a4 replyHandler:(id /* block */)a5;
- (void)checkResource:(id)a0 usingBundle:(id)a1 options:(id)a2 connection:(id)a3 replyHandler:(id /* block */)a4;
- (void)currentContainers:(id /* block */)a0;
- (void)currentContainersSync:(id /* block */)a0;
- (void)currentResourceIDs:(id /* block */)a0;
- (void)currentResourceIDsSync:(id /* block */)a0;
- (void)currentTasks:(id /* block */)a0;
- (void)currentTasksSync:(id /* block */)a0;
- (void)deactivateVolume:(id)a0 shortName:(id)a1 numericOptions:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)deactivateVolume:(id)a0 shortName:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)deactivateVolume:(id)a0 usingBundle:(id)a1 numericOptions:(unsigned long long)a2 auditToken:(struct { unsigned int x0[8]; })a3 replyHandler:(id /* block */)a4;
- (void)deactivateVolume:(id)a0 usingBundle:(id)a1 numericOptions:(unsigned long long)a2 replyHandler:(id /* block */)a3;
- (void)fetchInstalledExtensionsWithCompletionHandler:(id /* block */)a0;
- (void)formatResource:(id)a0 usingBundle:(id)a1 options:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 connection:(id)a4 replyHandler:(id /* block */)a5;
- (void)formatResource:(id)a0 usingBundle:(id)a1 options:(id)a2 connection:(id)a3 replyHandler:(id /* block */)a4;
- (void)getFSProgressForTask:(id)a0 replyHandler:(id /* block */)a1;
- (void)handleInvalidated;
- (id)initClient;
- (void)installedExtensionWithBundleID:(id)a0 synchronous:(BOOL)a1 replyHandler:(id /* block */)a2;
- (void)installedExtensionWithShortName:(id)a0 synchronous:(BOOL)a1 replyHandler:(id /* block */)a2;
- (void)installedExtensions:(id /* block */)a0;
- (void)installedExtensionsForUser:(struct { unsigned int x0[8]; })a0 replyHandler:(id /* block */)a1;
- (void)loadResource:(id)a0 shortName:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)loadResource:(id)a0 shortName:(id)a1 options:(id)a2 synchronousReply:(id /* block */)a3;
- (void)loadResource:(id)a0 shortName:(id)a1 options:(id)a2 synchronousReplyHandler:(id /* block */)a3;
- (void)loadResource:(id)a0 usingBundle:(id)a1 options:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 replyHandler:(id /* block */)a4;
- (void)loadResource:(id)a0 usingBundle:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)probeResource:(id)a0 usingBundle:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2 replyHandler:(id /* block */)a3;
- (void)probeResource:(id)a0 usingBundle:(id)a1 reply:(id /* block */)a2;
- (void)probeResource:(id)a0 usingBundle:(id)a1 replyHandler:(id /* block */)a2;
- (void)probeResourceSync:(id)a0 usingBundle:(id)a1 replyHandler:(id /* block */)a2;
- (void)setEnabledStateForIdentifier:(id)a0 newState:(BOOL)a1 replyHandler:(id /* block */)a2;
- (void)setTaskUpdateHandler:(id /* block */)a0 replyHandler:(id /* block */)a1;
- (void)unloadResource:(id)a0 shortName:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)unloadResource:(id)a0 usingBundle:(id)a1 options:(id)a2 auditToken:(struct { unsigned int x0[8]; })a3 replyHandler:(id /* block */)a4;
- (void)unloadResource:(id)a0 usingBundle:(id)a1 options:(id)a2 replyHandler:(id /* block */)a3;
- (void)validateVolumeName:(id)a0 usingBundle:(id)a1 volumeID:(id)a2 reply:(id /* block */)a3;

@end
