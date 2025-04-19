@interface MAUSBDevicePmanagedOUTCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) BOOL elasticBuffer;
@property (readonly) BOOL dropNotification;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithElasticBuffer:(BOOL)a0 dropNotification:(BOOL)a1;

@end
