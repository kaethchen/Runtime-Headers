@class NSArray;

@interface AKAppleIDRecoveryController : NSObject

@property (retain, nonatomic) NSArray *supportedRecoverySteps;

- (void).cxx_destruct;
- (void)_beginAccountRecoveryWithModel:(id)a0 completion:(id /* block */)a1;
- (void)_logResponse:(id)a0;
- (id)_nextStepForResponse:(id)a0;
- (void)_processNextStep:(id)a0 response:(id)a1 model:(id)a2 completion:(id /* block */)a3;
- (void)_processResponse:(id)a0 model:(id)a1 withCompletion:(id /* block */)a2;
- (void)beginAccountRecoveryWithModel:(id)a0 completion:(id /* block */)a1;

@end
