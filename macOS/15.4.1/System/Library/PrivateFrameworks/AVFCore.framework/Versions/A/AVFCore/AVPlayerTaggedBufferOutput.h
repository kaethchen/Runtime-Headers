@class AVPlayerVideoOutput;

@interface AVPlayerTaggedBufferOutput : NSObject {
    AVPlayerVideoOutput *_realOutput;
}

+ (id)taggedBufferOutputWithVideoOutput:(id)a0;

- (void)dealloc;
- (id)init;
- (id)initWithSpecification:(id)a0;
- (BOOL)_attachToPlayer:(id)a0;
- (void)_detachFromPlayer:(id)a0;
- (void)_setResourceLifeCycleHandler:(id /* block */)a0;
- (struct OpaqueCMTaggedBufferGroup { } *)copyTaggedBufferGroupForHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 presentationTimeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (BOOL)hasNewTaggedBufferGroupForHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithVideoOutput:(id)a0;
- (id)realOutput;

@end
