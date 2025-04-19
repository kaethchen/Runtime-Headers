@class VEFrame, VEFrameOpticalFlow, NSString;

@interface VEMotionBlurParameters : NSObject <VEParameters>

@property (readonly, nonatomic) VEFrame *sourceFrame;
@property (readonly, nonatomic) VEFrame *nextFrame;
@property (readonly, nonatomic) VEFrame *previousFrame;
@property (readonly, nonatomic) VEFrame *destinationFrame;
@property (readonly, nonatomic) VEFrameOpticalFlow *nextOpticalFlow;
@property (readonly, nonatomic) VEFrameOpticalFlow *previousOpticalFlow;
@property (readonly, nonatomic) long long motionBlurStrength;
@property (readonly, nonatomic) long long virtualShutterAngleDegrees;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 previousFrame:(id)a2 nextOpticalFlow:(id)a3 previousOpticalFlow:(id)a4 motionBlurStrength:(long long)a5 submissionMode:(long long)a6 destinationFrame:(id)a7;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 previousFrame:(id)a2 nextOpticalFlow:(id)a3 previousOpticalFlow:(id)a4 virtualShutterAngleDegrees:(long long)a5 submissionMode:(long long)a6 destinationFrame:(id)a7;

@end
