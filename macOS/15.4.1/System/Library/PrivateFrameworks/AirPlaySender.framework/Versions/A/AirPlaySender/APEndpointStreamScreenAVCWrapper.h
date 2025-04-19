@class AVCScreenCapture, NSString, AVCMediaStreamConfig, AVCMediaStreamNegotiator, AVCVideoStream, NSObject;
@protocol OS_dispatch_semaphore;

@interface APEndpointStreamScreenAVCWrapper : NSObject <AVCVideoStreamDelegate, AVCScreenCaptureDelegate> {
    int _clientPID;
    AVCVideoStream *_avcVideoStream;
    AVCScreenCapture *_avcScreenCapture;
    AVCMediaStreamNegotiator *_avcMediaStreamNegotiatorForMirroring;
    AVCMediaStreamNegotiator *_avcMediaStreamNegotiatorForPresentationMode;
    AVCMediaStreamConfig *_videoStreamConfigForMirroring;
    AVCMediaStreamConfig *_videoStreamConfigForPresentationMode;
    int _didStartStatus;
    void *_eventWeakContext;
    void /* function */ *_eventHandleStart;
    void /* function */ *_eventHandleStop;
    void /* function */ *_eventHandleFailed;
    void /* function */ *_eventHandleClearScreen;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    unsigned char _isSubFrameEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)start;
- (int)stop;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidServerDie:(id)a0;
- (void)streamDidStop:(id)a0;
- (void)stopWithCompletion:(struct { void /* function */ *x0; void *x1; int x2; } *)a0;
- (void)screenCapture:(id)a0 didStart:(BOOL)a1 withError:(id)a2;
- (void)screenCapture:(id)a0 didStop:(BOOL)a1 withError:(id)a2;
- (void)screenCapture:(id)a0 screenDidClear:(BOOL)a1;
- (void)serverDidDisconnect:(id)a0;
- (unsigned long long)convertHDRMode:(struct __CFString { } *)a0;
- (int)createVideoStreamConfig:(id *)a0 withDirection:(long long)a1 screenOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; unsigned char x7; } *)a2 previousConfig:(id)a3;
- (int)getClientUPID:(unsigned long long *)a0;
- (void)getVideoResolutionFromOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; unsigned char x7; } *)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (void)handleFailureWithError:(int)a0 reason:(struct __CFString { } *)a1;
- (int)initScreeenCaptureWithScreenOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; unsigned char x7; } *)a0;
- (id)initWithClientPID:(struct __CFNumber { } *)a0 hdrMode:(struct __CFString { } *)a1 presentationMode:(BOOL)a2 hdrMirroringSupported:(BOOL)a3 eventHandlers:(struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; })a4 error:(int *)a5;
- (int)initializeNegotiatorWithMode:(struct __CFString { } *)a0 presentationMode:(BOOL)a1 hdrMirroringSupported:(BOOL)a2;
- (unsigned char)isConfigPresentForPresentationMode:(unsigned char)a0;
- (id)negotiationDataForPresentationMode:(unsigned char)a0;
- (int)restartWithScreenOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; unsigned char x7; } *)a0 negotiatedBlob:(id)a1;
- (int)setCaptureSourceIDForStreamConfig:(id)a0;
- (int)startWithNWConnectionClientID:(unsigned char[16])a0 negotiatedBlob:(id)a1 screenOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; unsigned char x7; } *)a2 completion:(struct { void /* function */ *x0; void *x1; int x2; } *)a3;

@end
