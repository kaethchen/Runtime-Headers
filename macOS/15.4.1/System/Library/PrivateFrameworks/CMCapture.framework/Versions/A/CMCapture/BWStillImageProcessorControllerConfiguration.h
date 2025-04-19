@class NSDictionary, BWInferenceScheduler;
@protocol MTLCommandQueue;

@interface BWStillImageProcessorControllerConfiguration : NSObject {
    BOOL _postponeProcessorSetup;
}

@property (nonatomic) int stillImageProcessingMode;
@property (retain, nonatomic) NSDictionary *sensorConfigurationsByPortType;
@property (nonatomic) BOOL deferredCaptureSupportEnabled;
@property (nonatomic) BOOL deferredPhotoProcessorEnabled;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (retain, nonatomic) BWInferenceScheduler *inferenceScheduler;
@property (nonatomic) unsigned int figThreadPriority;
@property (readonly, nonatomic) BOOL postponedProcessorSetupSupported;
@property (nonatomic) BOOL postponeProcessorSetup;

- (void)dealloc;

@end
