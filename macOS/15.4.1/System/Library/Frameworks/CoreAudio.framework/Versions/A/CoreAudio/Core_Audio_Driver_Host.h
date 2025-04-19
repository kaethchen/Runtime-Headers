@class NSXPCListener, NSXPCListenerEndpoint, NSXPCConnection, Protocol, NSString;
@protocol Core_Audio_Driver_Host_Callback_Delegate;

@interface Core_Audio_Driver_Host : NSObject <NSXPCListenerDelegate, Core_Audio_Driver_Host_Protocol>

@property (retain, nonatomic) NSXPCConnection *connection_to_driver;
@property (retain, nonatomic) NSXPCConnection *connection_from_driver;
@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) NSXPCListenerEndpoint *driver_endpoint;
@property (retain, nonatomic) id<Core_Audio_Driver_Host_Callback_Delegate> delegate;
@property (retain, nonatomic) Protocol *driver_host_protocol;
@property (retain, nonatomic) Protocol *driver_protocol;
@property (nonatomic) struct shared_ptr<Property_Type_Info> { struct Property_Type_Info *__ptr_; struct __shared_weak_count *__cntrl_; } m_property_type_info;
@property (nonatomic) struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } m_invalidation_handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (int)destroy_device:(unsigned int)a0;
- (int)abort_device_configuration_change:(unsigned int)a0 action:(unsigned long long)a1 change:(unsigned long long)a2;
- (int)add_device_client:(unsigned int)a0 client_info:(const struct AudioServerPlugInClientInfo { unsigned int x0; int x1; unsigned char x2; struct __CFString *x3; } *)a1;
- (void)copy_storage_settings:(id)a0 reply:(id /* block */)a1;
- (int)create_device:(id)a0 client_info:(const struct AudioServerPlugInClientInfo { unsigned int x0; int x1; unsigned char x2; struct __CFString *x3; } *)a1 out_object_id:(unsigned int *)a2;
- (void)delete_storage_settings:(id)a0 reply:(id /* block */)a1;
- (int)get_property_data:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 qualifier_data_size:(unsigned int)a1 qualifier_data:(const void *)a2 data_size:(unsigned int)a3 out_data_size:(unsigned int *)a4 out_data:(void *)a5;
- (int)get_property_data_size:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 qualifier_data_size:(unsigned int)a1 qualifier_data:(const void *)a2 out_size:(unsigned int *)a3;
- (int)has_property:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 out_has_property:(char *)a1;
- (id)init_with_delegate:(id)a0;
- (int)initialize_driver:(id)a0;
- (int)is_property_settable:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 out_settable:(char *)a1;
- (void)object_properties_changed:(unsigned int)a0 properties_data:(id)a1 reply:(id /* block */)a2;
- (int)object_was_destroyed:(unsigned int)a0;
- (int)perform_device_configuration_change:(unsigned int)a0 action:(unsigned long long)a1 change:(unsigned long long)a2;
- (int)register_buffer:(id)a0;
- (int)remove_device_client:(unsigned int)a0 client_info:(const struct AudioServerPlugInClientInfo { unsigned int x0; int x1; unsigned char x2; struct __CFString *x3; } *)a1;
- (void)request_config_change:(unsigned int)a0 change_action:(unsigned long long)a1 change_token:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)retain_reply_for_process_boost;
- (void)set_invalidation_handler:(struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;
- (int)set_property_data:(struct Driver_Property_Identity { unsigned int x0; int x1; struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } x2; })a0 qualifier_data_size:(unsigned int)a1 qualifier_data:(const void *)a2 data_size:(unsigned int)a3 data:(const void *)a4;
- (int)start_io:(unsigned int)a0 client_info:(unsigned int)a1;
- (int)start_synchronous_messenger:(unsigned int)a0 client_id:(unsigned int)a1 nominal_sample_rate:(double)a2 io_buffer_frame_size:(unsigned int)a3 work_group_port:(unsigned int)a4 io_messenger:(id)a5;
- (int)stop_io:(unsigned int)a0 client_info:(unsigned int)a1;
- (int)stop_synchronous_messenger:(unsigned int)a0 client_id:(unsigned int)a1;
- (int)unregister_buffer:(id)a0;
- (void)write_storage_settings:(id)a0 storage_data:(id)a1 reply:(id /* block */)a2;

@end
