@class VEFrame, VEFrameOpticalFlow, NSString;

@interface VEOpticalFlowParameters : NSObject <VEParameters>

@property (readonly, nonatomic) VEFrame *sourceFrame;
@property (readonly, nonatomic) VEFrame *nextFrame;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) VEFrameOpticalFlow *opticalFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 submissionMode:(long long)a2 opticalFlow:(id)a3;

@end
