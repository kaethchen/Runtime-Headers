@class VCVideoFrameBufferPool;

@interface VCEffects : NSObject {
    VCVideoFrameBufferPool *_bufferPool;
}

@property (nonatomic) int effectsMode;
@property (nonatomic) int effectsType;
@property (nonatomic) BOOL effectsApplied;
@property (nonatomic) BOOL faceMeshTrackingEnabled;

- (void)dealloc;
- (id)init;
- (BOOL)addFrame:(struct __CVBuffer { } *)a0 time:(long long)a1;
- (BOOL)releaseFrameWithTime:(long long)a0;

@end
