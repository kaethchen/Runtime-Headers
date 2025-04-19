@class ASDTIOPAudioLPMicStream, NSString, ASDTNonSecurePathEnableProperty;

@interface ASDTIOPAudioLPMicDevice : ASDTAudioDevice <ASDTExclavesStatusTrackerHostProtocol, ASDTIOServiceDependency> {
    struct unique_ptr<ASDT::IOPAudio::LPMic::UserClient, std::default_delete<ASDT::IOPAudio::LPMic::UserClient>> { struct __compressed_pair<ASDT::IOPAudio::LPMic::UserClient *, std::default_delete<ASDT::IOPAudio::LPMic::UserClient>> { struct UserClient *__value_; } __ptr_; } _lpMicUserClient;
    struct IOMemoryMap { void /* function */ **_vptr$IOMemoryMap; struct IOConnect { void /* function */ **_vptr$IOConnect; struct shared_ptr<ASDT::IOConnect::Object> { struct Object *__ptr_; struct __shared_weak_count *__cntrl_; } mObject; struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mMutex; BOOL mIsOpen; } mConnection; void *mAddress; unsigned int mSize; unsigned int mType; } _lpMicEngineStatus;
    unsigned long long _initialSampleTime;
    long long _exclavesStatusTrackerOnce;
    struct unique_ptr<ASDT::Exclaves::StatusTracker, std::default_delete<ASDT::Exclaves::StatusTracker>> { struct __compressed_pair<ASDT::Exclaves::StatusTracker *, std::default_delete<ASDT::Exclaves::StatusTracker>> { struct StatusTracker *__value_; } __ptr_; } _exclavesStatusTracker;
}

@property (weak, nonatomic) ASDTIOPAudioLPMicStream *inputStream;
@property (retain, nonatomic) ASDTNonSecurePathEnableProperty *nonSecureInputEnableProperty;
@property (readonly, nonatomic) void *exclavesStatusTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ioServiceDependenciesForConfig:(id)a0;
+ (id)enableListeningPropertyForService:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)timestampPeriod;
- (id /* block */)getZeroTimestampBlock;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (id)initWithConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (BOOL)setupSamplingRates:(id)a0;
- (BOOL)subclassInitWithConfig:(id)a0;
- (BOOL)nonSecureInputEnabled;
- (unsigned int)availablePastDataFrames;
- (BOOL)getEnabledChannelMask:(unsigned int *)a0;
- (unsigned int)ioBufferSizeFrames;
- (struct EngineStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)lpMicEngineStatus;
- (unsigned int)maximumPastDataFrames;
- (BOOL)setEnabledChannelMask:(unsigned int)a0;
- (BOOL)setupCustomProperties:(id)a0;
- (BOOL)setupExclavesStatusTracker;
- (BOOL)updateFromStreamDescription;

@end
