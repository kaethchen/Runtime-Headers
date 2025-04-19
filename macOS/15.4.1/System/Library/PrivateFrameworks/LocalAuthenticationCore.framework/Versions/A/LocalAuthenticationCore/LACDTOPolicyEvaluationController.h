@class NSString, NSMutableDictionary, NSHashTable;
@protocol LACDTODeviceInfoProvider, LACDTOEnvironmentProviding, LACDTOPolicyEvaluationIdentifierFactory;

@interface LACDTOPolicyEvaluationController : NSObject <LACDTOPolicyEvaluationController> {
    id<LACDTOEnvironmentProviding> _environment;
    id<LACDTOPolicyEvaluationIdentifierFactory> _evaluationIdentifierFactory;
    id<LACDTODeviceInfoProvider> _device;
    NSHashTable *_observers;
    NSMutableDictionary *_pendingRequests;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_forEachObserver:(id /* block */)a0;
- (BOOL)_checkDeviceHasBeenUnlockedSinceBoot;
- (id)_errorCodesToFilterForOptions:(id)a0;
- (void)_evaluateRequest:(id)a0 completion:(id /* block */)a1;
- (void)_evaluateRequest:(id)a0 environment:(id)a1 completion:(id /* block */)a2;
- (id)_mapResult:(id)a0 filterCodes:(id)a1;
- (void)_notifyObserversAboutEvaluation:(id)a0;
- (void)_notifyObserversAboutEvaluation:(id)a0 result:(id)a1;
- (id)_updateEvaluationOptions:(id)a0 forPolicy:(long long)a1 environment:(id)a2;
- (BOOL)_verifyHasRequiredOptions:(id)a0 forPolicy:(long long)a1 error:(id *)a2;
- (BOOL)canProcessRequest:(id)a0;
- (id)initWithEnvironment:(id)a0 evaluationIdentifierFactory:(id)a1 device:(id)a2;
- (void)postProcessRequest:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)processRequest:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

@end
