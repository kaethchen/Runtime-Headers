@interface VCAudioCaptionsBufferInfo : NSObject {
    struct opaqueVCAudioBufferList { } *_buffer;
    BOOL _useSecondaryThread;
}

@property (readonly, nonatomic) long long token;
@property (readonly, nonatomic) unsigned char priority;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format;
@property (readonly, nonatomic) unsigned int countOfLowPrioritySamples;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithStreamConfig:(const struct tagVCAudioCaptionsStreamConfig { long long x0; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x1; BOOL x2; } *)a0 bufferLength:(double)a1;

@end
