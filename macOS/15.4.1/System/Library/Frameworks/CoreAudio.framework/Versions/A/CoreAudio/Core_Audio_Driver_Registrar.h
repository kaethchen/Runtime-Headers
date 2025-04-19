@class NSString;

@interface Core_Audio_Driver_Registrar : NSObject <NSXPCListenerDelegate, Core_Audio_Driver_Registrar_Protocol>

@property (nonatomic) void *registrar;
@property (nonatomic) struct shared_ptr<std::vector<Registrar_Connection_Info>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } connection_infos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)register_driver:(id)a0 bundle_url:(id)a1 bundle_id:(id)a2 cpu_type:(int)a3 is_using_driver_service:(BOOL)a4 reply:(id /* block */)a5;

@end
