@class NSString, NSMutableDictionary, NSObject;
@protocol VCMacScreenCaptureSource;

@interface VCMacScreenCapture : VCVideoCapture <VCMacScreenCaptureSourceDelegate, VCVideoSource> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _screenCaptureLock;
    BOOL _isPreviewing;
    BOOL _isCapturing;
    BOOL _enableSystemAudio;
    int _captureFramerate;
    int _frameCount;
    int _frameDrops;
    BOOL _shouldEnforceFrameRate;
    struct tagVCVideoFrameCaptureLimiter { double bucketSize; double tokensAvailable; double tokenDurationTicks; double lastRefreshTicks; } _tokenBucket;
    NSMutableDictionary *_sourceConfig;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousFrameTime;
    long long _captureSourceID;
    struct opaqueCMSampleBuffer { } *_previousCompleteFrame;
    NSObject<VCMacScreenCaptureSource> *_screenCapture;
    unsigned long long _lastOriginHIDEventTimestamp;
    BOOL _receivedFirstFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)setFrameRate:(int)a0;
- (int)stop:(BOOL)a0;
- (int)startPreview;
- (BOOL)isPreviewRunning;
- (id)initWithCaptureServer:(id)a0 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { void /* function */ *x0; } *)a1 sourceConfig:(id)a2 withError:(int *)a3;
- (int)_startCapture;
- (BOOL)addAudioOutputWithConfig:(id)a0;
- (BOOL)cameraSupportsFormatWidth:(int)a0 height:(int)a1;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (int)copyColorInfo:(const struct __CFDictionary **)a0;
- (int)frameBecameAvailableCount:(int *)a0 figBufferQueueEmptyCount:(int *)a1 figBufferQueueErrorCount:(int *)a2;
- (int)frameCount:(BOOL)a0;
- (int)frameDropsWithShouldReset:(BOOL)a0;
- (int)getFrameRate;
- (BOOL)isFrontCamera;
- (BOOL)isPortraitResolutionCaptureActive;
- (void)processEventString:(id)a0;
- (BOOL)removeAudioOutput;
- (int)setWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startScreenCapture;
- (int)stopScreenCapture;
- (int)updateScreenCapture:(id)a0;

@end
