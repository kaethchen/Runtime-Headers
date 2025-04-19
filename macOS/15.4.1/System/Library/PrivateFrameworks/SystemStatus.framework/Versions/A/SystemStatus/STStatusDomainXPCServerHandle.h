@class NSString, NSXPCConnection, BSMutableIntegerMap, NSObject;
@protocol OS_dispatch_queue, STServerLaunchObservable;

@interface STStatusDomainXPCServerHandle : NSObject <STStatusDomainXPCClient, STServerLaunchObserver, BSDescriptionProviding, STStatusDomainServerHandle> {
    BSMutableIntegerMap *_dataByDomain;
    BSMutableIntegerMap *_clientsByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_serverXPCConnection;
    id _serverProxy;
    id /* block */ _xpcConnectionProvider;
    id<STServerLaunchObservable> _serverLaunchObservable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMachServiceServerHandle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)dataForDomain:(unsigned long long)a0;
- (void)didObserveServerLaunch:(id)a0;
- (id)initWithXPCConnectionProvider:(id /* block */)a0 serverLaunchObservable:(id)a1;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (void)observeDiff:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (id)serverDataForDomains:(id)a0;

@end
