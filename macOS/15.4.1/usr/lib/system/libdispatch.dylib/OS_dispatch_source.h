@class NSString;

@interface OS_dispatch_source : OS_dispatch_object <OS_dispatch_object, OS_dispatch_source_exclaves_notification, OS_dispatch_source_nw_channel, OS_dispatch_source_sock, OS_dispatch_source_memorystatus, OS_dispatch_source_vm, OS_dispatch_source_vfs, OS_dispatch_source_interval, OS_dispatch_source_write, OS_dispatch_source_vnode, OS_dispatch_source_timer, OS_dispatch_source_signal, OS_dispatch_source_read, OS_dispatch_source_proc, OS_dispatch_source_memorypressure, OS_dispatch_source_mach_recv, OS_dispatch_source_mach_send, OS_dispatch_source_data_replace, OS_dispatch_source_data_or, OS_dispatch_source_data_add, OS_dispatch_source>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)release;
- (id)init;
- (void)_xref_dispose;

@end
