@class NSMutableArray, BWStillImageProcessorControllerRequest, NSString, BWStillImageProcessorControllerConfiguration, CMIExternalMemoryDescriptor, CMIExternalMemoryResource, FigStateMachine;
@protocol MetalImageBufferProcessor;

@interface BWStillImageProcessorController : NSObject <BWStillImageProcessorControllerInputUpdatesDelegate> {
    FigStateMachine *_stateMachine;
    NSMutableArray *_requestQueue;
}

@property (readonly, nonatomic) BWStillImageProcessorControllerRequest *currentRequest;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BWStillImageProcessorControllerConfiguration *configuration;
@property (readonly, nonatomic) id<MetalImageBufferProcessor> metalImageBufferProcessor;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (readonly, nonatomic) CMIExternalMemoryDescriptor *externalMemoryDescriptor;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)usesCustomProcessingFlow;

- (void)dealloc;
- (void)reset;
- (void)_reset;
- (int)process;
- (id)initWithConfiguration:(id)a0;
- (int)prepare;
- (void)_prepare;
- (void)_updateStateIfNeeded;
- (void)_completeCurrentRequestAndInitiateNextRequest;
- (void)_process;
- (void)cancelProcessing;
- (void)currentRequestChanged;
- (int)enqueueInputForProcessing:(id)a0 delegate:(id)a1;
- (id)externalMemoryDescriptorForResolutionFlavors:(id)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 configuration:(id)a2;
- (void)purgeResources;
- (id)requestForInput:(id)a0 delegate:(id)a1 errOut:(int *)a2;

@end
