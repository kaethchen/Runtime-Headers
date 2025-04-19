@class ASDTIOPAudioIsolatedIOBufferDevice, ASDTIOPAudioLPMicDevice, NSString, ASDTIOPAudioIOBufferDevice;

@interface ASDTIOPAudioLPMicStream : ASDTExclavesStream <ASDTIOServiceDependency> {
    struct IOMemoryMap { void /* function */ **_vptr$IOMemoryMap; struct IOConnect { void /* function */ **_vptr$IOConnect; struct shared_ptr<ASDT::IOConnect::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutex; BOOL mIsOpen; } mConnection; void *mAddress; unsigned int mSize; unsigned int mType; } _ioBufferMap;
    unsigned int _ioBufferSize;
}

@property (readonly, nonatomic) ASDTIOPAudioLPMicDevice *parent;
@property (retain, nonatomic) ASDTIOPAudioIsolatedIOBufferDevice *isolatedIOBufferDevice;
@property (retain, nonatomic) ASDTIOPAudioIOBufferDevice *ioBufferDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ioServiceDependenciesForConfig:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)ioBufferSize;
- (void)startStream;
- (void)stopStream;
- (void)ioThreadStateChange:(id)a0;
- (id /* block */)readIsolatedInputBlock;
- (id /* block */)exclavesReadInput;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (char **)ioBufferRef;
- (int)pmIdleStream:(int)a0;
- (int)pmPrepareStream:(int)a0;
- (int)pmPrewarmStream:(int)a0;
- (BOOL)setupPhysicalFormats:(id)a0;
- (void)releaseIOBuffer;
- (BOOL)mapIOBuffer;
- (int)setupIsolatedIOForUseCase:(unsigned long long)a0 withFrameSize:(unsigned int)a1;
- (int)teardownIsolatedIOForUseCase:(unsigned long long)a0;
- (BOOL)updateFromStreamDescription:(struct StreamDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; } *)a0;

@end
