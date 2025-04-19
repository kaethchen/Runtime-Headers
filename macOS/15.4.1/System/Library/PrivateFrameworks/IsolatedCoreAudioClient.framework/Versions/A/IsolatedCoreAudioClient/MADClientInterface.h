@class NSMutableSet;

@interface MADClientInterface : IsolatedCoreAudioClientNSXPCListenerDelegate <MicActivityClientProtocol> {
    struct shared_ptr<MADClient> { struct MADClient *__ptr_; struct __shared_weak_count *__cntrl_; } mClient;
    id /* block */ mMTDCallbackReply;
}

@property (nonatomic) struct shared_ptr<MADMultiplexer> { struct MADMultiplexer *__ptr_; struct __shared_weak_count *__cntrl_; } mMADMultiplexer;
@property (retain, nonatomic) NSMutableSet *mReverseConnections;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)createClientReaper;
- (void)disableMicrophoneActivityDetection:(id /* block */)a0;
- (void)enableMicrophoneActivityDetection:(id /* block */)a0;
- (id)initForTest:(id /* block */)a0;
- (void)listenForMicrophoneActivity:(id)a0 reply:(id /* block */)a1;
- (void)setupReverseConnection:(id)a0;
- (void)stopListeningForMicrophoneActivity:(id /* block */)a0;

@end
