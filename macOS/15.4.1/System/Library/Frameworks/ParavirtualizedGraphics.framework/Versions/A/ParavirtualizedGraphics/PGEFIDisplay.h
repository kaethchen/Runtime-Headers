@class NSObject, PGMapping, _PGDevice, _PGDisplay;
@protocol OS_dispatch_queue, OS_dispatch_source, MTLTextureSPI;

@interface PGEFIDisplay : NSObject {
    _PGDevice *_device;
    unsigned int _currentModeIndex;
    _PGDisplay *_display;
    unsigned int _framebufferStartPage;
    unsigned int _framebufferLength;
    unsigned int _framebufferDepth;
    unsigned int _framebufferMode;
    unsigned int _framebufferStride;
    unsigned int _currentWidth;
    unsigned int _currentHeight;
    BOOL _taskReady;
    struct PGTaskInfo_s { struct PGTask_s *task; void *baseAddress; } _efiTaskInfo;
    PGMapping *_efiMapping;
    id<MTLTextureSPI> _texture;
    BOOL _usingTextureFromBytes;
    NSObject<OS_dispatch_queue> *_presentQueue;
    NSObject<OS_dispatch_source> *_presentTimer;
    NSObject<OS_dispatch_source> *_presentSource;
    BOOL _mapped;
    unsigned int _mappedLength;
    unsigned int _totalFramebufferSize;
    struct PGTraceRange_s { } *_traceRange;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)teardown;
- (void)present;
- (void)setDisplay:(id)a0;
- (void)cancelFramePresents;
- (unsigned int)getModeCount;
- (unsigned int)getModeValue;
- (unsigned int)getStrideAlignment;
- (void)scheduleFramePresents;
- (void)setFramebufferDepth:(unsigned int)a0;
- (void)setFramebufferLength:(unsigned int)a0;
- (void)setFramebufferMode:(unsigned int)a0;
- (void)setFramebufferStart:(unsigned int)a0;
- (void)setFramebufferStride:(unsigned int)a0;
- (void)setModeSelect:(unsigned int)a0;
- (void)stopPresentation;
- (void)updateFramebufferMapping;
- (void)updateFramebufferMode;

@end
