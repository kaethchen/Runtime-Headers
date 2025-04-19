@class NSUUID, NSString, TGTextGenerationConfiguration;
@protocol TGTextGenerationOperationDelegate, TGITextGenerationInferenceRunnerManager;

@interface TGITextGenerationInferenceSession : NSObject <TGITextGenerationInferenceSession>

@property (readonly) id<TGITextGenerationInferenceRunnerManager> inferenceRunnerManager;
@property (readonly) struct shared_ptr<TGITextGenerationInferenceSessionStateCache> { struct TGITextGenerationInferenceSessionStateCache *__ptr_; struct __shared_weak_count *__cntrl_; } stateCache;
@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) TGTextGenerationConfiguration *configuration;
@property (weak) id<TGTextGenerationOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)enqueueOperation:(id)a0;
- (void)cancelOperationWithExecutionUUID:(id)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 inferenceRunnerManager:(id)a2;

@end
