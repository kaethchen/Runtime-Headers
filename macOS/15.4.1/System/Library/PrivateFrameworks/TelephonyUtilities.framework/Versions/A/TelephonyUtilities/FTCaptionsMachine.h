@interface FTCaptionsMachine : NSObject

@property (class, readonly, nonatomic) double mediaTimeBase;

+ (int)createWebVTTTextSampleBuffer:(struct __CFString { } *)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 sampleBufferOut:(struct opaqueCMSampleBuffer **)a3;
+ (double)machTimeScale;

@end
