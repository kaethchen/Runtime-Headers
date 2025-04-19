@interface MAUSBDeviceSyncCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) BOOL mediaTimeAvailable;
@property (readonly) BOOL timestampRequest;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithMediaTimeAvailable:(BOOL)a0 timestampRequest:(BOOL)a1;

@end
