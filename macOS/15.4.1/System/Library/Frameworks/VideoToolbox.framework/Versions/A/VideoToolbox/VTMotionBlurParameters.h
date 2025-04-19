@class NSString, VTFrameProcessorFrame, VEMotionBlurParameters, VTFrameProcessorOpticalFlow;

@interface VTMotionBlurParameters : NSObject <VTFrameProcessorParameters> {
    VEMotionBlurParameters *_veParameters;
}

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *nextFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *previousFrame;
@property (readonly, nonatomic) VTFrameProcessorOpticalFlow *nextOpticalFlow;
@property (readonly, nonatomic) VTFrameProcessorOpticalFlow *previousOpticalFlow;
@property (readonly, nonatomic) long long motionBlurStrength;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) VTFrameProcessorFrame *destinationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 previousFrame:(id)a2 nextOpticalFlow:(id)a3 previousOpticalFlow:(id)a4 motionBlurStrength:(long long)a5 submissionMode:(long long)a6 destinationFrame:(id)a7;
- (id)veParameters;

@end
