@class NSMutableArray;

@interface MTLCountersTraceCommandBuffer : NSObject {
    struct BinaryBuffer { void /* function */ **_vptr$AppendBuffer; struct StreamBuffer { char *bytes; char *pWrite; char *pEnd; } stream; struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebase; } _commands;
    NSMutableArray *_encoders;
    struct AppendBuffer { void /* function */ **_vptr$AppendBuffer; struct StreamBuffer { char *bytes; char *pWrite; char *pEnd; } stream; } _samples;
    unsigned long long _flags;
    unsigned long long _timestamp;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)appendSamples:(const void *)a0 length:(unsigned long long)a1;
- (id)blitCommandEncoder;
- (id)computeCommandEncoder;
- (id)init:(BOOL)a0;
- (void)presentDrawable:(id)a0;
- (void)presentDrawable:(id)a0 atTime:(double)a1;
- (id)renderCommandEncoder;
- (id)resourceStateCommandEncoder;
- (void)saveCommandBuffer:(const void *)a0 queue:(id)a1 profilingResults:(id)a2;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
