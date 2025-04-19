@class TGITextGenerationInferenceDataSource, NSMutableDictionary, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TGITextGenerationInferenceRunnerManager : NSObject <TGITextGenerationInferenceRunnerManager>

@property (readonly, copy) NSMutableDictionary *inferenceRunnerByExecutionUUID;
@property (copy) NSDictionary *scheduledInferenceRunnerByExecutionUUID;
@property (readonly) NSObject<OS_dispatch_queue> *inferenceQueue;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property struct shared_ptr<TGITextGenerationInferenceModelInterface> { struct TGITextGenerationInferenceModelInterface *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (getter=isStarted) BOOL started;
@property (readonly) TGITextGenerationInferenceDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)start;
- (id)initWithWorkQueue:(id)a0;
- (void)cancelOperationWithExecutionUUID:(id)a0;
- (void)enqueueOperation:(id)a0 executionUUID:(id)a1 session:(id)a2;
- (id)initWithWorkQueue:(id)a0 inferenceQueue:(id)a1 dataSource:(id)a2;
- (void)runInferenceRunners;

@end
