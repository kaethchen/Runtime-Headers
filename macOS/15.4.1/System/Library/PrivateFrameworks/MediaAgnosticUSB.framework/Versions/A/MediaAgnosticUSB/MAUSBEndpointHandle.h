@interface MAUSBEndpointHandle : MAUSBStructure

@property (readonly) unsigned short rawValue;
@property (readonly) unsigned int direction;
@property (readonly) unsigned char endpointNumber;
@property (readonly) unsigned char usbDeviceAddress;
@property (readonly) unsigned char busNumber;
@property (readonly) unsigned char endpointAddress;

- (id)data;
- (id)initWithValue:(unsigned short)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)initEndpointAddress;
- (id)initWithDirection:(unsigned int)a0 endpointNumber:(unsigned char)a1 usbDeviceAddress:(unsigned char)a2 busNumber:(unsigned char)a3;

@end
