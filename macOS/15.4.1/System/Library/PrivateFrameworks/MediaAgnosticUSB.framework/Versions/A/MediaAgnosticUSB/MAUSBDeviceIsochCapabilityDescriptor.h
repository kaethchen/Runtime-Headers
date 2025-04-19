@interface MAUSBDeviceIsochCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) BOOL payloadAlignment;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithPayloadAlignment:(BOOL)a0;

@end
