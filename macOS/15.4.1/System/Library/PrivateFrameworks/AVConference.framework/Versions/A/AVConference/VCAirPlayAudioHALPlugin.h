@class NSString, VCAudioHALPluginRemoteDeviceInfo, VCAudioHALPluginMockAudioInject;

@interface VCAirPlayAudioHALPlugin : NSObject <VCAudioHALPluginCaptureSource> {
    VCAudioHALPluginMockAudioInject *_mockAudioInject;
    struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } sinkFormat; void *sinkContext; void /* function */ *sinkProc; VCAudioHALPluginRemoteDeviceInfo *remoteDeviceInfo; } _pluginConfig;
    struct OpaqueFigHALAudioConduitDevice { } *_conduitDevice;
    struct __CFDictionary { } *_conduitCreateOptions;
    struct FigHALAudioConduitDeviceClientIODelegateConfiguration { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioFormat; unsigned int preferredFramesPerCallbackCount; void /* function */ *callback; void *context; } _conduitConfig;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    BOOL _resumed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct AudioServerPlugInDriverInterface **)createInterface;
+ (struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; id x3; })convertASBDToInterleavedFormat:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; id x3; } *)a0;
+ (struct __CFDictionary { } *)createConduitCreationOptionsWithDeviceInfo:(id)a0 inOptions:(struct __CFDictionary { } *)a1;
+ (void)registerAudioServerPluginDriver:(struct AudioServerPlugInDriverInterface **)a0 onQueue:(id)a1;
+ (id)sharedAirPlayAudioHALPluginNullDevice;
+ (struct AudioServerPlugInDriverInterface **)sharedAudioServerPluginDriver;

- (void)dealloc;
- (void)invalidate;
- (BOOL)start;
- (BOOL)stop;
- (id)initWithConfig:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; id x3; } *)a0;
- (id)initWithConfig:(struct tagVCAudioHALPluginConfiguration { struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } x0; void *x1; void /* function */ *x2; id x3; } *)a0 loadBinary:(BOOL)a1 conduitCreateOptions:(struct __CFDictionary { } *)a2;
- (void)suspendAndReleaseConduitDeviceLocked;

@end
