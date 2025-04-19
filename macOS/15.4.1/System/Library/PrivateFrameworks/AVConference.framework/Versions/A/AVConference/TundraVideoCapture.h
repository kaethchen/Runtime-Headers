@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TundraVideoCapture : VCVideoCapture <VCVideoSource> {
    struct OpaqueCMIOGraph { } *_graph;
    struct { struct __sFILE *stuff; void /* function */ *requestRenderCallback; void *requestRenderCallbackRefcon; struct opaqueCMFormatDescription *formatDesc; void *func_arg; void /* function */ *func_video; void *clockOrTimebase; struct OpaqueCMIOGraph *theGraph; } _videoStore;
    unsigned int _selectedCameraID;
    struct OpaqueCMClock { } *_clockForDevice;
    struct _VCVideoSourceToken { union { struct { unsigned int identifier : 24; unsigned char type : 8; } ; unsigned int bits; } ; } _sourceToken;
    BOOL _quit;
    BOOL _frameAvailable;
    BOOL _capturing;
    BOOL _previewing;
    struct OpaqueFigThread { } *_tidFrame;
    int _lastRequestedWidth;
    int _lastRequestedHeight;
    int _lastRequestedFrameRate;
    int _conferenceFrameRate;
    BOOL _enableLocalRecording;
    int _sensorFrameRate;
    int _frameCounterForDrop;
    int _frameCounterForRate;
    int _frameCounterDiscard;
    double _referenceTimestamp;
    double _lastPreviewFrameTime;
    double _lastCaptureFrameTime;
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _xLiveSource;
    struct opaqueCMBufferQueue { } *_previewQueue;
    int _frameCount;
    NSObject<OS_dispatch_semaphore> *_frameAvailableSemaphore;
    struct __CVPixelBufferPool { } *_captureBufferPool;
    struct OpaqueVTPixelTransferSession { } *_captureTransferSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setOrientation:(int)a0;
- (int)setFrameRate:(int)a0;
- (int)stop:(BOOL)a0;
- (int)startPreview;
- (int)setCamera:(unsigned int)a0;
- (BOOL)isPreviewRunning;
- (int)_startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)_startPreview;
- (BOOL)cameraSupportsFastFormatSwitching;
- (BOOL)cameraSupportsFormatWidth:(int)a0 height:(int)a1;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (int)copyColorInfo:(const struct __CFDictionary **)a0;
- (int)frameBecameAvailableCount:(int *)a0 figBufferQueueEmptyCount:(int *)a1 figBufferQueueErrorCount:(int *)a2;
- (int)frameCount:(BOOL)a0;
- (void)frameProc;
- (int)getCamera:(unsigned int *)a0;
- (int)getFrameRate;
- (id)initWithCaptureServer:(id)a0 protocolFunctions:(const struct tagVCVideoCaptureServerProtocolRealtimeInstanceVTable { void /* function */ *x0; } *)a1 width:(int)a2 height:(int)a3 frameRate:(int)a4 videoSourceToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a5 error:(int *)a6;
- (BOOL)isFrontCamera;
- (BOOL)isPortraitResolutionCaptureActive;
- (int)processFrame;
- (void)resizeCameraBufferToCaptureSize:(struct __CVBuffer **)a0;
- (int)setCameraWithUID:(id)a0;
- (int)setUpDVCamera;
- (int)setWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (void)updateSensorFramerate;
- (void)videoDataBecameReady:(struct opaqueCMSampleBuffer { } *)a0;

@end
