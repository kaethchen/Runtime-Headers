@class NSPointerArray, AVBVirtualAudioConfiguration;

@interface AVBVirtualAudioConfigurationXPCDelegate : NSObject <AVBAudioConfigurationClient> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    NSPointerArray *_clients;
}

@property (nonatomic) AVBVirtualAudioConfiguration *configuration;

- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)addedBuiltinVirtualEntity:(id)a0 configurationOptions:(id)a1;
- (void)addedCustomVirtualEntityWithUID:(id)a0;
- (void)removedBuiltinVirtualEntity:(id)a0;
- (void)removedCustomVirtualEntityWithUID:(id)a0;

@end
