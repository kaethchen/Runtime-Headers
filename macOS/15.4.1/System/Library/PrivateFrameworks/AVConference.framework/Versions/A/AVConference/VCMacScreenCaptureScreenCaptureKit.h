@class NSString, SCStream, NSObject, SCContentFilter;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VCMacScreenCaptureScreenCaptureKit : VCObject <SCStreamDelegate, SCStreamOutput, VCMacScreenCaptureSource> {
    id _delegate;
    SCStream *_screenStream;
    NSObject<OS_dispatch_queue> *_screenSampleHandlerQueue;
    BOOL _isWindowed;
    unsigned int _displayWidth;
    unsigned int _displayHeight;
    NSObject<OS_dispatch_queue> *_audioSampleHandlerQueue;
    void *_audioSinkContext;
    void /* function */ *_audioSinkProc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _audioContextMutex;
    unsigned int _audioSampleCount;
    unsigned int _audioTimestamp;
    double _audioHostTime;
    struct opaqueVCAudioBufferList { } *_audioBuffer;
    BOOL _useScreenCaptureKitForAudio;
    BOOL _useScreenCaptureKitPicker;
    SCContentFilter *_contentFilter;
    struct CGColor { } *_backgroundColor;
    struct __CVPixelBufferPool { } *_translateBufferPool;
    struct OpaqueVTPixelTransferSession { } *_translateTransferSession;
    NSObject<OS_dispatch_semaphore> *_stopSemaphore;
    NSObject<OS_dispatch_semaphore> *_startSemaphore;
    struct _VCMacScreenCaptureSourceContext { void *sinkContext; void /* function */ *sinkCallback; } _frameCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (int)stop;
- (void)outputVideoEffectDidStartForStream:(id)a0;
- (void)outputVideoEffectDidStopForStream:(id)a0;
- (void)stream:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 ofType:(long long)a2;
- (void)stream:(id)a0 didStopWithError:(id)a1;
- (BOOL)addAudioOutputWithConfig:(id)a0;
- (void)callbackWithEventString:(id)a0;
- (BOOL)createPixelTransferSessionFromConfig:(id)a0;
- (id)initWithDelegate:(id)a0 screenCaptureSourceContext:(const struct _VCMacScreenCaptureSourceContext { void *x0; void /* function */ *x1; } *)a1;
- (void)invalidateContentFilterAndScreenStream;
- (void)invalidateTransferSessionAndBufferPool;
- (id)newIgnoredExcludedList:(id)a0 excludedBundleIDs:(id)a1;
- (id)newScreenStreamPropertiesFromConfig:(id)a0;
- (id)newUpdatedSourceConfig:(id)a0;
- (BOOL)removeAudioOutput;
- (int)startSessionForScreenContextID:(id)a0 contentFilter:(id)a1;
- (int)startWithConfig:(id)a0;
- (int)updateCaptureParameters:(id)a0;
- (int)updateScreenCapture:(id)a0;
- (BOOL)updateSystemAudioWithConfig:(id)a0;

@end
