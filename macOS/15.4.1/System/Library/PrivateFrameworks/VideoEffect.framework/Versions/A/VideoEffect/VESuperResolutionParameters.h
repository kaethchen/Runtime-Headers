@class VEFrame, VEFrameOpticalFlow, NSString;

@interface VESuperResolutionParameters : NSObject <VEParameters>

@property (readonly, nonatomic) VEFrame *sourceFrame;
@property (readonly, nonatomic) VEFrame *previousFrame;
@property (readonly, nonatomic) VEFrame *previousOutputFrame;
@property (readonly, nonatomic) VEFrameOpticalFlow *opticalFlow;
@property (readonly, nonatomic) VEFrame *destinationFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceFrame:(id)a0 previousFrame:(id)a1 previousOutputFrame:(id)a2 opticalFlow:(id)a3 destinationFrame:(id)a4;

@end
