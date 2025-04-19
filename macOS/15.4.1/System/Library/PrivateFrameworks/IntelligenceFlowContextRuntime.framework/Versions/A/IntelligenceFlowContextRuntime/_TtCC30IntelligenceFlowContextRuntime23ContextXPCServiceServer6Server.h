@interface _TtCC30IntelligenceFlowContextRuntime23ContextXPCServiceServer6Server : NSObject <LXContextXPCProtocol> {
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ contextCache;
    void /* unknown type, empty encoding */ contextRetrieverSetup;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (void)refreshWithContextTypes:(id)a0 interactionId:(id)a1 with:(id /* block */)a2;
- (void)retrieveContextValuesWithContextTypes:(id)a0 timeout:(id)a1 with:(id /* block */)a2;
- (void)dumpUIContextFromCacheWith:(id /* block */)a0;
- (void)retrieveContextValuesWithFailuresWithContextTypes:(id)a0 timeout:(id)a1 with:(id /* block */)a2;
- (void)refreshAndRetrieveWithContextTypes:(id)a0 with:(id /* block */)a1;
- (void)retrieveAndRankIntelligenceCommandContextValuesWithQuery:(id)a0 appBundleIds:(id)a1 threshold:(id)a2 timeout:(id)a3 with:(id /* block */)a4;
- (void)retrieveContextValuesWithQuery:(id)a0 with:(id /* block */)a1;
- (void)retrieveRequiredContextValuesWith:(id /* block */)a0;

@end
