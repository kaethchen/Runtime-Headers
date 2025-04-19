@class NSUUID;

@interface MAUSBDeviceContainerIDCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)data;
- (id)initWithUUID:(id)a0;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
