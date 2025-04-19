@class NSMutableArray, NSArray, VTFrameProcessorFrame, NSString, VTFrameProcessorOpticalFlow, VEFrameRateConversionParameters;

@interface VTFrameRateConversionParameters : NSObject <VTFrameProcessorParameters> {
    VEFrameRateConversionParameters *_veParameters;
    NSMutableArray *_veDestinationFrames;
}

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *nextFrame;
@property (readonly, nonatomic) VTFrameProcessorOpticalFlow *opticalFlow;
@property (readonly, nonatomic) NSArray *interpolationPhase;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) NSArray *destinationFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 opticalFlow:(id)a2 interpolationPhase:(id)a3 submissionMode:(long long)a4 destinationFrames:(id)a5;
- (id)veParameters;

@end
