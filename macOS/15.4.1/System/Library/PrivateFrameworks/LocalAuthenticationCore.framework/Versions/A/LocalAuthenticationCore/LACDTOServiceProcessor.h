@class NSString;
@protocol LACEvaluationRequestProcessor;

@interface LACDTOServiceProcessor : NSObject <LACEvaluationRequestProcessor> {
    id<LACEvaluationRequestProcessor> _compoundProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_entitlementsForRequest:(id)a0;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithSubprocessors:(id)a0;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
