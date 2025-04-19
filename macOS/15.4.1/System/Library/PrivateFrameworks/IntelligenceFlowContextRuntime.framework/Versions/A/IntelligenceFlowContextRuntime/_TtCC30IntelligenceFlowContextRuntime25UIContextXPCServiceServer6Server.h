@interface _TtCC30IntelligenceFlowContextRuntime25UIContextXPCServiceServer6Server : NSObject <LXUIContextXPCProtocol> {
    void /* unknown type, empty encoding */ retriever;
    void /* unknown type, empty encoding */ encoder;
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (void)retrieveElementHierarchyWithVerbose:(BOOL)a0 args:(id)a1 with:(id /* block */)a2;
- (void)retrieveOnScreenContentWithParameters:(id)a0 with:(id /* block */)a1;
- (void)retrieveUIContextElementsWithOptions:(id)a0 with:(id /* block */)a1;
- (void)retrieveUIElementsWith:(id /* block */)a0;

@end
