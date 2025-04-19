@interface _TtCC23IntelligenceFlowRuntime31QueryDecorationXPCServiceServer6Server : NSObject <LXQueryDecorationXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ queryDecorationCollector;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ clientGroupIdentifier;
}

- (id)init;
- (void).cxx_destruct;
- (void)warmup;
- (void)cacheRemoteDeviceStateWithRemoteStateData:(id)a0 crossAPIAssociationKeyData:(id)a1 with:(id /* block */)a2;
- (void)queryDecorationCollectionWithQdInputData:(id)a0 crossAPIAssociationKeyData:(id)a1 with:(id /* block */)a2;
- (void)queryDecorationCollectionWithQdInputData:(id)a0 with:(id /* block */)a1;
- (void)versionedQueryDecorationCollectionWithQdInputData:(id)a0 crossAPIAssociationKeyData:(id)a1 with:(id /* block */)a2;

@end
