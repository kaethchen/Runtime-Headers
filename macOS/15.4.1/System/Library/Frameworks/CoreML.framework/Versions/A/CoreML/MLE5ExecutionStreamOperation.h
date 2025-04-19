@class IOSurfaceSharedEventListener, NSString, NSArray, MLE5ProgramLibrary, NSError, MLPixelBufferPool, MLModelDescription, MLModelConfiguration;
@protocol MLFeatureProvider, MTLSharedEvent;

@interface MLE5ExecutionStreamOperation : NSObject {
    struct unique_ptr<e5rt_async_event, MLE5ObjectDeleter<e5rt_async_event>> { struct __compressed_pair<e5rt_async_event *, MLE5ObjectDeleter<e5rt_async_event>> { struct e5rt_async_event *__value_; } __ptr_; } _cachedWaitEvent;
}

@property (readonly, nonatomic) MLE5ProgramLibrary *programLibrary;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration;
@property (nonatomic) struct e5rt_execution_stream_operation { } *operationHandle;
@property (copy, nonatomic) NSArray *inputPorts;
@property (copy, nonatomic) NSArray *statePorts;
@property (copy, nonatomic) NSArray *outputPorts;
@property (nonatomic) long long state;
@property (readonly, nonatomic) IOSurfaceSharedEventListener *waitEventListener;
@property (readonly, nonatomic) unsigned long long modelSignpostId;
@property (copy, nonatomic) NSArray *waitSharedEventsBoundToESOP;
@property (retain, nonatomic) id<MTLSharedEvent> completionSharedEventBoundToESOP;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly, nonatomic) id<MLFeatureProvider> outputFeatures;
@property (readonly, copy, nonatomic) NSString *debugLabel;
@property (retain, nonatomic) NSError *asyncSubmissionError;
@property (readonly, copy) NSString *functionName;
@property (copy) NSString *shapeHash;
@property (readonly, copy, nonatomic) NSArray *directlyBoundInputFeatureNames;
@property (readonly, copy, nonatomic) NSArray *directlyBoundOutputFeatureNames;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (id)_inputPortNames;
- (struct e5rt_execution_stream_operation { } *)_createOperationAndReturnError:(id *)a0;
- (id)_inoutPortNames;
- (void)_bindCompletionSyncPointDirectlyIfPossile:(id)a0;
- (void)_bindEventToWaitForCopyingInputFeatures:(id)a0 afterSyncPoints:(id)a1;
- (BOOL)_bindInputFeaturesAndWaitEvents:(id)a0 options:(id)a1 error:(id *)a2;
- (void)_bindNewCompletionEventsDirectlyWithCompletionSyncPoint:(id)a0;
- (void)_bindNewWaitEventsDirectlyWithWaitSyncPoints:(id)a0;
- (BOOL)_bindOutputPortsWithOptions:(id)a0 error:(id *)a1;
- (void)_bindWaitEventsDirectly:(id)a0;
- (BOOL)_copyInputFeatures:(id)a0 error:(id *)a1;
- (struct e5rt_execution_stream_operation { } *)_createOperationWithRetryCount:(long long)a0 error:(id *)a1;
- (id)_directlyBoundFeatureNamesForPorts:(id)a0;
- (id)_multiArrayFeatureFromStateFeature:(id)a0;
- (id)_newArrayOfInoutPorts:(id)a0 featureDescriptionsByName:(id)a1 error:(id *)a2;
- (id)_newArrayOfInputPorts:(id)a0 featureDescriptionsByName:(id)a1 error:(id *)a2;
- (id)_newArrayOfOutputPorts:(id)a0 featureDescriptionsByName:(id)a1 error:(id *)a2;
- (id)_outputPortNames;
- (BOOL)_prepareInputPortsForFeatures:(id)a0 error:(id *)a1;
- (BOOL)_reusableForCompletionSyncPoint:(id)a0 allOutputBackingsUseDirectBinding:(BOOL)a1;
- (BOOL)_reusableForWaitSyncPoints:(id)a0 allInputsUseDirectBinding:(BOOL)a1;
- (void)_updateCompletionEventFutureValuesWithCompletionSyncPoint:(id)a0;
- (void)_updateWaitEventFutureValuesWithWaitSyncPoints:(id)a0;
- (id)initWithProgramLibrary:(id)a0 functionName:(id)a1 modelDescription:(id)a2 configuration:(id)a3 debugLabel:(id)a4 modelSignpostId:(unsigned long long)a5;
- (BOOL)preloadAndReturnError:(id *)a0;
- (BOOL)prepareAsyncSubmissionForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)prepareForInputFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)reusableForInputFeatures:(id)a0 options:(id)a1;

@end
