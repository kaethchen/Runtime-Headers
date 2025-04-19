@class NSString, TGITextGenerationInferenceRunnerManager, NSObject;
@protocol OS_dispatch_queue;

@interface TGITextGenerationInference : NSObject <TGITextGenerationInference>

@property (readonly) TGITextGenerationInferenceRunnerManager *inferenceRunnerManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
