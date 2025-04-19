@class NSString, NSDictionary, ASDTIOA2InjectionStream, ASDTIOA2Device;

@interface ASDTIOA2Stream : ASDTExclavesStream <ASDTIOA2Object> {
    struct IOMemoryMap { void /* function */ **_vptr$IOMemoryMap; struct IOConnect { void /* function */ **_vptr$IOConnect; struct shared_ptr<ASDT::IOConnect::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutex; BOOL mIsOpen; } mConnection; void *mAddress; unsigned int mSize; unsigned int mType; } _ioBufferMap;
    unsigned int _ioBufferByteSize;
}

@property (nonatomic) unsigned int userClientID;
@property (nonatomic) BOOL usesIsolatedIO;
@property (retain, nonatomic) NSDictionary *isolatedIOFormatMap;
@property (weak, nonatomic) ASDTIOA2InjectionStream *injectionStream;
@property (readonly, weak, nonatomic) ASDTIOA2Device *ioa2Device;
@property (nonatomic) BOOL marked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setIsActive:(BOOL)a0;
- (unsigned int)ioBufferSize;
- (void)setPhysicalFormat:(id)a0;
- (void)setPhysicalFormats:(id)a0;
- (BOOL)changePhysicalFormat:(id)a0;
- (BOOL)deviceChangedToSamplingRate:(double)a0;
- (void)ioThreadStateChange:(id)a0;
- (id)physicalFormat;
- (id /* block */)readIsolatedInputBlock;
- (id /* block */)exclavesReadInput;
- (char **)ioBufferRef;
- (int)pmPrepareStream:(int)a0;
- (int)pmPrewarmStream:(int)a0;
- (BOOL)setupPhysicalFormats:(id)a0;
- (id /* block */)updateClientPositionBlock;
- (void)setPhysicalFormat:(id)a0 alwaysNotify:(BOOL)a1;
- (BOOL)_mapIOBuffer;
- (void)_releaseIOBuffer;
- (void)asyncDeviceChangedToSamplingRate:(double)a0;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 direction:(unsigned int)a2;
- (id)initWithIOA2Device:(id)a0 userClientID:(unsigned int)a1 direction:(unsigned int)a2 registryDict:(id)a3;
- (BOOL)synchronizeWithRegistryDictionary:(id)a0;
- (void)updateActiveState;

@end
