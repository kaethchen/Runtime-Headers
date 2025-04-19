@class NSArray, AVPlayerItem;

@interface AVPlayerVideoOutputConfiguration : NSObject

@property (weak, nonatomic) AVPlayerItem *sourcePlayerItem;
@property (copy, nonatomic) NSArray *dataChannelDescriptions;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } activationTime;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } preferredTransform;

- (void)dealloc;
- (id)copy;
- (void).cxx_destruct;
- (id)initWithSourcePlayerItem:(id)a0 dataChannelDescriptions:(id)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 activationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;

@end
