@class NSString;

@interface LACEvaluationRequestProcessorEmpty : NSObject <LACEvaluationRequestProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canProcessRequest:(id)a0;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
