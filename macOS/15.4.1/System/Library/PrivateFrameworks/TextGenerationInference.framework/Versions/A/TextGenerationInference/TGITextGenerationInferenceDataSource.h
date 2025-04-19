@class NSString, TGTextGenerationConfiguration;

@interface TGITextGenerationInferenceDataSource : NSObject <TGITextGenerationInferenceDataSource>

@property (readonly, copy) TGTextGenerationConfiguration *defaultConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInferenceRunnerWithQueue:(id)a0 executionUUID:(id)a1 operation:(id)a2 session:(id)a3;
- (struct shared_ptr<TGITextGenerationInferenceModelInterface> { struct TGITextGenerationInferenceModelInterface *x0; struct __shared_weak_count *x1; })createModelWithConfiguration:(id)a0;

@end
