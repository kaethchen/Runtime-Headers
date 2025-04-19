@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, APSKStreamAudioDelegate, APSKAudioSender;

@interface APSKStreamAudio : NSObject {
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    id<APSKStreamAudioDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_options;
    id<APSKAudioSender> _audioSender;
    BOOL _useVideoLatency;
    BOOL _failurePosted;
    struct APSRingBufferPrivate { } *_rtRingBuffer;
    NSObject<OS_dispatch_queue> *_rtQueue;
    struct APSRealTimeSignalPrivate { } *_rtSignal;
    _Atomic unsigned int _rtRingBufferEntries;
}

@property (readonly, nonatomic) BOOL active;
@property (nonatomic) BOOL useVideoLatency;
@property (readonly, nonatomic) id /* block */ enqueueAudioDataBlock;

- (void).cxx_destruct;
- (void)setAudioSender:(id)a0;
- (const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)asbd;
- (int)enqueueAudioData:(id)a0;
- (int)enqueueAudioDataWithTimestamps:(id)a0 forHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 forSampleTime:(unsigned long long)a2 forDiscontinuity:(BOOL)a3;
- (id)initWithAudioDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 delegate:(id)a1 delegateQueue:(id)a2 options:(id)a3;

@end
