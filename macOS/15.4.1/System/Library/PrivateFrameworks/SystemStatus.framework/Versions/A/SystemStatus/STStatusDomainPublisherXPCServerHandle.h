@class NSObject, NSString, NSXPCConnection, STStatusDomainDataChangeLog, BSMutableIntegerMap;
@protocol OS_dispatch_queue, STServerLaunchObservable;

@interface STStatusDomainPublisherXPCServerHandle : NSObject <STStatusDomainPublisherXPCClient, STServerLaunchObserver, BSDescriptionProviding, STStatusDomainPublisherServerHandle> {
    STStatusDomainDataChangeLog *_dataChangeLog;
    BSMutableIntegerMap *_dataMutationCompletionsByDomain;
    BSMutableIntegerMap *_volatileDataMutationCompletionsByDomain;
    BSMutableIntegerMap *_publisherClientsByDomain;
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
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (void)didObserveServerLaunch:(id)a0;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (id)initWithXPCConnectionProvider:(id /* block */)a0 serverLaunchObservable:(id)a1;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)replaceDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (void)replaceVolatileDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;

@end
