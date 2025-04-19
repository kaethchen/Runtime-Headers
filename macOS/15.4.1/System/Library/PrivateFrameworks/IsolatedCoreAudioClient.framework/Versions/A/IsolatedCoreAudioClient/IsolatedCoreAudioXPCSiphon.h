@class NSMutableSet;

@interface IsolatedCoreAudioXPCSiphon : IsolatedCoreAudioClientNSXPCListenerDelegate <IsolatedCoreAudioSiphonProtocol>

@property (nonatomic) struct shared_ptr<IsolatedCoreAudioSiphon> { struct IsolatedCoreAudioSiphon *__ptr_; struct __shared_weak_count *__cntrl_; } mSiphon;
@property (nonatomic) struct shared_ptr<SiphonClientMap> { struct SiphonClientMap *__ptr_; struct __shared_weak_count *__cntrl_; } mClientMap;
@property (retain, nonatomic) NSMutableSet *reverseConnections;

+ (struct shared_ptr<SiphonClientMap> { struct SiphonClientMap *x0; struct __shared_weak_count *x1; })initClientMap;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)connectToUseCase:(unsigned int)a0 endpoint:(id)a1;
- (void)createClientReaper;
- (id)initWithClientMap:(struct shared_ptr<SiphonClientMap> { struct SiphonClientMap *x0; struct __shared_weak_count *x1; })a0 andServer:(struct shared_ptr<ClientLocalServer> { struct ClientLocalServer *x0; struct __shared_weak_count *x1; })a1;
- (void)requestAudio:(unsigned int)a0 atTime:(unsigned long long)a1 atSample:(unsigned long long)a2 with:(id /* block */)a3;
- (void)setAudioAvailabilityCallback:(unsigned int)a0 usingXPC:(id)a1 with:(id /* block */)a2;
- (void)setAudioLapseCallback:(unsigned int)a0 usingXPC:(id)a1 with:(id /* block */)a2;
- (void)startIO:(unsigned int)a0 with:(id /* block */)a1;
- (void)stopIO:(unsigned int)a0 with:(id /* block */)a1;

@end
