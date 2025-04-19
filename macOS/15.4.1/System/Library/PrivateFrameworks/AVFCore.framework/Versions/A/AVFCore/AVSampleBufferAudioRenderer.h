@class NSError, NSString, AVSampleBufferAudioRendererInternal;

@interface AVSampleBufferAudioRenderer : NSObject <AVContentKeyRecipientInternal, AVContentKeyRecipient, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}

@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (nonatomic) unsigned long long allowedAudioSpatializationFormats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) struct OpaqueCMTimebase { } *timebase;
@property (readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (readonly, nonatomic) BOOL hasSufficientMediaDataForReliablePlaybackStart;

+ (id)currentFigAudioRendererFactory;
+ (id)makeRendererLoggingIdentifier;
+ (id)sampleBufferAudioRenderer;
+ (void)setFigAudioRendererFactory:(id)a0 forQueue:(id)a1;

- (void)dealloc;
- (id)init;
- (BOOL)isMuted;
- (void)flush;
- (void)setVolume:(float)a0;
- (float)volume;
- (void)setMuted:(BOOL)a0;
- (void)_wasFlushedAutomaticallyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (int)_attachToContentKeySession:(id)a0 contentKeyBoss:(struct OpaqueFigContentKeyBoss { } *)a1 failedSinceAlreadyAttachedToAnotherSession:(BOOL *)a2;
- (BOOL)_attachedToExternalContentKeySession;
- (int)_initializeTimebase;
- (int)_installNotificationHandlers;
- (void)_transitionToFailedStatusWithOSStatus:(int)a0;
- (void)_transitionToStatus:(long long)a0 error:(id)a1;
- (void)_triggerMediaRequestCallback;
- (void)_uninstallNotificationHandlers;
- (struct opaqueMTAudioProcessingTap { } *)audioTapProcessor;
- (id)contentKeySession;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)a0;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)expire;
- (void)flushFromSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (id)loggingIdentifier;
- (id)outputContext;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (id)scheduledAudioParameters;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { } *)a0;
- (void)setIsUnaccompaniedByVisuals:(BOOL)a0;
- (void)setLoggingIdentifier:(id)a0;
- (void)setOutputContext:(id)a0;
- (BOOL)setRenderSynchronizer:(id)a0 error:(id *)a1;
- (void)setScheduledAudioParameters:(id)a0;
- (void)stopRequestingMediaData;
- (BOOL)willTrimShortDurationSamples;

@end
