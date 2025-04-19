@interface _TtCC23IntelligenceFlowRuntime32SnippetStreamingXPCServiceServer6Server : NSObject <LXSnippetStreamingXPCProtocol> {
    void /* unknown type, empty encoding */ clientApplicationIdentifier;
    void /* unknown type, empty encoding */ decoder;
    void /* unknown type, empty encoding */ checkedInStreamProof;
    void /* unknown type, empty encoding */ clientProxy;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)checkInParameters:(id)a0 reply:(id /* block */)a1;
- (void)postWithUpdate:(id)a0 reply:(id /* block */)a1;

@end
