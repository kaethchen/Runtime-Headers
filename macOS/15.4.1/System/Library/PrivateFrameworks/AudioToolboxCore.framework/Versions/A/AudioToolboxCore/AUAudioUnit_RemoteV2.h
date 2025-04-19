@class NSUUID;

@interface AUAudioUnit_RemoteV2 : AUAudioUnit_XPC {
    struct unique_ptr<AUHostingServiceClient, std::default_delete<AUHostingServiceClient>> { struct __compressed_pair<AUHostingServiceClient *, std::default_delete<AUHostingServiceClient>> { struct AUHostingServiceClient *__value_; } __ptr_; } _service;
    NSUUID *_auInstanceUUID;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)_setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)_valueForProperty:(id)a0 error:(id *)a1;
- (id)auInstanceUUID;
- (id)initWithXPCService:(struct unique_ptr<AUHostingServiceClient, std::default_delete<AUHostingServiceClient>> { struct __compressed_pair<AUHostingServiceClient *, std::default_delete<AUHostingServiceClient>> { struct AUHostingServiceClient *x0; } x0; })a0 componentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a1 instance:(struct OpaqueAudioComponentInstance { } *)a2 instanceUUID:(id)a3 error:(id *)a4;
- (BOOL)providesUserInterface;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)a0;

@end
