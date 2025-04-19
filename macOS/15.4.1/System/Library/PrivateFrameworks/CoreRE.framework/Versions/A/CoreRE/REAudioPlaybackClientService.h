@class NSString, _REAudioManagerCancellable, NSXPCConnection;

@interface REAudioPlaybackClientService : NSObject <REAudioPlaybackClientService> {
    NSXPCConnection *_connection;
    struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { _Atomic unsigned long long __a_value; } __a_; } _connectionIdentifier;
    _REAudioManagerCancellable *_service;
}

@property (readonly) unsigned long long connectionIdentifier;
@property (readonly) BOOL connected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveConnectionIdentifier:(unsigned long long)a0;
- (id)initWithXPCEndpoint:(id)a0 queue:(id)a1 service:(id)a2;
- (void)mediaServicesLost;
- (void)mediaServicesReset;
- (void)streamToken:(unsigned long long)a0 didChangeFromState:(unsigned long long)a1 toState:(unsigned long long)a2;

@end
