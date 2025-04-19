@class NSMapTable;
@protocol LARemoteContextResolver, LAFUSManager;

@interface AgentProxy : NSObject <LACAgentProxyXPC, LARemoteContextResolver>

@property (class, weak, nonatomic) id<LARemoteContextResolver, LAFUSManager> systemDaemon;

@property (readonly, nonatomic) BOOL daemonProxy;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSMapTable *contextsByUuid;
@property (readonly, nonatomic) NSMapTable *contextsByHash;
@property (readonly, nonatomic) BOOL hasDisabledFUS;
@property (readonly, nonatomic) unsigned int uid;

+ (id)agentProxyInSystemDaemon;
+ (id)daemonInstance;
+ (void)processCleanup;
+ (id)proxyInSystemDaemon;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCConnection:(id)a0;
- (void)dumpStatusWithCompletion:(id /* block */)a0;
- (void)queryUuid:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerAcmExternalizedFormHash:(unsigned long long)a0 uuid:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerContextWithUuid:(id)a0 ownership:(id)a1 description:(id)a2 originalUuid:(id)a3 originalAcmHash:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)remoteAuthenticationInProgressWithPriority:(long long)a0 reply:(id /* block */)a1;
- (void)setFUSDisabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)tables;
- (id)_serverDescription;
- (id)dumpRegisteredContexts;
- (id)remoteContextForAcmExternalizedFormHash:(unsigned long long)a0;
- (id)remoteContextForUuid:(id)a0;

@end
