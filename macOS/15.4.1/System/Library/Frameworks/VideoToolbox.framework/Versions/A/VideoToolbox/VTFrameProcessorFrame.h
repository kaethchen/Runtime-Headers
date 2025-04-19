@class VEFrame;

@interface VTFrameProcessorFrame : NSObject {
    VEFrame *_veFrame;
}

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;

- (void)dealloc;
- (id)veFrame;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
