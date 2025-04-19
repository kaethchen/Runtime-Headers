@class NSString, BSIntegerSet, STLocalStatusServer;
@protocol STStatusDomainPublisherServerHandle, STStatusServerDelegate, STStatusDomainServerHandle;

@interface STStatusServer : NSObject <STStatusDomainServerHandle, STStatusDomainPublisherServerHandle> {
    STLocalStatusServer *_localStatusServer;
    id<STStatusDomainServerHandle> _serverHandle;
    id<STStatusDomainPublisherServerHandle> _publisherServerHandle;
}

@property (weak, nonatomic) id<STStatusServerDelegate> delegate;
@property (readonly, nonatomic) BSIntegerSet *publishedDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)dataForDomain:(unsigned long long)a0;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)registerClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;
- (void)removeClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)replaceDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (void)replaceVolatileDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (void)reportUserInteraction:(id)a0 forClient:(id)a1 domain:(unsigned long long)a2;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)addClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1;
- (void)addDataTransformer:(id)a0 forDomain:(unsigned long long)a1;
- (void)modifyClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)modifyDataTransformer:(id)a0 forDomain:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)removeClientDataTransformerProvider:(id)a0 forDomain:(unsigned long long)a1;
- (void)removeDataTransformer:(id)a0 forDomain:(unsigned long long)a1;

@end
