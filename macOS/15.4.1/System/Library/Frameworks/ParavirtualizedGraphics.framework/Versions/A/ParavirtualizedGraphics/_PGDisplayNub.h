@class NSObject, NSArray, PGMapping, _PGDevice, _PGDisplay;
@protocol OS_dispatch_semaphore;

@interface _PGDisplayNub : NSObject {
    _PGDevice *_device;
    unsigned long long _port;
    unsigned int _sharedStatePage;
    PGMapping *_sharedStateMapping;
    void *_sharedState;
    NSObject<OS_dispatch_semaphore> *_frameDelaySema;
    unsigned int _frameDelayCount;
    BOOL _asleep;
    BOOL _guestColorSpaceDirty;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _nubMutex;
    BOOL _paused;
    BOOL _willRestore;
    BOOL _didRestore;
}

@property (nonatomic) _PGDisplay *client;
@property (copy, nonatomic) NSArray *modeList;
@property (nonatomic) unsigned long long protectionOptions;
@property (readonly, nonatomic) struct { unsigned short x0; unsigned short x1; } cursorPosition;
@property (readonly, nonatomic) BOOL compositorSupportsLiveResize;
@property (readonly, nonatomic) struct CGColorSpace { } *guestColorSpace;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)pause;
- (void *)sharedState;
- (void)unpause;
- (void)presentSurface:(unsigned int)a0;
- (void)_cursorGlyphVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 stride:(unsigned long long)a2 width:(unsigned short)a3 height:(unsigned short)a4 hotSpotX:(unsigned short)a5 hotSpotY:(unsigned short)a6 sum:(unsigned int)a7;
- (void)_cursorShow:(BOOL)a0;
- (void)_presentMappedSurface:(unsigned long long)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)_presentSurface:(unsigned int)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)_sleepState:(BOOL)a0;
- (void)ack:(unsigned int)a0;
- (void)compositorParametersConfigEpoch:(unsigned long long)a0 origin:(struct { unsigned short x0; unsigned short x1; })a1 scaleFactor:(unsigned char)a2;
- (void)copy_GuestBGRA_ToHostBGRA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (void)copy_GuestBGRA_toHostRGBA_Task:(id)a0 virtualOffset:(unsigned long long)a1 mappedLength:(unsigned long long)a2 stride:(unsigned long long)a3 buffer:(unsigned int *)a4 width:(unsigned short)a5 height:(unsigned short)a6 sum:(unsigned int)a7;
- (void)cursorGlyphVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 stride:(unsigned long long)a2 width:(unsigned short)a3 height:(unsigned short)a4 hotSpotX:(unsigned short)a5 hotSpotY:(unsigned short)a6 sum:(unsigned int)a7;
- (void)cursorShow:(BOOL)a0;
- (void)delayFrames:(unsigned int)a0;
- (void)doorbell;
- (void)finishRestore;
- (float[3][4] *)getDirtyColorMatrix;
- (id)initWithDevice:(id)a0 port:(unsigned long long)a1 sharedStatePage:(unsigned int)a2;
- (void)presentMappedSurface:(unsigned long long)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)presentSurface:(unsigned int)a0 gammaTableVirtualOffset:(unsigned long long)a1 gammaTableMappedLength:(unsigned long long)a2 gammaTableEntryCount:(unsigned int)a3 gammaTableSum:(unsigned int)a4;
- (void)setGammaTableVirtualOffset:(unsigned long long)a0 mappedLength:(unsigned long long)a1 entryCount:(unsigned int)a2 sum:(unsigned int)a3;
- (void)setGuestICCProfileLength:(unsigned int)a0 virtualOffset:(unsigned long long)a1;
- (void)setProperty:(int)a0 value:(unsigned int *)a1 wordCount:(unsigned int)a2;
- (void)sleepState:(BOOL)a0;
- (void)stateMachineWithCaller:(const char *)a0;
- (BOOL)testUpdateModeList:(const char *)a0;
- (BOOL)testUpdateSettings:(const char *)a0;
- (void)updateGuestColorSpace;
- (void)willRestore;

@end
