@class NSArray, NSObject;
@protocol OS_dispatch_queue, MLE5ExecutionStreamOperationPool, OS_dispatch_source;

@interface MLE5ExecutionStream : NSObject

@property (copy, nonatomic) NSArray *operations;
@property (nonatomic) struct e5rt_execution_stream { } *streamHandle;
@property (retain, nonatomic) id<MLE5ExecutionStreamOperationPool> operationPool;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resetQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *resetTimer;
@property (readonly, nonatomic) unsigned long long streamId;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (BOOL)_executeStream:(struct e5rt_execution_stream { } *)a0 error:(id *)a1;
- (BOOL)_prepareForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)_reusableForInputFeatures:(id)a0 options:(id)a1;
- (void)_setANEExecutionPriorityWithOptions:(id)a0;
- (void)cancelPendingReset;
- (BOOL)executeForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)prepareAsyncSubmissionForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)resetAfterLingering:(double)a0;
- (BOOL)reusableForAsyncSubmissionForInputFeatures:(id)a0 options:(id)a1;
- (BOOL)reusableForSyncPredictionForInputFeatures:(id)a0 options:(id)a1;
- (BOOL)setupOperationForInputFeatures:(id)a0 operationPool:(id)a1 error:(id *)a2;
- (void)submitWithCompletionHandler:(id /* block */)a0;

@end
