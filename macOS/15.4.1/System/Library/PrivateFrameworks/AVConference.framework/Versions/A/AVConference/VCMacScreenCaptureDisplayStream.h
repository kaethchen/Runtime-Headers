@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface VCMacScreenCaptureDisplayStream : VCObject <VCMacScreenCaptureSource> {
    id _delegate;
    struct CGDisplayStream { } *_displayStream;
    struct _VCMacScreenCaptureSourceContext { void *sinkContext; void /* function */ *sinkCallback; } _frameCallback;
    NSObject<OS_dispatch_semaphore> *_stopSemaphore;
    NSObject<OS_dispatch_queue> *_streamQueue;
    struct OpaqueCMMemoryPool { } *_dirtyRectsMemoryPool;
    struct __CFAllocator { } *_dirtyRectsArrayAllocator;
    unsigned int _injectedFoveationBufferSize;
    struct OpaqueCMMemoryPool { } *_warpParameterInjectionMemoryPool;
    struct __CFAllocator { } *_warpParameterInjectionAllocator;
    int _captureWidth;
    int _captureHeight;
    int _displayWidth;
    int _displayHeight;
    BOOL _foveationEnabled;
    struct __CFAllocator { } *_gazeAttachmentAllocator;
    struct { unsigned int val[8]; } _clientAuditToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (int)stop;
- (void)callbackWithEventString:(id)a0;
- (BOOL)createDisplayStreamPropertiesFromConfig:(id)a0 displayProperties:(struct __CFDictionary **)a1;
- (id)initWithDelegate:(id)a0 screenCaptureSourceContext:(const struct _VCMacScreenCaptureSourceContext { void *x0; void /* function */ *x1; } *)a1 sourceConfig:(id)a2;
- (BOOL)setupColorInfoWithSourceConfig:(id)a0 displayStreamProperties:(struct __CFDictionary { } *)a1;
- (int)startWithConfig:(id)a0;
- (int)updateScreenCapture:(id)a0;

@end
