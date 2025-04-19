@interface VCAudioHALPluginStream : ASDStream {
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _sinkFormat;
    id _sinkContext;
    void /* function */ *_sinkProc;
    struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } _audioTimestamp;
    struct tagVCAudioHALPluginCaptureSourceAudioData { void *data; unsigned int dataByteSize; } _audioSourceBuffer;
    id /* block */ _writeMixBlockProcess;
}

- (void)dealloc;
- (void)invalidate;
- (void)startStream;
- (void)stopStream;
- (id)initWithDirection:(unsigned int)a0 plugin:(id)a1 withConfig:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; id x3; } *)a2;
- (id /* block */)readInputBlock;
- (id /* block */)writeMixBlock;

@end
