@interface LocalAuthenticationCore.LACEvaluationRequestCompoundProcessor : NSObject <LACEvaluationRequestProcessor> {
    void /* unknown type, empty encoding */ processors;
    void /* unknown type, empty encoding */ nextProcessor;
    void /* unknown type, empty encoding */ currentProcessorIndex;
    void /* unknown type, empty encoding */ involvedProcessorIndices;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProcessRequest:(id)a0;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
