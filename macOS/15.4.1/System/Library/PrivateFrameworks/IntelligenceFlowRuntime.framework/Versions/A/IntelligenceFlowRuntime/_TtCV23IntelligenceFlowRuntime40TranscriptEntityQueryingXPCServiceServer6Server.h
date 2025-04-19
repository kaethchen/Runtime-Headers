@interface _TtCV23IntelligenceFlowRuntime40TranscriptEntityQueryingXPCServiceServer6Server : NSObject <LXTranscriptEntityQueryingXPCServerProtocol> {
    void /* unknown type, empty encoding */ allGroupQueryingAllowed;
    void /* unknown type, empty encoding */ clientProxy;
    void /* unknown type, empty encoding */ transcriptQueryingService;
    void /* unknown type, empty encoding */ jsonEncoder;
    void /* unknown type, empty encoding */ jsonDecoder;
}

- (id)init;
- (void).cxx_destruct;
- (void)getTranscriptEntitiesBatchWithId:(id)a0 reply:(id /* block */)a1;
- (void)getTranscriptEntitiesWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)stopTranscriptEntitiesEnumerationWithId:(id)a0 reply:(id /* block */)a1;

@end
