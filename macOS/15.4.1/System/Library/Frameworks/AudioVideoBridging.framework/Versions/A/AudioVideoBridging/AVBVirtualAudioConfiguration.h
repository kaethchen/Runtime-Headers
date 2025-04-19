@class AVBVirtualAudioConfigurationXPCDelegate, NSXPCConnection;

@interface AVBVirtualAudioConfiguration : NSObject {
    NSXPCConnection *_serverConnection;
    AVBVirtualAudioConfigurationXPCDelegate *_serverDelegate;
}

+ (id)sharedVirtualAudioConfiguration;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (BOOL)addBuiltinVirtualEntity:(id)a0 configurationOptions:(id)a1 error:(id *)a2 completion:(id /* block */)a3;
- (BOOL)addCustomVirtualEntityWithUID:(id)a0 entityModel:(id)a1 onInterfaces:(id)a2 error:(id *)a3 completion:(id /* block */)a4;
- (BOOL)getBuiltinVirtualAudioEntityList:(id /* block */)a0;
- (BOOL)getCustomVirtualAudioEntityList:(id /* block */)a0;
- (BOOL)removeBuiltinVirtualEntity:(id)a0 completion:(id /* block */)a1;
- (BOOL)removeCustomVirtualEntityWithUID:(id)a0 completion:(id /* block */)a1;

@end
