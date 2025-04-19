@class NSString, NSURL, VCAudioIO, AVCAnsweringMachineConfiguration, VCMediaRecorder, VCCannedAudioInjector, VCAudioCaptionsCoordinator, NSObject;
@protocol OS_dispatch_queue, VCAnsweringMachineDelegate;

@interface VCAnsweringMachine : VCMediaDevice <VCAudioIODelegate, VCMediaRecorderDelegate> {
    id<VCAnsweringMachineDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct tagVCAnsweringMachineRealtimeContext { VCCannedAudioInjector *announcementAssetInjector; unsigned int blockCounter; unsigned int blocksToDelay; struct tagVCAnsweringMachineCommonRealtimeContext { unsigned char flags; unsigned int latestTimestamp; float averageAudioPower; } sourceCommonContext; VCAudioCaptionsCoordinator *captionsCoordinator; struct tagVCAnsweringMachineCommonRealtimeContext { unsigned char flags; unsigned int latestTimestamp; float averageAudioPower; } sinkCommonContext; VCMediaRecorder *mediaRecorder; NSString *mediaRecorderRequesterID; NSString *mediaRecorderTransactionID; long long audioToken; } _realtimeContext;
    BOOL _registeredForThermalNotifications;
    NSString *_uuid;
    int _deviceRole;
    VCAudioIO *_audioIO;
    int _reportingModuleID;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _internalFormat;
    BOOL _stopIsAsync;
    BOOL _didInvalidate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) long long messageAudioToken;
@property (readonly, nonatomic) AVCAnsweringMachineConfiguration *configuration;
@property (readonly, nonatomic) NSURL *recordingURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)terminateProcess:(id)a0 terminateSource:(id)a1 agent:(struct opaqueRTCReporting { } *)a2;

- (void)dealloc;
- (void)invalidate;
- (id)start;
- (id)stop;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (id)onStart;
- (void)registerForThermalNotifications;
- (BOOL)setUpAnnouncementAssetInjection;
- (BOOL)autoRunOnStart;
- (void)cleanupAnnouncementAssetInjection;
- (void)cleanupCaptionsCoordinator;
- (void)cleanupMediaRecorder;
- (void)cleanupPeriodicReporting;
- (void)cleanupRealtimeContext;
- (struct __CFDictionary { } *)clientSpecificUserInfo;
- (BOOL)configureAudioIO;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })defaultAudioFormat;
- (struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; BOOL x6; id x7; int x8; unsigned int x9; unsigned int x10; BOOL x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; BOOL x17; BOOL x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; BOOL x5; id x6; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; BOOL x5; id x6; } x20; id x21; BOOL x22; BOOL x23; })defaultAudioIOConfiguration;
- (int)deviceRoleForCallSource:(unsigned char)a0;
- (void)didResumeAudioIO:(id)a0;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)handleThermalPressureNotification:(id)a0;
- (id)newInjectorConfigurationForAnnouncementAsset:(id)a0;
- (id)onStop;
- (struct __CFDictionary { } *)reportingInitialConfiguration;
- (void)serverDidDie;
- (BOOL)setUpConfigurationIndependentInternalState;
- (BOOL)setUpInternalStateWithConfiguration:(id)a0;
- (void)setUpRealtimeDefaults;
- (BOOL)setupCaptionsCoordinator;
- (void)setupInternalFormat;
- (BOOL)setupMediaRecorder;
- (void)setupPeriodicReporting;
- (BOOL)setupRealtimeContextWithToken:(long long)a0;
- (BOOL)setupReportingAgentWithCallID:(unsigned int)a0;
- (void)stopMediaRecording;
- (void)streamToken:(long long)a0 didEndProcessingRequest:(id)a1 urlContext:(const struct tagVCMediaRecorderDelegateURLContext { id x0; id x1; BOOL x2; } *)a2 error:(id)a3;
- (void)streamToken:(long long)a0 didFinishRequest:(id)a1 didSucceed:(BOOL)a2;
- (void)streamToken:(long long)a0 didStartProcessingRequest:(id)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didUpdateCapabilities:(unsigned int)a1;
- (void)streamTokenDidCleanupAllRequests:(long long)a0;
- (void)unregisterForThermalNotifications;

@end
