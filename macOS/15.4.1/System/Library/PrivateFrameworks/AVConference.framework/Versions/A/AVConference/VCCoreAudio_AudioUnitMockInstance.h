@interface VCCoreAudio_AudioUnitMockInstance : VCObject {
    struct AURenderCallbackStruct { void /* function */ *inputProc; void *inputProcRefCon; } _renderCallback;
    struct AURenderCallbackStruct { void /* function */ *inputProc; void *inputProcRefCon; } _inputCallback;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _inputStreamFormat;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _renderStreamFormat;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_inputBuffer;
    struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *_renderBuffer;
    float _ioBufferDuration;
    double _renderSampleTime;
    double _inputSampleTime;
    double _hostTime;
    double _timebaseHostTimeConversionRatio;
    id /* block */ _mutedSpeechActivityListener;
}

@property (readonly, nonatomic) unsigned int enableInputIO;
@property (readonly, nonatomic) unsigned int enableOutputIO;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL isInitialized;
@property BOOL isReconfiguring;
@property (nonatomic) BOOL audioSessionIDSet;
@property (nonatomic) BOOL bufferFrameSizeSet;
@property (nonatomic) float dynamicDuckerVolume;

- (void)dealloc;
- (id)init;
- (void)cleanUpAudioBuffer:(struct AudioBufferList **)a0;
- (BOOL)generateMutedTalkerNotification:(unsigned int)a0;
- (int)getEnableIOWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int *)a2;
- (int)getIOBufferDurationWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int *)a2;
- (int)getInputCallbackWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int *)a2;
- (int)getMaximumMediadataByteSizeWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int *)a2;
- (int)getRenderCallbackWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int *)a2;
- (int)getStreamFormatWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int *)a2;
- (BOOL)reallocAudioBuffer:(struct AudioBufferList **)a0 withFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1;
- (void)runAudioCallback;
- (void)runAudioCallbackWithSampleCount:(unsigned int)a0 timeGap:(double)a1;
- (int)setEnableIOWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int)a2;
- (int)setIOBufferDurationWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int)a2;
- (int)setInputCallbackWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int)a2;
- (int)setMutedTalkerNotificiationHandlerWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int)a2;
- (int)setRenderCallbackWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int)a2;
- (int)setStreamFormatWithScope:(unsigned int)a0 data:(const void *)a1 dataSize:(unsigned int)a2;
- (void)setupDefaultFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;

@end
