@interface SNAudioRingBuffer : NSObject {
    struct unique_ptr<AT::RingBuffer, std::default_delete<AT::RingBuffer>> { struct __compressed_pair<AT::RingBuffer *, std::default_delete<AT::RingBuffer>> { struct RingBuffer *__value_; } __ptr_; } _ringBuffer;
}

+ (BOOL)copyRecentFramesFrom:(id)a0 to:(id)a1 error:(id *)a2;
+ (id)copyRecentFramesOfAudioRingBufferToAVAudioBufferFrom:(id)a0 frameCount:(long long)a1 ringBufferStartSampleTime:(long long *)a2;
+ (id)copyToAVAudioBufferFrom:(id)a0 ringBufferStartSampleTime:(long long *)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)capacityFramesWithError:(id *)a0;
- (BOOL)fetch:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 frameCount:(unsigned int)a1 frameNumber:(long long)a2 error:(id *)a3;
- (id)formatWithError:(id *)a0;
- (BOOL)getTimeBoundsWithStartTime:(long long *)a0 endTime:(long long *)a1;
- (id)initWithFormat:(id)a0 capacityFrames:(long long)a1 error:(id *)a2;
- (BOOL)resizeWithFormat:(id)a0 newCapacityFrames:(unsigned int)a1 error:(id *)a2;
- (BOOL)store:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 frameCount:(unsigned int)a1 frameNumber:(long long)a2 error:(id *)a3;

@end
