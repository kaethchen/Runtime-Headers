@class MLOutputBackingsVerifier, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MLModeling, MLStatefulModelEngine;

@interface MLDelegateModel : MLModel {
    NSObject<OS_dispatch_queue> *_asyncPredictionQueue;
    id<MLModeling> _internalEngine;
    id<MLStatefulModelEngine> _statefulModelEngine;
    MLOutputBackingsVerifier *_outputBackingsVerifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncPredictionSchedulingLock;
    unsigned long long _currentAsyncPredictionsInFlight;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _prepared;
}

@property (readonly, nonatomic) unsigned long long maxAsyncPredictionsInFlight;
@property (readonly, nonatomic) NSMutableArray *pendingPredictionQueue;
@property (readonly, nonatomic) int engine;

- (void).cxx_destruct;
- (id)program;
- (void)_finishPredictionAndDispatchPendingPredictions;
- (void)_predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)_predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;
- (id)_predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_schedulePredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_validateStateFeatureNamed:(id)a0 backingMultiArray:(id)a1;
- (void)cancelPredictionRequest:(id)a0;
- (id)classifier;
- (void)enableInstrumentsTracing;
- (id)executionSchedule;
- (id)initWithEngine:(id)a0 error:(id *)a1;
- (id)internalEngine;
- (id)neuralNetwork;
- (id)newRequestWithInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)newRequestWithInputFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;
- (id)newStateWithClientBuffers:(id)a0;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)pipeline;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)predictionFromFeatures:(id)a0 usingState:(id)a1 options:(id)a2 error:(id *)a3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (id)regressor;
- (unsigned long long)signpostID;
- (void)submitPredictionRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)updatable;
- (id)writable;

@end
