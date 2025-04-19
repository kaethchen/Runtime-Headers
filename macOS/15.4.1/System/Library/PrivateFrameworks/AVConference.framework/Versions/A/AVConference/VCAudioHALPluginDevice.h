@class NSString, VCAudioHALPluginMockAudioInject, VCAudioHALPluginStream, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioHALPluginDevice : ASDAudioDevice <VCAudioHALPluginCaptureSource> {
    VCAudioHALPluginStream *_outputStream;
    BOOL _isRunning;
    NSObject<OS_dispatch_queue> *_timeQueue;
    struct VCAudioHALPluginTimestamp { unsigned long long numberOfSlots; struct vector<tagVCAudioHALPluginTimestampInfo, std::allocator<tagVCAudioHALPluginTimestampInfo> > { struct tagVCAudioHALPluginTimestampInfo *__begin_; struct tagVCAudioHALPluginTimestampInfo *__end_; struct __compressed_pair<tagVCAudioHALPluginTimestampInfo *, std::allocator<tagVCAudioHALPluginTimestampInfo> > { struct tagVCAudioHALPluginTimestampInfo *__value_; } __end_cap_; } timestamps; struct atomic<unsigned long> { struct __cxx_atomic_impl<unsigned long, std::__cxx_atomic_base_impl<unsigned long> > { _Atomic unsigned long long __a_value; } __a_; } timestampIndex; struct tagVCAudioHALPluginTimestampInfo { double sampleTime; unsigned long long hostTime; unsigned long long seed; } initLocklessTimestampInfo; } _timestamp;
    unsigned long long _currentSeed;
    double _clockFrequency;
    unsigned int _samplesPerFrame;
    id /* block */ _zeroTimestampBlock;
    id /* block */ _willDoReadInputBlock;
    id /* block */ _willDoWriteMixBlock;
    VCAudioHALPluginMockAudioInject *_mockAudioInject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAudioHALPluginNullDevice;
+ (id)sharedAudioServerDriverPlugin;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithConfig:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; id x3; } *)a0;
- (unsigned int)calculateIOBufferFrameSize:(unsigned int)a0;
- (BOOL)changeSamplingRate:(double)a0;
- (void)configureRemoteDeviceInfo:(id)a0;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (id /* block */)getZeroTimestampBlock;
- (void)initialZeroTimestamp;
- (int)performStartIO;
- (int)performStopIO;
- (void)updateZeroTimestamp:(unsigned long long)a0;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;

@end
