@interface VZNVMExpressControllerDeviceConfiguration : VZStorageDeviceConfiguration

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttachment:(id)a0;
- (void)_getStorageDeviceWithQueue:(struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { id x0; } x0; })a0 session:(const struct DispatchGroupSession { id x0; } *)a1 completionHandler:(id /* block */)a2;
- (struct Expected<NSDictionary *, NSError *> { union storage<NSDictionary *, NSError *> { char x0; id x1; id x2; } x0; BOOL x1; })encodeWithEncoder:(id)a0;

@end
