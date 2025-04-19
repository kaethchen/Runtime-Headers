@class NSObject, NSArray, ASDDSPGraph, NSString, NSUserDefaults, ASDStreamDSPConfiguration, ASDAudioDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDDSPStream : ASDStream {
    ASDAudioDevice *_owningDevice;
    struct unique_ptr<ASDDSPStreamHelper, std::default_delete<ASDDSPStreamHelper>> { struct __compressed_pair<ASDDSPStreamHelper *, std::default_delete<ASDDSPStreamHelper>> { struct ASDDSPStreamHelper *__value_; } __ptr_; } _streamHelper;
    struct list<ASDDSPGraphHelper, std::allocator<ASDDSPGraphHelper>> { struct __list_node_base<ASDDSPGraphHelper, void *> { void *__prev_; void *__next_; } __end_; struct __compressed_pair<unsigned long, std::allocator<std::__list_node<ASDDSPGraphHelper, void *>>> { unsigned long long __value_; } __size_alloc_; } _graphHelpers;
    struct unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> { struct __compressed_pair<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences> *, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> { void *__value_; } __ptr_; } _clientToGraphMap;
    NSObject<OS_dispatch_queue> *_dspQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    long long _DSPCaptureType;
    NSString *_DSPCaptureDirectory;
    long long _maximumFramesPerIOCycle;
    NSUserDefaults *_defaults;
    NSArray *_underlyingStreams;
    long long _graphAudioValidationMode;
    long long _ioReferenceCount;
    NSObject<OS_dispatch_source> *mHUPSource;
}

@property (retain, nonatomic) ASDStreamDSPConfiguration *currentDSPConfiguration;
@property (copy, nonatomic) NSArray *underlyingStreams;
@property (nonatomic) unsigned long long underlyingInputStreamCount;
@property (nonatomic) unsigned long long underlyingOutputStreamCount;
@property (readonly, nonatomic) long long maximumFramesPerIOCycle;
@property (nonatomic) BOOL keepGraphInitialized;
@property (readonly, nonatomic) BOOL isRunning;
@property (nonatomic) BOOL bypassMode;
@property (nonatomic) long long graphAudioValidationMode;
@property (readonly, nonatomic) ASDDSPGraph *hardwareDSP;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setIsActive:(BOOL)a0;
- (void)startStream;
- (void)stopStream;
- (id)initWithDirection:(unsigned int)a0 withPlugin:(id)a1;
- (id /* block */)readInputBlock;
- (id /* block */)writeMixBlock;
- (BOOL)graphStructureIsValid:(id)a0 clientID:(unsigned long long)a1;
- (BOOL)addHardwareDSP:(id)a0;
- (id)driverClassName;
- (BOOL)_allocateStreamingResources;
- (void)_allocateStreamingResourcesForGraphHelper:(void *)a0;
- (void)_deallocateStreamingResources;
- (id)_hardwareDSP;
- (void)_resumeProcessing;
- (void)_suspendProcessing;
- (void)_updateLatency;
- (void)_updateMaximumFramesPerIOCycle;
- (BOOL)addClientDSP:(id)a0 forClient:(unsigned int)a1;
- (BOOL)addClientDSP:(id)a0 withKey:(unsigned long long)a1;
- (BOOL)changePhysicalFormat:(id)a0;
- (id)clientDSPForClient:(unsigned int)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)doSetUnderlyingStreams:(id)a0;
- (BOOL)enableBasicDSPCaptureOnGraph:(id)a0 withLevel:(id)a1 andDebugType:(long long)a2;
- (BOOL)enableBasicDSPCaptureOnGraph:(id)a0 withLevel:(id)a1 andDebugType:(long long)a2 andMode:(long long)a3;
- (void)enableDSPCaptureByType:(long long)a0 withGraph:(id)a1;
- (void)enableDSPCaptureInAction;
- (void)enableDSPFileInjectionOnGraph:(id)a0 withFormat:(id)a1;
- (id)getASDAudioDefaultsPath;
- (long long)getAudioCaptureRingBufferModeWithDict:(id)a0;
- (long long)getAudioDebugTypeWithDict:(id)a0;
- (id)getDSPCaptureDirectory;
- (long long)getDSPCaptureTypeFromDefault;
- (id)initWithOwningDevice:(id)a0 underlyingStreams:(id)a1 direction:(unsigned int)a2 plugin:(id)a3;
- (id /* block */)processOutputBlock;
- (BOOL)removeClientDSPForClient:(unsigned int)a0;
- (BOOL)removeClientDSPwithKey:(unsigned long long)a0;
- (BOOL)removeHardwareDSP;
- (void)resumeProcessing;
- (void)sleepForNumberOfSamples:(unsigned long long)a0;
- (void)suspendProcessing;
- (void)updateLatency;

@end
