@interface MAUSBDeviceSpeedCapabilityDescriptor : MAUSBDeviceCapabilityDescriptor

@property (readonly) unsigned char speed;
@property (readonly) unsigned char laneSpeedExponent;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithSpeed:(unsigned char)a0 laneSpeedExponent:(unsigned char)a1;

@end
