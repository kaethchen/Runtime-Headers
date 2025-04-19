@class VEFrameOpticalFlow, NSArray, NSString, VEFrame;

@interface VEFrameRateConversionParameters : NSObject <VEParameters>

@property (readonly, nonatomic) VEFrame *sourceFrame;
@property (readonly, nonatomic) VEFrame *nextFrame;
@property (readonly, nonatomic) VEFrameOpticalFlow *opticalFlow;
@property (readonly, nonatomic) NSArray *interpolationPhase;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) NSArray *destinationFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 opticalFlow:(id)a2 interpolationPhase:(id)a3 submissionMode:(long long)a4 destinationFrames:(id)a5;

@end
