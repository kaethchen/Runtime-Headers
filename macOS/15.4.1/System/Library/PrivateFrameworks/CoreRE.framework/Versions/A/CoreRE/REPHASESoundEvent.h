@class AVAudioSession, PHASESource, PHASEMixerParameters, PHASESoundEventNodeAsset, PHASESoundEvent, PHASEListener, AUAudioUnit, NSObject, PHASEExternalOutputStream, PHASEExternalOutputStreamController, PHASEEngine;
@protocol OS_dispatch_queue, REPHASESoundEventObserver;

@interface REPHASESoundEvent : NSObject <PHASEExternalStreamDelegate> {
    struct queue<REPHASESoundEventCommandState, std::deque<REPHASESoundEventCommandState>> { struct deque<REPHASESoundEventCommandState, std::allocator<REPHASESoundEventCommandState>> { struct __split_buffer<REPHASESoundEventCommandState *, std::allocator<REPHASESoundEventCommandState *>> { struct REPHASESoundEventCommandState **__first_; struct REPHASESoundEventCommandState **__begin_; struct REPHASESoundEventCommandState **__end_; struct __compressed_pair<REPHASESoundEventCommandState **, std::allocator<REPHASESoundEventCommandState *>> { struct REPHASESoundEventCommandState **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<REPHASESoundEventCommandState>> { unsigned long long __value_; } __size_; } c; } _commandQueue;
    struct atomic<REAudioPlaybackState> { struct __cxx_atomic_impl<REAudioPlaybackState, std::__cxx_atomic_base_impl<REAudioPlaybackState>> { _Atomic unsigned long long __a_value; } __a_; } _state;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _isStopping;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _shouldExecuteCommand;
    PHASEEngine *_engine;
    PHASESource *_source;
    PHASEListener *_listener;
    PHASEMixerParameters *_mixerParameters;
    PHASESoundEventNodeAsset *_soundEventAsset;
    struct recursive_mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _commandQueueMutex;
    struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } _stationaryTime;
    struct atomic<double> { struct __cxx_atomic_impl<double, std::__cxx_atomic_base_impl<double>> { _Atomic double __a_value; } __a_; } _latestSeekTarget;
    id /* block */ _soundEventFactory;
    NSObject<OS_dispatch_queue> *_phaseQueue;
}

@property (weak, nonatomic) NSObject<REPHASESoundEventObserver> *observer;
@property (nonatomic) struct shared_ptr<re::audio::REPHASESoundPrepareState> { struct REPHASESoundPrepareState *__ptr_; struct __shared_weak_count *__cntrl_; } prepareState;
@property (readonly, nonatomic) PHASESoundEvent *soundEvent;
@property (readonly, nonatomic) PHASEExternalOutputStreamController *externalStreamController;
@property (readonly) unsigned long long state;
@property (readonly) AVAudioSession *audioSession;
@property float cachedPlaybackSpeed;
@property float cachedReverbSendLevel;
@property float cachedDirectSendLevel;
@property BOOL soundEventPlayed;
@property (retain, nonatomic) PHASEExternalOutputStream *externalStream;
@property (retain, nonatomic) AUAudioUnit *audioUnit;
@property (copy, nonatomic) id /* block */ renderBlock;
@property (copy, nonatomic) id /* block */ playbackStateChangeHandler;
@property (readonly) double latestSeekTarget;

+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 normalizationMode:(int)a5 targetLUFS:(double)a6 calibrationMode:(int)a7 calibrationLevel:(double)a8 callback:(id /* block */)a9;
+ (void)eventWithEngine:(id)a0 streamUUID:(id)a1 maximumFramesToRender:(unsigned int)a2 audioFormat:(id)a3 audioUnit:(id)a4 renderBlock:(id /* block */)a5 mixerDefinition:(id)a6 source:(id)a7 listener:(id)a8 group:(id)a9 normalizationMode:(int)a10 calibrationMode:(int)a11 calibrationLevel:(double)a12 audioSession:(id)a13 phaseQueue:(id)a14 callback:(id /* block */)a15;
+ (void)eventWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 normalizationMode:(int)a5 targetLUFS:(double)a6 calibrationMode:(int)a7 calibrationLevel:(double)a8 audioSession:(id)a9 phaseQueue:(id)a10 callback:(id /* block */)a11;

- (void)dealloc;
- (id)description;
- (BOOL)_resume;
- (void).cxx_destruct;
- (void)resume;
- (id).cxx_construct;
- (void)pause;
- (BOOL)_start;
- (BOOL)seekToTime:(double)a0;
- (void)prepareWithCompletion:(id /* block */)a0;
- (BOOL)_pause;
- (BOOL)_seekToTime:(double)a0;
- (id)mixer;
- (void)stopAndDestroy;
- (BOOL)_stopAndDestroy;
- (void)_updateCommandQueue;
- (BOOL)changeFromExpectedState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (unsigned long long)changeToState:(unsigned long long)a0;
- (id)initWithEngine:(id)a0 soundEventAsset:(id)a1 source:(id)a2 listener:(id)a3 mixerParameters:(id)a4 audioSession:(id)a5 phaseQueue:(id)a6 outError:(id *)a7;
- (id)initWithEngine:(id)a0 source:(id)a1 listener:(id)a2 audioSession:(id)a3 phaseQueue:(id)a4;
- (id)initWithSoundEventFactory:(id /* block */)a0 phaseQueue:(id)a1;
- (id)paramForKey:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })sourcePose;
- (void)stream:(id)a0 didInvalidateWithError:(id)a1;
- (void)updateCommandQueue;

@end
