@class NSUUID, NSMutableDictionary, NSString, NSObject, TGTextGenerationConfiguration;
@protocol TGTextGenerationSessionDelegate, TGITextGenerationInference, TGITextGenerationInferenceSession, OS_dispatch_queue;

@interface TGTextGenerationSession : NSObject <TGTextGenerationOperationDelegate>

@property (readonly) id<TGITextGenerationInference> textGeneration;
@property (retain) id<TGITextGenerationInferenceSession> tgdSession;
@property (readonly) NSMutableDictionary *callbackByExecutionUUID;
@property (readonly) NSMutableDictionary *operationByExecutionUUID;
@property (readonly) NSMutableDictionary *outputStreamByExecutionUUID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSUUID *uuid;
@property (weak) id<TGTextGenerationSessionDelegate> delegate;
@property (readonly, copy) TGTextGenerationConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)workQueue;
+ (id)defaultTextGeneration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)enqueueOperation:(id)a0;
- (void)executeOperation:(id)a0 callback:(id /* block */)a1;
- (void)createTgdSessionSync;
- (void)didStartOperationWithExecutionUUID:(id)a0;
- (id)enqueueOperationSync:(id)a0;
- (id)executionUUIDForOperation:(id)a0;
- (id)initWithConfiguration:(id)a0 textGeneration:(id)a1;
- (void)operation:(id)a0 didUpdateOutputStream:(id)a1;
- (void)operationWithExecutionUUID:(id)a0 didFailWithError:(id)a1;
- (void)operationWithExecutionUUID:(id)a0 didFinishWithOutputs:(id)a1;
- (void)operationWithExecutionUUID:(id)a0 didStreamOutput:(id)a1;

@end
