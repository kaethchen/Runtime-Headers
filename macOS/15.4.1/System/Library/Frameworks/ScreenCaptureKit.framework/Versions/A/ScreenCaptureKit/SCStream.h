@class SCRecordingOutput, NSString, NSArray, SCContentSharingSession, SCContentFilter, SCContentSharingPickerConfiguration, NSObject, SCStreamConfiguration;
@protocol SCStreamOutput, OS_dispatch_queue, SCStreamDelegate;

@interface SCStream : NSObject <SCContentSharingSessionProtocol> {
    struct opaqueSCRemoteQueue { } *_videoReceiveQueue;
    struct opaqueSCRemoteQueue { } *_audioReceiveQueue;
    struct opaqueSCRemoteQueue { } *_microphoneReceiveQueue;
    double _totalLatency;
    double _frameCount;
    double _totalLatencyAudio;
    double _frameCountAudio;
    double _totalLatencyMicrophone;
    double _frameCountMicrophone;
    SCContentSharingSession *_sharingSession;
    NSArray *_sessionExcludedList;
    BOOL _shouldUpdateMetadata;
    id<SCStreamOutput> _screenStreamOutput;
    id<SCStreamOutput> _audioStreamOutput;
    id<SCStreamOutput> _microphoneStreamOutput;
    NSObject<OS_dispatch_queue> *_screenSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_audioSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_microphoneSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_defaultScreenSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_defaultAudioSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_defaultMicrophoneSampleHandlerQueue;
    NSObject<OS_dispatch_queue> *_streamQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _streamLock;
    BOOL _audioEnabled;
    BOOL _isRunning;
    struct OpaqueCMClock { } *_audioClock;
    struct OpaqueCMClock { } *_hostClock;
    SCRecordingOutput *_recordingOutput;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SCContentFilter *streamFilter;
@property (readonly, weak, nonatomic) id<SCStreamDelegate> delegate;
@property (readonly, nonatomic) NSString *streamID;
@property (readonly, nonatomic) SCStreamConfiguration *streamConfig;
@property (nonatomic) SCContentSharingPickerConfiguration *pickerConfig;
@property (nonatomic) BOOL preseveAspectRatio;
@property (nonatomic) unsigned long long clientOutputType;
@property (readonly, nonatomic) struct OpaqueCMClock { } *synchronizationClock;

+ (void)legacyStreamDidStart:(BOOL)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
+ (void)captureImageScreenshotWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (struct CGImage { } *)captureImageScreenshotWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (void)captureSampleScreenshotWithFilter:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (struct opaqueCMSampleBuffer { } *)captureSampleScreenshotWithFilter:(id)a0 configuration:(id)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)addStreamOutput:(id)a0 type:(long long)a1 sampleHandlerQueue:(id)a2 error:(id *)a3;
- (id)initWithFilter:(id)a0 configuration:(id)a1 delegate:(id)a2;
- (id)initWithSharingSession:(id)a0 captureOutputProperties:(id)a1 delegate:(id)a2;
- (void)sessionDidChangeContent:(id)a0;
- (void)sessionDidEnd:(id)a0;
- (void)startCaptureWithCompletionHandler:(id /* block */)a0;
- (void)stopCaptureWithCompletionHandler:(id /* block */)a0;
- (void)updateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateContentFilter:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)removeStreamOutput:(id)a0 type:(long long)a1 error:(id *)a2;
- (void)updateStream:(id)a0 withClientOutputType:(unsigned long long)a1;
- (id)serializedRecordingOutputConfig;
- (BOOL)addRecordingOutput:(id)a0 error:(id *)a1;
- (id)collectStreamData;
- (double)getAverageLatency;
- (double)getAverageLatencyAudio;
- (double)getAverageLatencyMicrophone;
- (id)initWithFilter:(id)a0 captureOutputProperties:(id)a1 delegate:(id)a2;
- (id)initWithSharingSession:(id)a0 excluding:(id)a1 updateMetadata:(BOOL)a2 captureOutputProperties:(id)a3 delegate:(id)a4;
- (void)removeCurrentRecordingOutputError:(id *)a0;
- (BOOL)removeRecordingOutput:(id)a0 error:(id *)a1;
- (id)serializeStreamProperties;
- (id)serializedContentFilterWithExclusionList:(id)a0;
- (void)startRemoteAudioReceiveQueue:(id)a0;
- (void)startRemoteMicrophoneReceiveQueue:(id)a0;
- (void)startRemoteReceiveQueue:(id)a0;
- (void)startRemoteVideoReceiveQueue:(id)a0;
- (void)stopRemoteReceiveQueue:(unsigned char)a0;
- (void)updateStreamConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)validateStreamConfiguration;

@end
