@class VEFrameOpticalFlow;

@interface VTFrameProcessorOpticalFlow : NSObject {
    VEFrameOpticalFlow *_veFrameOpticalFlow;
}

@property (readonly, nonatomic) struct __CVBuffer { } *forwardFlow;
@property (readonly, nonatomic) struct __CVBuffer { } *backwardFlow;

- (void)dealloc;
- (id)initWithForwardFlow:(struct __CVBuffer { } *)a0 backwardFlow:(struct __CVBuffer { } *)a1;
- (id)veFrameOpticalFlow;

@end
