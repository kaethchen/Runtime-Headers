@class VEOpticalFlowParameters, NSString, VTFrameProcessorFrame, VTFrameProcessorOpticalFlow;

@interface VTOpticalFlowParameters : NSObject <VTFrameProcessorParameters> {
    VEOpticalFlowParameters *_veParameters;
}

@property (readonly, nonatomic) VTFrameProcessorFrame *sourceFrame;
@property (readonly, nonatomic) VTFrameProcessorFrame *nextFrame;
@property (readonly, nonatomic) long long submissionMode;
@property (readonly, nonatomic) VTFrameProcessorOpticalFlow *destinationOpticalFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSourceFrame:(id)a0 nextFrame:(id)a1 submissionMode:(long long)a2 destinationOpticalFlow:(id)a3;
- (id)veParameters;

@end
