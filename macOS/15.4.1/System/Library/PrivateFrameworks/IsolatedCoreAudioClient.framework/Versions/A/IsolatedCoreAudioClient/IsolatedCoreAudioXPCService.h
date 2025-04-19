@interface IsolatedCoreAudioXPCService : IsolatedCoreAudioClientNSXPCListenerDelegate <IsolatedCoreAudioServerProtocol>

@property (nonatomic) struct shared_ptr<ServerSideAudioSwitchboard> { struct ServerSideAudioSwitchboard *__ptr_; struct __shared_weak_count *__cntrl_; } mServerSideSwitchboard;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)checkInForIsolatedAudioSharedResources:(unsigned int)a0 with:(id /* block */)a1;
- (void)checkOutForIsolatedAudioSharedResources:(unsigned int)a0;
- (void)getWorkgroupForIsolatedAudio:(unsigned int)a0 with:(id /* block */)a1;
- (id)initWithClientReaper:(struct function<void (int)> { struct __value_func<void (int)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (void)startIsolatedAudioForUseCase:(unsigned int)a0 atTime:(unsigned long long)a1 with:(id /* block */)a2;
- (void)startIsolatedAudioForUseCase:(unsigned int)a0 with:(id /* block */)a1;
- (void)stopIsolatedAudioForUseCase:(unsigned int)a0 with:(id /* block */)a1;

@end
