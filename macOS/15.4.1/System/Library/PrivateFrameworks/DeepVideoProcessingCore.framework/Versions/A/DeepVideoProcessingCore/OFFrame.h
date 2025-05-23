@class NSDictionary;

@interface OFFrame : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *buffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (readonly, nonatomic) NSDictionary *info;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 info:(id)a2;

@end
