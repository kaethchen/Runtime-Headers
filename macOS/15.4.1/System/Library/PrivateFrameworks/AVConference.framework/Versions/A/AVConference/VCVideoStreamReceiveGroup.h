@class NSNumber, VCRedundancyControllerVideo;

@interface VCVideoStreamReceiveGroup : VCMediaStreamReceiveGroup <VCRedundancyControllerDelegate> {
    _Atomic unsigned char _videoPriority;
    unsigned char _lastVideoPriority;
    BOOL _isVideoDegraded;
    double _isVideoDegradedStartTime;
    BOOL _reportedDegradeStatus;
    BOOL _haveReportedPerfTimers;
    BOOL _isProcessingVideoOptIn;
    NSNumber *_previousOptedInStreamID;
    VCRedundancyControllerVideo *_videoRedundancyController;
    BOOL _isRedundancyRequested;
    BOOL _isMediaSuspended;
    double _lastVideoExpectationSwitch;
    BOOL _isVideoExpected;
    double _lastRecordedExtendedPoorConnection;
    double _poorConnectionTotalLength;
    BOOL _poorConnectionPercentageRegressedFromTelemetrySymptomReported;
    int _poorConnectionPercentageABCReportingThreshold;
    double _startTime;
    double _didReportSymptomOnPoorConnectionDespiteVideoIsReceived;
    double _displayLatency;
    BOOL _shouldConvertSourceRTPTimestamp;
    unsigned long long _syncUpdateCalled;
}

@property (nonatomic) BOOL isRemoteMediaStalled;
@property (nonatomic, getter=isRemoteVideoPaused) BOOL remoteVideoPaused;
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;

- (void)dealloc;
- (BOOL)isVisible;
- (id)initWithConfig:(id)a0;
- (void)didStart;
- (BOOL)isVideoExpected;
- (void)didStop;
- (void)resetPerfTimers;
- (void)checkAndReportRegressedPoorConnectionPercentage;
- (void)checkForAndReportPoorConnectionDespiteVideoReceivedForVideoStream:(id)a0 stallDuration:(double)a1;
- (void)checkForExtendedPoorConnectionWithStallDuration:(double)a0;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (void)redundancyController:(id)a0 redundancyIntervalDidChange:(double)a1;
- (void)redundancyController:(id)a0 redundancyPercentageDidChange:(unsigned int)a1;
- (void)redundancyController:(id)a0 redundancyVectorDidChange:(struct { unsigned short x0; struct { unsigned char x0; unsigned char x1; } x1[32]; })a1;
- (void)resetDidReceiveFirstFrame;
- (void)setActiveStreamIDs:(id)a0;
- (void)setExternalRenderLatency:(double)a0;
- (void)setIsRemoteMediaStalled:(BOOL)a0 duration:(double)a1;
- (void)setMediaSuspended:(BOOL)a0 forStreamToken:(id)a1;
- (void)setOptedInStreamID:(id)a0;
- (void)setShouldEnableFaceZoom:(BOOL)a0;
- (void)setShouldEnableMLEnhance:(BOOL)a0 streamID:(unsigned short)a1;
- (BOOL)setSyncSource:(id)a0;
- (void)setVideoDegraded:(BOOL)a0 duration:(double)a1;
- (void)setVideoStreamDelegate:(id)a0 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable { void /* function */ *x0; } *)a1;
- (void)setupExternalRenderLatency;
- (id)setupRedundancyController;
- (void)setupVideoPriority;
- (void)updateShouldEnableFaceZoom;
- (void)updateVideoExpected;
- (void)updateVideoPriority:(unsigned char)a0;
- (void)vcMediaStream:(id)a0 didReceiveFirstFrameWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)vcMediaStream:(id)a0 didSwitchFromStreamID:(unsigned short)a1 toStreamID:(unsigned short)a2;
- (void)vcMediaStream:(id)a0 priorityDidChange:(unsigned char)a1;
- (void)vcMediaStream:(id)a0 remoteMediaStalled:(BOOL)a1 duration:(double)a2;
- (void)vcMediaStream:(id)a0 requestKeyFrameGenerationWithStreamID:(unsigned short)a1 firType:(int)a2;
- (id)willStart;
- (void)willStop;

@end
