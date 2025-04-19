@class AVCAudioStream, NSString, AVCStreamOutput, CMContinuityCaptureLocalFrameLatencyMetrics, CMContinuityCaptureMagicStateMonitor;

@interface CMContinuityCaptureAudioDevice : CMContinuityCaptureDeviceBase <AVCAudioStreamDelegate, AVCStreamOutputDelegate> {
    CMContinuityCaptureLocalFrameLatencyMetrics *_sessionFrameLatencyMetrics;
    id /* block */ _stopCompletionBlock;
    AVCAudioStream *_avcAudioStream;
    AVCStreamOutput *_avcStreamOutput;
    NSString *_avcStreamCallID;
    BOOL _avcStreamOutputActive;
    unsigned long long _jitterBufferSizeInMS;
    CMContinuityCaptureMagicStateMonitor *_magicStateObserver;
    BOOL _terminated;
    BOOL _canIssueStateMismatchEvent;
    unsigned int _failedBufferCountDueToMismatchState;
}

@property (readonly, retain, nonatomic) NSString *audioDeviceUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)streamDidStop:(id)a0;
- (void)streamOutput:(id)a0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)streamOutputDidBecomeInvalid:(id)a0;
- (void)streamOutputServerDidDie:(id)a0;
- (void)publishDevice;
- (void)_publishDevice:(BOOL)a0;
- (void)useCachedNetworkClockIfPossible;
- (id)createAVCAudioStream;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)forceDeviceRemoval;
- (id)initWithCapabilities:(id)a0 publishDevice:(BOOL)a1 compositeDelegate:(id)a2;
- (id)newAudioStreamCurrentConfiguration;
- (void)postAVCStreamInterruption;
- (void)postActionCompletionForEventName:(id)a0 eventData:(id)a1 error:(id)a2;
- (void)postActionOfType:(unsigned long long)a0 forEvent:(id)a1 option:(unsigned long long)a2;
- (void)postEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (void)resetTransportDevice:(id)a0;
- (void)scheduleInvalidFramesNotification:(BOOL)a0;
- (void)setSystemPreferredStatus:(BOOL)a0;
- (BOOL)startAVConferenceStack:(unsigned long long)a0;
- (void)startCollectingFrameLatencyMetrics;
- (void)startSendingInvalidFrames;
- (BOOL)stopAVConferenceStack;
- (void)stopCaptureStack:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)synchronizeAudioClockWithSampleTime:(unsigned long long)a0 networkTime:(unsigned long long)a1 clockGrandMasterIdentifier:(unsigned long long)a2;
- (void)terminateComplete:(id /* block */)a0;
- (BOOL)updateAudioDeviceMode:(unsigned int)a0;

@end
